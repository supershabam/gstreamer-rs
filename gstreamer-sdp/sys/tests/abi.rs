// Generated by gir (https://github.com/gtk-rs/gir @ ee37253c10af)
// from gir-files (https://github.com/gtk-rs/gir-files @ 5502d32880f5)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git @ f05404723520)
// DO NOT EDIT

use gstreamer_sdp_sys::*;
use std::env;
use std::error::Error;
use std::ffi::OsString;
use std::mem::{align_of, size_of};
use std::path::Path;
use std::process::Command;
use std::str;
use tempfile::Builder;

static PACKAGES: &[&str] = &["gstreamer-sdp-1.0"];

#[derive(Clone, Debug)]
struct Compiler {
    pub args: Vec<String>,
}

impl Compiler {
    pub fn new() -> Result<Self, Box<dyn Error>> {
        let mut args = get_var("CC", "cc")?;
        args.push("-Wno-deprecated-declarations".to_owned());
        // For _Generic
        args.push("-std=c11".to_owned());
        // For %z support in printf when using MinGW.
        args.push("-D__USE_MINGW_ANSI_STDIO".to_owned());
        args.extend(get_var("CFLAGS", "")?);
        args.extend(get_var("CPPFLAGS", "")?);
        args.extend(pkg_config_cflags(PACKAGES)?);
        Ok(Self { args })
    }

    pub fn compile(&self, src: &Path, out: &Path) -> Result<(), Box<dyn Error>> {
        let mut cmd = self.to_command();
        cmd.arg(src);
        cmd.arg("-o");
        cmd.arg(out);
        let status = cmd.spawn()?.wait()?;
        if !status.success() {
            return Err(format!("compilation command {:?} failed, {}", &cmd, status).into());
        }
        Ok(())
    }

    fn to_command(&self) -> Command {
        let mut cmd = Command::new(&self.args[0]);
        cmd.args(&self.args[1..]);
        cmd
    }
}

fn get_var(name: &str, default: &str) -> Result<Vec<String>, Box<dyn Error>> {
    match env::var(name) {
        Ok(value) => Ok(shell_words::split(&value)?),
        Err(env::VarError::NotPresent) => Ok(shell_words::split(default)?),
        Err(err) => Err(format!("{} {}", name, err).into()),
    }
}

fn pkg_config_cflags(packages: &[&str]) -> Result<Vec<String>, Box<dyn Error>> {
    if packages.is_empty() {
        return Ok(Vec::new());
    }
    let pkg_config = env::var_os("PKG_CONFIG").unwrap_or_else(|| OsString::from("pkg-config"));
    let mut cmd = Command::new(pkg_config);
    cmd.arg("--cflags");
    cmd.args(packages);
    let out = cmd.output()?;
    if !out.status.success() {
        return Err(format!("command {:?} returned {}", &cmd, out.status).into());
    }
    let stdout = str::from_utf8(&out.stdout)?;
    Ok(shell_words::split(stdout.trim())?)
}

#[derive(Copy, Clone, Debug, Eq, PartialEq)]
struct Layout {
    size: usize,
    alignment: usize,
}

#[derive(Copy, Clone, Debug, Default, Eq, PartialEq)]
struct Results {
    /// Number of successfully completed tests.
    passed: usize,
    /// Total number of failed tests (including those that failed to compile).
    failed: usize,
}

impl Results {
    fn record_passed(&mut self) {
        self.passed += 1;
    }
    fn record_failed(&mut self) {
        self.failed += 1;
    }
    fn summary(&self) -> String {
        format!("{} passed; {} failed", self.passed, self.failed)
    }
    fn expect_total_success(&self) {
        if self.failed == 0 {
            println!("OK: {}", self.summary());
        } else {
            panic!("FAILED: {}", self.summary());
        };
    }
}

#[test]
fn cross_validate_constants_with_c() {
    let mut c_constants: Vec<(String, String)> = Vec::new();

    for l in get_c_output("constant").unwrap().lines() {
        let mut words = l.trim().split(';');
        let name = words.next().expect("Failed to parse name").to_owned();
        let value = words
            .next()
            .and_then(|s| s.parse().ok())
            .expect("Failed to parse value");
        c_constants.push((name, value));
    }

    let mut results = Results::default();

    for ((rust_name, rust_value), (c_name, c_value)) in
        RUST_CONSTANTS.iter().zip(c_constants.iter())
    {
        if rust_name != c_name {
            results.record_failed();
            eprintln!("Name mismatch:\nRust: {:?}\nC:    {:?}", rust_name, c_name,);
            continue;
        }

        if rust_value != c_value {
            results.record_failed();
            eprintln!(
                "Constant value mismatch for {}\nRust: {:?}\nC:    {:?}",
                rust_name, rust_value, &c_value
            );
            continue;
        }

        results.record_passed();
    }

    results.expect_total_success();
}

#[test]
fn cross_validate_layout_with_c() {
    let mut c_layouts = Vec::new();

    for l in get_c_output("layout").unwrap().lines() {
        let mut words = l.trim().split(';');
        let name = words.next().expect("Failed to parse name").to_owned();
        let size = words
            .next()
            .and_then(|s| s.parse().ok())
            .expect("Failed to parse size");
        let alignment = words
            .next()
            .and_then(|s| s.parse().ok())
            .expect("Failed to parse alignment");
        c_layouts.push((name, Layout { size, alignment }));
    }

    let mut results = Results::default();

    for ((rust_name, rust_layout), (c_name, c_layout)) in RUST_LAYOUTS.iter().zip(c_layouts.iter())
    {
        if rust_name != c_name {
            results.record_failed();
            eprintln!("Name mismatch:\nRust: {:?}\nC:    {:?}", rust_name, c_name,);
            continue;
        }

        if rust_layout != c_layout {
            results.record_failed();
            eprintln!(
                "Layout mismatch for {}\nRust: {:?}\nC:    {:?}",
                rust_name, rust_layout, &c_layout
            );
            continue;
        }

        results.record_passed();
    }

    results.expect_total_success();
}

fn get_c_output(name: &str) -> Result<String, Box<dyn Error>> {
    let tmpdir = Builder::new().prefix("abi").tempdir()?;
    let exe = tmpdir.path().join(name);
    let c_file = Path::new("tests").join(name).with_extension("c");

    let cc = Compiler::new().expect("configured compiler");
    cc.compile(&c_file, &exe)?;

    let mut abi_cmd = Command::new(exe);
    let output = abi_cmd.output()?;
    if !output.status.success() {
        return Err(format!("command {:?} failed, {:?}", &abi_cmd, &output).into());
    }

    Ok(String::from_utf8(output.stdout)?)
}

const RUST_LAYOUTS: &[(&str, Layout)] = &[
    (
        "GstMIKEYCacheType",
        Layout {
            size: size_of::<GstMIKEYCacheType>(),
            alignment: align_of::<GstMIKEYCacheType>(),
        },
    ),
    (
        "GstMIKEYEncAlg",
        Layout {
            size: size_of::<GstMIKEYEncAlg>(),
            alignment: align_of::<GstMIKEYEncAlg>(),
        },
    ),
    (
        "GstMIKEYKVType",
        Layout {
            size: size_of::<GstMIKEYKVType>(),
            alignment: align_of::<GstMIKEYKVType>(),
        },
    ),
    (
        "GstMIKEYKeyDataType",
        Layout {
            size: size_of::<GstMIKEYKeyDataType>(),
            alignment: align_of::<GstMIKEYKeyDataType>(),
        },
    ),
    (
        "GstMIKEYMacAlg",
        Layout {
            size: size_of::<GstMIKEYMacAlg>(),
            alignment: align_of::<GstMIKEYMacAlg>(),
        },
    ),
    (
        "GstMIKEYMapSRTP",
        Layout {
            size: size_of::<GstMIKEYMapSRTP>(),
            alignment: align_of::<GstMIKEYMapSRTP>(),
        },
    ),
    (
        "GstMIKEYMapType",
        Layout {
            size: size_of::<GstMIKEYMapType>(),
            alignment: align_of::<GstMIKEYMapType>(),
        },
    ),
    (
        "GstMIKEYMessage",
        Layout {
            size: size_of::<GstMIKEYMessage>(),
            alignment: align_of::<GstMIKEYMessage>(),
        },
    ),
    (
        "GstMIKEYPRFFunc",
        Layout {
            size: size_of::<GstMIKEYPRFFunc>(),
            alignment: align_of::<GstMIKEYPRFFunc>(),
        },
    ),
    (
        "GstMIKEYPayload",
        Layout {
            size: size_of::<GstMIKEYPayload>(),
            alignment: align_of::<GstMIKEYPayload>(),
        },
    ),
    (
        "GstMIKEYPayloadKEMAC",
        Layout {
            size: size_of::<GstMIKEYPayloadKEMAC>(),
            alignment: align_of::<GstMIKEYPayloadKEMAC>(),
        },
    ),
    (
        "GstMIKEYPayloadKeyData",
        Layout {
            size: size_of::<GstMIKEYPayloadKeyData>(),
            alignment: align_of::<GstMIKEYPayloadKeyData>(),
        },
    ),
    (
        "GstMIKEYPayloadPKE",
        Layout {
            size: size_of::<GstMIKEYPayloadPKE>(),
            alignment: align_of::<GstMIKEYPayloadPKE>(),
        },
    ),
    (
        "GstMIKEYPayloadRAND",
        Layout {
            size: size_of::<GstMIKEYPayloadRAND>(),
            alignment: align_of::<GstMIKEYPayloadRAND>(),
        },
    ),
    (
        "GstMIKEYPayloadSP",
        Layout {
            size: size_of::<GstMIKEYPayloadSP>(),
            alignment: align_of::<GstMIKEYPayloadSP>(),
        },
    ),
    (
        "GstMIKEYPayloadSPParam",
        Layout {
            size: size_of::<GstMIKEYPayloadSPParam>(),
            alignment: align_of::<GstMIKEYPayloadSPParam>(),
        },
    ),
    (
        "GstMIKEYPayloadT",
        Layout {
            size: size_of::<GstMIKEYPayloadT>(),
            alignment: align_of::<GstMIKEYPayloadT>(),
        },
    ),
    (
        "GstMIKEYPayloadType",
        Layout {
            size: size_of::<GstMIKEYPayloadType>(),
            alignment: align_of::<GstMIKEYPayloadType>(),
        },
    ),
    (
        "GstMIKEYSecProto",
        Layout {
            size: size_of::<GstMIKEYSecProto>(),
            alignment: align_of::<GstMIKEYSecProto>(),
        },
    ),
    (
        "GstMIKEYSecSRTP",
        Layout {
            size: size_of::<GstMIKEYSecSRTP>(),
            alignment: align_of::<GstMIKEYSecSRTP>(),
        },
    ),
    (
        "GstMIKEYTSType",
        Layout {
            size: size_of::<GstMIKEYTSType>(),
            alignment: align_of::<GstMIKEYTSType>(),
        },
    ),
    (
        "GstMIKEYType",
        Layout {
            size: size_of::<GstMIKEYType>(),
            alignment: align_of::<GstMIKEYType>(),
        },
    ),
    (
        "GstSDPAttribute",
        Layout {
            size: size_of::<GstSDPAttribute>(),
            alignment: align_of::<GstSDPAttribute>(),
        },
    ),
    (
        "GstSDPBandwidth",
        Layout {
            size: size_of::<GstSDPBandwidth>(),
            alignment: align_of::<GstSDPBandwidth>(),
        },
    ),
    (
        "GstSDPConnection",
        Layout {
            size: size_of::<GstSDPConnection>(),
            alignment: align_of::<GstSDPConnection>(),
        },
    ),
    (
        "GstSDPKey",
        Layout {
            size: size_of::<GstSDPKey>(),
            alignment: align_of::<GstSDPKey>(),
        },
    ),
    (
        "GstSDPMedia",
        Layout {
            size: size_of::<GstSDPMedia>(),
            alignment: align_of::<GstSDPMedia>(),
        },
    ),
    (
        "GstSDPMessage",
        Layout {
            size: size_of::<GstSDPMessage>(),
            alignment: align_of::<GstSDPMessage>(),
        },
    ),
    (
        "GstSDPOrigin",
        Layout {
            size: size_of::<GstSDPOrigin>(),
            alignment: align_of::<GstSDPOrigin>(),
        },
    ),
    (
        "GstSDPResult",
        Layout {
            size: size_of::<GstSDPResult>(),
            alignment: align_of::<GstSDPResult>(),
        },
    ),
    (
        "GstSDPTime",
        Layout {
            size: size_of::<GstSDPTime>(),
            alignment: align_of::<GstSDPTime>(),
        },
    ),
    (
        "GstSDPZone",
        Layout {
            size: size_of::<GstSDPZone>(),
            alignment: align_of::<GstSDPZone>(),
        },
    ),
];

const RUST_CONSTANTS: &[(&str, &str)] = &[
    ("(gint) GST_MIKEY_CACHE_ALWAYS", "1"),
    ("(gint) GST_MIKEY_CACHE_FOR_CSB", "2"),
    ("(gint) GST_MIKEY_CACHE_NONE", "0"),
    ("(gint) GST_MIKEY_ENC_AES_CM_128", "1"),
    ("(gint) GST_MIKEY_ENC_AES_GCM_128", "6"),
    ("(gint) GST_MIKEY_ENC_AES_KW_128", "2"),
    ("(gint) GST_MIKEY_ENC_NULL", "0"),
    ("(gint) GST_MIKEY_KD_TEK", "2"),
    ("(gint) GST_MIKEY_KD_TGK", "0"),
    ("(gint) GST_MIKEY_KV_INTERVAL", "2"),
    ("(gint) GST_MIKEY_KV_NULL", "0"),
    ("(gint) GST_MIKEY_KV_SPI", "1"),
    ("(gint) GST_MIKEY_MAC_HMAC_SHA_1_160", "1"),
    ("(gint) GST_MIKEY_MAC_NULL", "0"),
    ("(gint) GST_MIKEY_MAP_TYPE_SRTP", "0"),
    ("(gint) GST_MIKEY_PRF_MIKEY_1", "0"),
    ("(gint) GST_MIKEY_PT_CERT", "7"),
    ("(gint) GST_MIKEY_PT_CHASH", "8"),
    ("(gint) GST_MIKEY_PT_DH", "3"),
    ("(gint) GST_MIKEY_PT_ERR", "12"),
    ("(gint) GST_MIKEY_PT_GEN_EXT", "21"),
    ("(gint) GST_MIKEY_PT_ID", "6"),
    ("(gint) GST_MIKEY_PT_KEMAC", "1"),
    ("(gint) GST_MIKEY_PT_KEY_DATA", "20"),
    ("(gint) GST_MIKEY_PT_LAST", "0"),
    ("(gint) GST_MIKEY_PT_PKE", "2"),
    ("(gint) GST_MIKEY_PT_RAND", "11"),
    ("(gint) GST_MIKEY_PT_SIGN", "4"),
    ("(gint) GST_MIKEY_PT_SP", "10"),
    ("(gint) GST_MIKEY_PT_T", "5"),
    ("(gint) GST_MIKEY_PT_V", "9"),
    ("(gint) GST_MIKEY_SEC_PROTO_SRTP", "0"),
    ("(gint) GST_MIKEY_SP_SRTP_AEAD_AUTH_TAG_LEN", "20"),
    ("(gint) GST_MIKEY_SP_SRTP_AUTH_ALG", "2"),
    ("(gint) GST_MIKEY_SP_SRTP_AUTH_KEY_LEN", "3"),
    ("(gint) GST_MIKEY_SP_SRTP_AUTH_TAG_LEN", "11"),
    ("(gint) GST_MIKEY_SP_SRTP_ENC_ALG", "0"),
    ("(gint) GST_MIKEY_SP_SRTP_ENC_KEY_LEN", "1"),
    ("(gint) GST_MIKEY_SP_SRTP_FEC_ORDER", "9"),
    ("(gint) GST_MIKEY_SP_SRTP_KEY_DERIV_RATE", "6"),
    ("(gint) GST_MIKEY_SP_SRTP_PRF", "5"),
    ("(gint) GST_MIKEY_SP_SRTP_SALT_KEY_LEN", "4"),
    ("(gint) GST_MIKEY_SP_SRTP_SRTCP_ENC", "8"),
    ("(gint) GST_MIKEY_SP_SRTP_SRTP_AUTH", "10"),
    ("(gint) GST_MIKEY_SP_SRTP_SRTP_ENC", "7"),
    ("(gint) GST_MIKEY_SP_SRTP_SRTP_PREFIX_LEN", "12"),
    ("(gint) GST_MIKEY_TS_TYPE_COUNTER", "2"),
    ("(gint) GST_MIKEY_TS_TYPE_NTP", "1"),
    ("(gint) GST_MIKEY_TS_TYPE_NTP_UTC", "0"),
    ("(gint) GST_MIKEY_TYPE_DH_INIT", "4"),
    ("(gint) GST_MIKEY_TYPE_DH_RESP", "5"),
    ("(gint) GST_MIKEY_TYPE_ERROR", "6"),
    ("(gint) GST_MIKEY_TYPE_INVALID", "-1"),
    ("(gint) GST_MIKEY_TYPE_PK_INIT", "2"),
    ("(gint) GST_MIKEY_TYPE_PK_VERIFY", "3"),
    ("(gint) GST_MIKEY_TYPE_PSK_INIT", "0"),
    ("(gint) GST_MIKEY_TYPE_PSK_VERIFY", "1"),
    ("GST_MIKEY_VERSION", "1"),
    ("GST_SDP_BWTYPE_AS", "AS"),
    ("GST_SDP_BWTYPE_CT", "CT"),
    ("GST_SDP_BWTYPE_EXT_PREFIX", "X-"),
    ("GST_SDP_BWTYPE_RR", "RR"),
    ("GST_SDP_BWTYPE_RS", "RS"),
    ("GST_SDP_BWTYPE_TIAS", "TIAS"),
    ("(gint) GST_SDP_EINVAL", "-1"),
    ("(gint) GST_SDP_OK", "0"),
];
