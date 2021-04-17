// This file was generated by gir (https://github.com/gtk-rs/gir)
// from gir-files (https://github.com/gtk-rs/gir-files)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git)
// DO NOT EDIT

#[cfg(any(feature = "v1_20", feature = "dox"))]
#[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
mod rtp_header_extension;
#[cfg(any(feature = "v1_20", feature = "dox"))]
#[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
pub use self::rtp_header_extension::{RTPHeaderExtension, NONE_RTP_HEADER_EXTENSION};

mod enums;
pub use self::enums::RTCPFBType;
pub use self::enums::RTCPSDESType;
pub use self::enums::RTCPType;
#[cfg(any(feature = "v1_16", feature = "dox"))]
#[cfg_attr(feature = "dox", doc(cfg(feature = "v1_16")))]
pub use self::enums::RTCPXRType;
pub use self::enums::RTPPayload;
pub use self::enums::RTPProfile;

mod flags;
#[cfg(any(feature = "v1_10", feature = "dox"))]
#[cfg_attr(feature = "dox", doc(cfg(feature = "v1_10")))]
pub use self::flags::RTPBufferFlags;
pub use self::flags::RTPBufferMapFlags;
#[cfg(any(feature = "v1_20", feature = "dox"))]
#[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
pub use self::flags::RTPHeaderExtensionFlags;

pub mod functions;

mod constants;
pub use self::constants::RTP_HDREXT_BASE;
#[cfg(any(feature = "v1_20", feature = "dox"))]
#[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
pub use self::constants::RTP_HDREXT_ELEMENT_CLASS;
pub use self::constants::RTP_HDREXT_NTP_56;
pub use self::constants::RTP_HDREXT_NTP_64;
#[cfg(any(feature = "v1_20", feature = "dox"))]
#[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
pub use self::constants::RTP_HEADER_EXTENSION_URI_METADATA_KEY;
pub use self::constants::RTP_PAYLOAD_1016_STRING;
pub use self::constants::RTP_PAYLOAD_CELLB_STRING;
pub use self::constants::RTP_PAYLOAD_CN_STRING;
pub use self::constants::RTP_PAYLOAD_DVI4_11025_STRING;
pub use self::constants::RTP_PAYLOAD_DVI4_16000_STRING;
pub use self::constants::RTP_PAYLOAD_DVI4_22050_STRING;
pub use self::constants::RTP_PAYLOAD_DVI4_8000_STRING;
pub use self::constants::RTP_PAYLOAD_DYNAMIC_STRING;
pub use self::constants::RTP_PAYLOAD_G721_STRING;
pub use self::constants::RTP_PAYLOAD_G722_STRING;
pub use self::constants::RTP_PAYLOAD_G723_53_STRING;
pub use self::constants::RTP_PAYLOAD_G723_63_STRING;
pub use self::constants::RTP_PAYLOAD_G723_STRING;
pub use self::constants::RTP_PAYLOAD_G728_STRING;
pub use self::constants::RTP_PAYLOAD_G729_STRING;
pub use self::constants::RTP_PAYLOAD_GSM_STRING;
pub use self::constants::RTP_PAYLOAD_H261_STRING;
pub use self::constants::RTP_PAYLOAD_H263_STRING;
pub use self::constants::RTP_PAYLOAD_JPEG_STRING;
pub use self::constants::RTP_PAYLOAD_L16_MONO_STRING;
pub use self::constants::RTP_PAYLOAD_L16_STEREO_STRING;
pub use self::constants::RTP_PAYLOAD_LPC_STRING;
pub use self::constants::RTP_PAYLOAD_MP2T_STRING;
pub use self::constants::RTP_PAYLOAD_MPA_STRING;
pub use self::constants::RTP_PAYLOAD_MPV_STRING;
pub use self::constants::RTP_PAYLOAD_NV_STRING;
pub use self::constants::RTP_PAYLOAD_PCMA_STRING;
pub use self::constants::RTP_PAYLOAD_PCMU_STRING;
pub use self::constants::RTP_PAYLOAD_QCELP_STRING;
pub use self::constants::RTP_PAYLOAD_TS41_STRING;
pub use self::constants::RTP_PAYLOAD_TS48_STRING;

#[doc(hidden)]
pub mod traits {
    #[cfg(any(feature = "v1_20", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
    pub use super::rtp_header_extension::RTPHeaderExtensionExt;
}
