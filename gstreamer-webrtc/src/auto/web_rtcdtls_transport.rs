// This file was generated by gir (https://github.com/gtk-rs/gir)
// from gir-files (https://github.com/gtk-rs/gir-files)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git)
// DO NOT EDIT

use crate::WebRTCDTLSTransportState;
use crate::WebRTCICETransport;
use glib::object::ObjectType as ObjectType_;
use glib::signal::connect_raw;
use glib::signal::SignalHandlerId;
use glib::translate::*;
use glib::StaticType;
use glib::ToValue;
use std::boxed::Box as Box_;
use std::mem::transmute;

glib::wrapper! {
    #[doc(alias = "GstWebRTCDTLSTransport")]
    pub struct WebRTCDTLSTransport(Object<ffi::GstWebRTCDTLSTransport, ffi::GstWebRTCDTLSTransportClass>);

    match fn {
        type_ => || ffi::gst_webrtc_dtls_transport_get_type(),
    }
}

impl WebRTCDTLSTransport {
    #[cfg(any(feature = "v1_20", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_20")))]
    #[doc(alias = "gst_webrtc_dtls_transport_new")]
    pub fn new(session_id: u32) -> WebRTCDTLSTransport {
        assert_initialized_main_thread!();
        unsafe { from_glib_none(ffi::gst_webrtc_dtls_transport_new(session_id)) }
    }

    #[doc(alias = "gst_webrtc_dtls_transport_set_transport")]
    pub fn set_transport(&self, ice: &WebRTCICETransport) {
        unsafe {
            ffi::gst_webrtc_dtls_transport_set_transport(
                self.to_glib_none().0,
                ice.to_glib_none().0,
            );
        }
    }

    pub fn certificate(&self) -> Option<glib::GString> {
        unsafe {
            let mut value = glib::Value::from_type(<glib::GString as StaticType>::static_type());
            glib::gobject_ffi::g_object_get_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"certificate\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value
                .get()
                .expect("Return Value for property `certificate` getter")
        }
    }

    pub fn set_certificate(&self, certificate: Option<&str>) {
        unsafe {
            glib::gobject_ffi::g_object_set_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"certificate\0".as_ptr() as *const _,
                certificate.to_value().to_glib_none().0,
            );
        }
    }

    pub fn is_client(&self) -> bool {
        unsafe {
            let mut value = glib::Value::from_type(<bool as StaticType>::static_type());
            glib::gobject_ffi::g_object_get_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"client\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value
                .get()
                .expect("Return Value for property `client` getter")
        }
    }

    pub fn set_client(&self, client: bool) {
        unsafe {
            glib::gobject_ffi::g_object_set_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"client\0".as_ptr() as *const _,
                client.to_value().to_glib_none().0,
            );
        }
    }

    #[doc(alias = "remote-certificate")]
    pub fn remote_certificate(&self) -> Option<glib::GString> {
        unsafe {
            let mut value = glib::Value::from_type(<glib::GString as StaticType>::static_type());
            glib::gobject_ffi::g_object_get_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"remote-certificate\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value
                .get()
                .expect("Return Value for property `remote-certificate` getter")
        }
    }

    #[doc(alias = "session-id")]
    pub fn session_id(&self) -> u32 {
        unsafe {
            let mut value = glib::Value::from_type(<u32 as StaticType>::static_type());
            glib::gobject_ffi::g_object_get_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"session-id\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value
                .get()
                .expect("Return Value for property `session-id` getter")
        }
    }

    pub fn state(&self) -> WebRTCDTLSTransportState {
        unsafe {
            let mut value =
                glib::Value::from_type(<WebRTCDTLSTransportState as StaticType>::static_type());
            glib::gobject_ffi::g_object_get_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"state\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value
                .get()
                .expect("Return Value for property `state` getter")
        }
    }

    pub fn transport(&self) -> Option<WebRTCICETransport> {
        unsafe {
            let mut value =
                glib::Value::from_type(<WebRTCICETransport as StaticType>::static_type());
            glib::gobject_ffi::g_object_get_property(
                self.as_ptr() as *mut glib::gobject_ffi::GObject,
                b"transport\0".as_ptr() as *const _,
                value.to_glib_none_mut().0,
            );
            value
                .get()
                .expect("Return Value for property `transport` getter")
        }
    }

    #[doc(alias = "certificate")]
    pub fn connect_certificate_notify<F: Fn(&Self) + Send + Sync + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_certificate_trampoline<
            F: Fn(&WebRTCDTLSTransport) + Send + Sync + 'static,
        >(
            this: *mut ffi::GstWebRTCDTLSTransport,
            _param_spec: glib::ffi::gpointer,
            f: glib::ffi::gpointer,
        ) {
            let f: &F = &*(f as *const F);
            f(&from_glib_borrow(this))
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::certificate\0".as_ptr() as *const _,
                Some(transmute::<_, unsafe extern "C" fn()>(
                    notify_certificate_trampoline::<F> as *const (),
                )),
                Box_::into_raw(f),
            )
        }
    }

    #[doc(alias = "client")]
    pub fn connect_client_notify<F: Fn(&Self) + Send + Sync + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_client_trampoline<
            F: Fn(&WebRTCDTLSTransport) + Send + Sync + 'static,
        >(
            this: *mut ffi::GstWebRTCDTLSTransport,
            _param_spec: glib::ffi::gpointer,
            f: glib::ffi::gpointer,
        ) {
            let f: &F = &*(f as *const F);
            f(&from_glib_borrow(this))
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::client\0".as_ptr() as *const _,
                Some(transmute::<_, unsafe extern "C" fn()>(
                    notify_client_trampoline::<F> as *const (),
                )),
                Box_::into_raw(f),
            )
        }
    }

    #[doc(alias = "remote-certificate")]
    pub fn connect_remote_certificate_notify<F: Fn(&Self) + Send + Sync + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_remote_certificate_trampoline<
            F: Fn(&WebRTCDTLSTransport) + Send + Sync + 'static,
        >(
            this: *mut ffi::GstWebRTCDTLSTransport,
            _param_spec: glib::ffi::gpointer,
            f: glib::ffi::gpointer,
        ) {
            let f: &F = &*(f as *const F);
            f(&from_glib_borrow(this))
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::remote-certificate\0".as_ptr() as *const _,
                Some(transmute::<_, unsafe extern "C" fn()>(
                    notify_remote_certificate_trampoline::<F> as *const (),
                )),
                Box_::into_raw(f),
            )
        }
    }

    #[doc(alias = "state")]
    pub fn connect_state_notify<F: Fn(&Self) + Send + Sync + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_state_trampoline<
            F: Fn(&WebRTCDTLSTransport) + Send + Sync + 'static,
        >(
            this: *mut ffi::GstWebRTCDTLSTransport,
            _param_spec: glib::ffi::gpointer,
            f: glib::ffi::gpointer,
        ) {
            let f: &F = &*(f as *const F);
            f(&from_glib_borrow(this))
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::state\0".as_ptr() as *const _,
                Some(transmute::<_, unsafe extern "C" fn()>(
                    notify_state_trampoline::<F> as *const (),
                )),
                Box_::into_raw(f),
            )
        }
    }

    #[doc(alias = "transport")]
    pub fn connect_transport_notify<F: Fn(&Self) + Send + Sync + 'static>(
        &self,
        f: F,
    ) -> SignalHandlerId {
        unsafe extern "C" fn notify_transport_trampoline<
            F: Fn(&WebRTCDTLSTransport) + Send + Sync + 'static,
        >(
            this: *mut ffi::GstWebRTCDTLSTransport,
            _param_spec: glib::ffi::gpointer,
            f: glib::ffi::gpointer,
        ) {
            let f: &F = &*(f as *const F);
            f(&from_glib_borrow(this))
        }
        unsafe {
            let f: Box_<F> = Box_::new(f);
            connect_raw(
                self.as_ptr() as *mut _,
                b"notify::transport\0".as_ptr() as *const _,
                Some(transmute::<_, unsafe extern "C" fn()>(
                    notify_transport_trampoline::<F> as *const (),
                )),
                Box_::into_raw(f),
            )
        }
    }
}

unsafe impl Send for WebRTCDTLSTransport {}
unsafe impl Sync for WebRTCDTLSTransport {}
