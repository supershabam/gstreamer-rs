// Generated by gir (https://github.com/gtk-rs/gir @ 7ca0cbfc850e)
// from gir-files (https://github.com/gtk-rs/gir-files @ b827978e7d18)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git @ 0220d4948268)
// DO NOT EDIT

use gstreamer_net_sys::*;
use std::env;
use std::error::Error;
use std::ffi::OsString;
use std::mem::{align_of, size_of};
use std::path::Path;
use std::process::Command;
use std::str;
use tempfile::Builder;

static PACKAGES: &[&str] = &["gstreamer-net-1.0"];

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
        "GstNetAddressMeta",
        Layout {
            size: size_of::<GstNetAddressMeta>(),
            alignment: align_of::<GstNetAddressMeta>(),
        },
    ),
    (
        "GstNetClientClock",
        Layout {
            size: size_of::<GstNetClientClock>(),
            alignment: align_of::<GstNetClientClock>(),
        },
    ),
    (
        "GstNetClientClockClass",
        Layout {
            size: size_of::<GstNetClientClockClass>(),
            alignment: align_of::<GstNetClientClockClass>(),
        },
    ),
    (
        "GstNetControlMessageMeta",
        Layout {
            size: size_of::<GstNetControlMessageMeta>(),
            alignment: align_of::<GstNetControlMessageMeta>(),
        },
    ),
    (
        "GstNetTimePacket",
        Layout {
            size: size_of::<GstNetTimePacket>(),
            alignment: align_of::<GstNetTimePacket>(),
        },
    ),
    (
        "GstNetTimeProvider",
        Layout {
            size: size_of::<GstNetTimeProvider>(),
            alignment: align_of::<GstNetTimeProvider>(),
        },
    ),
    (
        "GstNetTimeProviderClass",
        Layout {
            size: size_of::<GstNetTimeProviderClass>(),
            alignment: align_of::<GstNetTimeProviderClass>(),
        },
    ),
    (
        "GstNtpClock",
        Layout {
            size: size_of::<GstNtpClock>(),
            alignment: align_of::<GstNtpClock>(),
        },
    ),
    (
        "GstNtpClockClass",
        Layout {
            size: size_of::<GstNtpClockClass>(),
            alignment: align_of::<GstNtpClockClass>(),
        },
    ),
    (
        "GstPtpClock",
        Layout {
            size: size_of::<GstPtpClock>(),
            alignment: align_of::<GstPtpClock>(),
        },
    ),
    (
        "GstPtpClockClass",
        Layout {
            size: size_of::<GstPtpClockClass>(),
            alignment: align_of::<GstPtpClockClass>(),
        },
    ),
];

const RUST_CONSTANTS: &[(&str, &str)] = &[
    ("GST_NET_TIME_PACKET_SIZE", "16"),
    ("GST_PTP_CLOCK_ID_NONE", "18446744073709551615"),
    (
        "GST_PTP_STATISTICS_BEST_MASTER_CLOCK_SELECTED",
        "GstPtpStatisticsBestMasterClockSelected",
    ),
    (
        "GST_PTP_STATISTICS_NEW_DOMAIN_FOUND",
        "GstPtpStatisticsNewDomainFound",
    ),
    (
        "GST_PTP_STATISTICS_PATH_DELAY_MEASURED",
        "GstPtpStatisticsPathDelayMeasured",
    ),
    (
        "GST_PTP_STATISTICS_TIME_UPDATED",
        "GstPtpStatisticsTimeUpdated",
    ),
];
