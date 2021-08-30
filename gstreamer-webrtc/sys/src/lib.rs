// Generated by gir (https://github.com/gtk-rs/gir @ 9e7b5ee)
// from gir-files (https://github.com/gtk-rs/gir-files @ 7d95377)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git @ 831b444)
// DO NOT EDIT

#![allow(non_camel_case_types, non_upper_case_globals, non_snake_case)]
#![allow(
    clippy::approx_constant,
    clippy::type_complexity,
    clippy::unreadable_literal,
    clippy::upper_case_acronyms
)]
#![cfg_attr(feature = "dox", feature(doc_cfg))]

use glib_sys as glib;
use gstreamer_sdp_sys as gst_sdp;

#[allow(unused_imports)]
use libc::{
    c_char, c_double, c_float, c_int, c_long, c_short, c_uchar, c_uint, c_ulong, c_ushort, c_void,
    intptr_t, size_t, ssize_t, time_t, uintptr_t, FILE,
};

#[allow(unused_imports)]
use glib::{gboolean, gconstpointer, gpointer, GType};

// Enums
pub type GstWebRTCBundlePolicy = c_int;
pub const GST_WEBRTC_BUNDLE_POLICY_NONE: GstWebRTCBundlePolicy = 0;
pub const GST_WEBRTC_BUNDLE_POLICY_BALANCED: GstWebRTCBundlePolicy = 1;
pub const GST_WEBRTC_BUNDLE_POLICY_MAX_COMPAT: GstWebRTCBundlePolicy = 2;
pub const GST_WEBRTC_BUNDLE_POLICY_MAX_BUNDLE: GstWebRTCBundlePolicy = 3;

pub type GstWebRTCDTLSSetup = c_int;
pub const GST_WEBRTC_DTLS_SETUP_NONE: GstWebRTCDTLSSetup = 0;
pub const GST_WEBRTC_DTLS_SETUP_ACTPASS: GstWebRTCDTLSSetup = 1;
pub const GST_WEBRTC_DTLS_SETUP_ACTIVE: GstWebRTCDTLSSetup = 2;
pub const GST_WEBRTC_DTLS_SETUP_PASSIVE: GstWebRTCDTLSSetup = 3;

pub type GstWebRTCDTLSTransportState = c_int;
pub const GST_WEBRTC_DTLS_TRANSPORT_STATE_NEW: GstWebRTCDTLSTransportState = 0;
pub const GST_WEBRTC_DTLS_TRANSPORT_STATE_CLOSED: GstWebRTCDTLSTransportState = 1;
pub const GST_WEBRTC_DTLS_TRANSPORT_STATE_FAILED: GstWebRTCDTLSTransportState = 2;
pub const GST_WEBRTC_DTLS_TRANSPORT_STATE_CONNECTING: GstWebRTCDTLSTransportState = 3;
pub const GST_WEBRTC_DTLS_TRANSPORT_STATE_CONNECTED: GstWebRTCDTLSTransportState = 4;

pub type GstWebRTCDataChannelState = c_int;
pub const GST_WEBRTC_DATA_CHANNEL_STATE_NEW: GstWebRTCDataChannelState = 0;
pub const GST_WEBRTC_DATA_CHANNEL_STATE_CONNECTING: GstWebRTCDataChannelState = 1;
pub const GST_WEBRTC_DATA_CHANNEL_STATE_OPEN: GstWebRTCDataChannelState = 2;
pub const GST_WEBRTC_DATA_CHANNEL_STATE_CLOSING: GstWebRTCDataChannelState = 3;
pub const GST_WEBRTC_DATA_CHANNEL_STATE_CLOSED: GstWebRTCDataChannelState = 4;

pub type GstWebRTCFECType = c_int;
pub const GST_WEBRTC_FEC_TYPE_NONE: GstWebRTCFECType = 0;
pub const GST_WEBRTC_FEC_TYPE_ULP_RED: GstWebRTCFECType = 1;

pub type GstWebRTCICEComponent = c_int;
pub const GST_WEBRTC_ICE_COMPONENT_RTP: GstWebRTCICEComponent = 0;
pub const GST_WEBRTC_ICE_COMPONENT_RTCP: GstWebRTCICEComponent = 1;

pub type GstWebRTCICEConnectionState = c_int;
pub const GST_WEBRTC_ICE_CONNECTION_STATE_NEW: GstWebRTCICEConnectionState = 0;
pub const GST_WEBRTC_ICE_CONNECTION_STATE_CHECKING: GstWebRTCICEConnectionState = 1;
pub const GST_WEBRTC_ICE_CONNECTION_STATE_CONNECTED: GstWebRTCICEConnectionState = 2;
pub const GST_WEBRTC_ICE_CONNECTION_STATE_COMPLETED: GstWebRTCICEConnectionState = 3;
pub const GST_WEBRTC_ICE_CONNECTION_STATE_FAILED: GstWebRTCICEConnectionState = 4;
pub const GST_WEBRTC_ICE_CONNECTION_STATE_DISCONNECTED: GstWebRTCICEConnectionState = 5;
pub const GST_WEBRTC_ICE_CONNECTION_STATE_CLOSED: GstWebRTCICEConnectionState = 6;

pub type GstWebRTCICEGatheringState = c_int;
pub const GST_WEBRTC_ICE_GATHERING_STATE_NEW: GstWebRTCICEGatheringState = 0;
pub const GST_WEBRTC_ICE_GATHERING_STATE_GATHERING: GstWebRTCICEGatheringState = 1;
pub const GST_WEBRTC_ICE_GATHERING_STATE_COMPLETE: GstWebRTCICEGatheringState = 2;

pub type GstWebRTCICERole = c_int;
pub const GST_WEBRTC_ICE_ROLE_CONTROLLED: GstWebRTCICERole = 0;
pub const GST_WEBRTC_ICE_ROLE_CONTROLLING: GstWebRTCICERole = 1;

pub type GstWebRTCICETransportPolicy = c_int;
pub const GST_WEBRTC_ICE_TRANSPORT_POLICY_ALL: GstWebRTCICETransportPolicy = 0;
pub const GST_WEBRTC_ICE_TRANSPORT_POLICY_RELAY: GstWebRTCICETransportPolicy = 1;

pub type GstWebRTCKind = c_int;
pub const GST_WEBRTC_KIND_UNKNOWN: GstWebRTCKind = 0;
pub const GST_WEBRTC_KIND_AUDIO: GstWebRTCKind = 1;
pub const GST_WEBRTC_KIND_VIDEO: GstWebRTCKind = 2;

pub type GstWebRTCPeerConnectionState = c_int;
pub const GST_WEBRTC_PEER_CONNECTION_STATE_NEW: GstWebRTCPeerConnectionState = 0;
pub const GST_WEBRTC_PEER_CONNECTION_STATE_CONNECTING: GstWebRTCPeerConnectionState = 1;
pub const GST_WEBRTC_PEER_CONNECTION_STATE_CONNECTED: GstWebRTCPeerConnectionState = 2;
pub const GST_WEBRTC_PEER_CONNECTION_STATE_DISCONNECTED: GstWebRTCPeerConnectionState = 3;
pub const GST_WEBRTC_PEER_CONNECTION_STATE_FAILED: GstWebRTCPeerConnectionState = 4;
pub const GST_WEBRTC_PEER_CONNECTION_STATE_CLOSED: GstWebRTCPeerConnectionState = 5;

pub type GstWebRTCPriorityType = c_int;
pub const GST_WEBRTC_PRIORITY_TYPE_VERY_LOW: GstWebRTCPriorityType = 1;
pub const GST_WEBRTC_PRIORITY_TYPE_LOW: GstWebRTCPriorityType = 2;
pub const GST_WEBRTC_PRIORITY_TYPE_MEDIUM: GstWebRTCPriorityType = 3;
pub const GST_WEBRTC_PRIORITY_TYPE_HIGH: GstWebRTCPriorityType = 4;

pub type GstWebRTCRTPTransceiverDirection = c_int;
pub const GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_NONE: GstWebRTCRTPTransceiverDirection = 0;
pub const GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_INACTIVE: GstWebRTCRTPTransceiverDirection = 1;
pub const GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_SENDONLY: GstWebRTCRTPTransceiverDirection = 2;
pub const GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_RECVONLY: GstWebRTCRTPTransceiverDirection = 3;
pub const GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_SENDRECV: GstWebRTCRTPTransceiverDirection = 4;

pub type GstWebRTCSCTPTransportState = c_int;
pub const GST_WEBRTC_SCTP_TRANSPORT_STATE_NEW: GstWebRTCSCTPTransportState = 0;
pub const GST_WEBRTC_SCTP_TRANSPORT_STATE_CONNECTING: GstWebRTCSCTPTransportState = 1;
pub const GST_WEBRTC_SCTP_TRANSPORT_STATE_CONNECTED: GstWebRTCSCTPTransportState = 2;
pub const GST_WEBRTC_SCTP_TRANSPORT_STATE_CLOSED: GstWebRTCSCTPTransportState = 3;

pub type GstWebRTCSDPType = c_int;
pub const GST_WEBRTC_SDP_TYPE_OFFER: GstWebRTCSDPType = 1;
pub const GST_WEBRTC_SDP_TYPE_PRANSWER: GstWebRTCSDPType = 2;
pub const GST_WEBRTC_SDP_TYPE_ANSWER: GstWebRTCSDPType = 3;
pub const GST_WEBRTC_SDP_TYPE_ROLLBACK: GstWebRTCSDPType = 4;

pub type GstWebRTCSignalingState = c_int;
pub const GST_WEBRTC_SIGNALING_STATE_STABLE: GstWebRTCSignalingState = 0;
pub const GST_WEBRTC_SIGNALING_STATE_CLOSED: GstWebRTCSignalingState = 1;
pub const GST_WEBRTC_SIGNALING_STATE_HAVE_LOCAL_OFFER: GstWebRTCSignalingState = 2;
pub const GST_WEBRTC_SIGNALING_STATE_HAVE_REMOTE_OFFER: GstWebRTCSignalingState = 3;
pub const GST_WEBRTC_SIGNALING_STATE_HAVE_LOCAL_PRANSWER: GstWebRTCSignalingState = 4;
pub const GST_WEBRTC_SIGNALING_STATE_HAVE_REMOTE_PRANSWER: GstWebRTCSignalingState = 5;

pub type GstWebRTCStatsType = c_int;
pub const GST_WEBRTC_STATS_CODEC: GstWebRTCStatsType = 1;
pub const GST_WEBRTC_STATS_INBOUND_RTP: GstWebRTCStatsType = 2;
pub const GST_WEBRTC_STATS_OUTBOUND_RTP: GstWebRTCStatsType = 3;
pub const GST_WEBRTC_STATS_REMOTE_INBOUND_RTP: GstWebRTCStatsType = 4;
pub const GST_WEBRTC_STATS_REMOTE_OUTBOUND_RTP: GstWebRTCStatsType = 5;
pub const GST_WEBRTC_STATS_CSRC: GstWebRTCStatsType = 6;
pub const GST_WEBRTC_STATS_PEER_CONNECTION: GstWebRTCStatsType = 7;
pub const GST_WEBRTC_STATS_DATA_CHANNEL: GstWebRTCStatsType = 8;
pub const GST_WEBRTC_STATS_STREAM: GstWebRTCStatsType = 9;
pub const GST_WEBRTC_STATS_TRANSPORT: GstWebRTCStatsType = 10;
pub const GST_WEBRTC_STATS_CANDIDATE_PAIR: GstWebRTCStatsType = 11;
pub const GST_WEBRTC_STATS_LOCAL_CANDIDATE: GstWebRTCStatsType = 12;
pub const GST_WEBRTC_STATS_REMOTE_CANDIDATE: GstWebRTCStatsType = 13;
pub const GST_WEBRTC_STATS_CERTIFICATE: GstWebRTCStatsType = 14;

// Records
#[repr(C)]
pub struct _GstWebRTCDTLSTransportClass(c_void);

pub type GstWebRTCDTLSTransportClass = *mut _GstWebRTCDTLSTransportClass;

#[repr(C)]
pub struct _GstWebRTCDataChannelClass(c_void);

pub type GstWebRTCDataChannelClass = *mut _GstWebRTCDataChannelClass;

#[repr(C)]
pub struct _GstWebRTCICETransportClass(c_void);

pub type GstWebRTCICETransportClass = *mut _GstWebRTCICETransportClass;

#[repr(C)]
pub struct _GstWebRTCRTPReceiverClass(c_void);

pub type GstWebRTCRTPReceiverClass = *mut _GstWebRTCRTPReceiverClass;

#[repr(C)]
pub struct _GstWebRTCRTPSenderClass(c_void);

pub type GstWebRTCRTPSenderClass = *mut _GstWebRTCRTPSenderClass;

#[repr(C)]
pub struct _GstWebRTCRTPTransceiverClass(c_void);

pub type GstWebRTCRTPTransceiverClass = *mut _GstWebRTCRTPTransceiverClass;

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstWebRTCSessionDescription {
    pub type_: GstWebRTCSDPType,
    pub sdp: *mut gst_sdp::GstSDPMessage,
}

impl ::std::fmt::Debug for GstWebRTCSessionDescription {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstWebRTCSessionDescription @ {:p}", self))
            .field("type_", &self.type_)
            .field("sdp", &self.sdp)
            .finish()
    }
}

// Classes
#[repr(C)]
pub struct GstWebRTCDTLSTransport(c_void);

impl ::std::fmt::Debug for GstWebRTCDTLSTransport {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstWebRTCDTLSTransport @ {:p}", self))
            .finish()
    }
}

#[repr(C)]
pub struct GstWebRTCDataChannel(c_void);

impl ::std::fmt::Debug for GstWebRTCDataChannel {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstWebRTCDataChannel @ {:p}", self))
            .finish()
    }
}

#[repr(C)]
pub struct GstWebRTCICETransport(c_void);

impl ::std::fmt::Debug for GstWebRTCICETransport {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstWebRTCICETransport @ {:p}", self))
            .finish()
    }
}

#[repr(C)]
pub struct GstWebRTCRTPReceiver(c_void);

impl ::std::fmt::Debug for GstWebRTCRTPReceiver {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstWebRTCRTPReceiver @ {:p}", self))
            .finish()
    }
}

#[repr(C)]
pub struct GstWebRTCRTPSender(c_void);

impl ::std::fmt::Debug for GstWebRTCRTPSender {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstWebRTCRTPSender @ {:p}", self))
            .finish()
    }
}

#[repr(C)]
pub struct GstWebRTCRTPTransceiver(c_void);

impl ::std::fmt::Debug for GstWebRTCRTPTransceiver {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstWebRTCRTPTransceiver @ {:p}", self))
            .finish()
    }
}

#[link(name = "gstwebrtc-1.0")]
extern "C" {

    //=========================================================================
    // GstWebRTCBundlePolicy
    //=========================================================================
    #[cfg(any(feature = "v1_16", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_16")))]
    pub fn gst_webrtc_bundle_policy_get_type() -> GType;

    //=========================================================================
    // GstWebRTCDTLSSetup
    //=========================================================================
    pub fn gst_webrtc_dtls_setup_get_type() -> GType;

    //=========================================================================
    // GstWebRTCDTLSTransportState
    //=========================================================================
    pub fn gst_webrtc_dtls_transport_state_get_type() -> GType;

    //=========================================================================
    // GstWebRTCDataChannelState
    //=========================================================================
    #[cfg(any(feature = "v1_16", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_16")))]
    pub fn gst_webrtc_data_channel_state_get_type() -> GType;

    //=========================================================================
    // GstWebRTCFECType
    //=========================================================================
    #[cfg(any(feature = "v1_14_1", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_14_1")))]
    pub fn gst_webrtc_fec_type_get_type() -> GType;

    //=========================================================================
    // GstWebRTCICEComponent
    //=========================================================================
    pub fn gst_webrtc_ice_component_get_type() -> GType;

    //=========================================================================
    // GstWebRTCICEConnectionState
    //=========================================================================
    pub fn gst_webrtc_ice_connection_state_get_type() -> GType;

    //=========================================================================
    // GstWebRTCICEGatheringState
    //=========================================================================
    pub fn gst_webrtc_ice_gathering_state_get_type() -> GType;

    //=========================================================================
    // GstWebRTCICERole
    //=========================================================================
    pub fn gst_webrtc_ice_role_get_type() -> GType;

    //=========================================================================
    // GstWebRTCICETransportPolicy
    //=========================================================================
    #[cfg(any(feature = "v1_16", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_16")))]
    pub fn gst_webrtc_ice_transport_policy_get_type() -> GType;

    //=========================================================================
    // GstWebRTCKind
    //=========================================================================
    #[cfg(any(feature = "v1_20", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
    pub fn gst_webrtc_kind_get_type() -> GType;

    //=========================================================================
    // GstWebRTCPeerConnectionState
    //=========================================================================
    pub fn gst_webrtc_peer_connection_state_get_type() -> GType;

    //=========================================================================
    // GstWebRTCPriorityType
    //=========================================================================
    #[cfg(any(feature = "v1_16", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_16")))]
    pub fn gst_webrtc_priority_type_get_type() -> GType;

    //=========================================================================
    // GstWebRTCRTPTransceiverDirection
    //=========================================================================
    pub fn gst_webrtc_rtp_transceiver_direction_get_type() -> GType;

    //=========================================================================
    // GstWebRTCSCTPTransportState
    //=========================================================================
    #[cfg(any(feature = "v1_16", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_16")))]
    pub fn gst_webrtc_sctp_transport_state_get_type() -> GType;

    //=========================================================================
    // GstWebRTCSDPType
    //=========================================================================
    pub fn gst_webrtc_sdp_type_get_type() -> GType;
    pub fn gst_webrtc_sdp_type_to_string(type_: GstWebRTCSDPType) -> *const c_char;

    //=========================================================================
    // GstWebRTCSignalingState
    //=========================================================================
    pub fn gst_webrtc_signaling_state_get_type() -> GType;

    //=========================================================================
    // GstWebRTCStatsType
    //=========================================================================
    pub fn gst_webrtc_stats_type_get_type() -> GType;

    //=========================================================================
    // GstWebRTCSessionDescription
    //=========================================================================
    pub fn gst_webrtc_session_description_get_type() -> GType;
    pub fn gst_webrtc_session_description_new(
        type_: GstWebRTCSDPType,
        sdp: *mut gst_sdp::GstSDPMessage,
    ) -> *mut GstWebRTCSessionDescription;
    pub fn gst_webrtc_session_description_copy(
        src: *const GstWebRTCSessionDescription,
    ) -> *mut GstWebRTCSessionDescription;
    pub fn gst_webrtc_session_description_free(desc: *mut GstWebRTCSessionDescription);

    //=========================================================================
    // GstWebRTCDTLSTransport
    //=========================================================================
    pub fn gst_webrtc_dtls_transport_get_type() -> GType;

    //=========================================================================
    // GstWebRTCDataChannel
    //=========================================================================
    #[cfg(any(feature = "v1_18", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_18")))]
    pub fn gst_webrtc_data_channel_get_type() -> GType;
    #[cfg(any(feature = "v1_18", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_18")))]
    pub fn gst_webrtc_data_channel_close(channel: *mut GstWebRTCDataChannel);
    #[cfg(any(feature = "v1_18", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_18")))]
    pub fn gst_webrtc_data_channel_send_data(
        channel: *mut GstWebRTCDataChannel,
        data: *mut glib::GBytes,
    );
    #[cfg(any(feature = "v1_18", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_18")))]
    pub fn gst_webrtc_data_channel_send_string(
        channel: *mut GstWebRTCDataChannel,
        str: *const c_char,
    );

    //=========================================================================
    // GstWebRTCICETransport
    //=========================================================================
    pub fn gst_webrtc_ice_transport_get_type() -> GType;

    //=========================================================================
    // GstWebRTCRTPReceiver
    //=========================================================================
    pub fn gst_webrtc_rtp_receiver_get_type() -> GType;

    //=========================================================================
    // GstWebRTCRTPSender
    //=========================================================================
    pub fn gst_webrtc_rtp_sender_get_type() -> GType;
    #[cfg(any(feature = "v1_20", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
    pub fn gst_webrtc_rtp_sender_set_priority(
        sender: *mut GstWebRTCRTPSender,
        priority: GstWebRTCPriorityType,
    );

    //=========================================================================
    // GstWebRTCRTPTransceiver
    //=========================================================================
    pub fn gst_webrtc_rtp_transceiver_get_type() -> GType;

}
