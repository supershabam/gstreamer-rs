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
use gobject_sys as gobject;
use gstreamer_sys as gst;

#[allow(unused_imports)]
use libc::{
    c_char, c_double, c_float, c_int, c_long, c_short, c_uchar, c_uint, c_ulong, c_ushort, c_void,
    intptr_t, size_t, ssize_t, time_t, uintptr_t, FILE,
};

#[allow(unused_imports)]
use glib::{gboolean, gconstpointer, gpointer, GType};

// Enums
pub type GstInterpolationMode = c_int;
pub const GST_INTERPOLATION_MODE_NONE: GstInterpolationMode = 0;
pub const GST_INTERPOLATION_MODE_LINEAR: GstInterpolationMode = 1;
pub const GST_INTERPOLATION_MODE_CUBIC: GstInterpolationMode = 2;
pub const GST_INTERPOLATION_MODE_CUBIC_MONOTONIC: GstInterpolationMode = 3;

pub type GstLFOWaveform = c_int;
pub const GST_LFO_WAVEFORM_SINE: GstLFOWaveform = 0;
pub const GST_LFO_WAVEFORM_SQUARE: GstLFOWaveform = 1;
pub const GST_LFO_WAVEFORM_SAW: GstLFOWaveform = 2;
pub const GST_LFO_WAVEFORM_REVERSE_SAW: GstLFOWaveform = 3;
pub const GST_LFO_WAVEFORM_TRIANGLE: GstLFOWaveform = 4;

// Unions
#[repr(C)]
#[derive(Copy, Clone)]
pub union GstControlPoint_cache {
    pub cubic: GstControlPoint_cache_cubic,
    pub cubic_monotonic: GstControlPoint_cache_cubic_monotonic,
    pub _gst_reserved: [u8; 64],
}

impl ::std::fmt::Debug for GstControlPoint_cache {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstControlPoint_cache @ {:p}", self))
            .field("cubic", unsafe { &self.cubic })
            .field("cubic_monotonic", unsafe { &self.cubic_monotonic })
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub union GstDirectControlBinding_ABI {
    pub _gst_reserved: [gpointer; 4],
    pub abi: GstDirectControlBinding_ABI_abi,
}

impl ::std::fmt::Debug for GstDirectControlBinding_ABI {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstDirectControlBinding_ABI @ {:p}", self))
            .field("_gst_reserved", unsafe { &self._gst_reserved })
            .field("abi", unsafe { &self.abi })
            .finish()
    }
}

// Callbacks
pub type GstDirectControlBindingConvertGValue =
    Option<unsafe extern "C" fn(*mut GstDirectControlBinding, c_double, *mut gobject::GValue)>;
pub type GstDirectControlBindingConvertValue =
    Option<unsafe extern "C" fn(*mut GstDirectControlBinding, c_double, gpointer)>;

// Records
#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstARGBControlBindingClass {
    pub parent_class: gst::GstControlBindingClass,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstARGBControlBindingClass {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstARGBControlBindingClass @ {:p}", self))
            .field("parent_class", &self.parent_class)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstControlPoint {
    pub timestamp: gst::GstClockTime,
    pub value: c_double,
    pub cache: GstControlPoint_cache,
}

impl ::std::fmt::Debug for GstControlPoint {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstControlPoint @ {:p}", self))
            .field("timestamp", &self.timestamp)
            .field("value", &self.value)
            .field("cache", &self.cache)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstControlPoint_cache_cubic {
    pub h: c_double,
    pub z: c_double,
}

impl ::std::fmt::Debug for GstControlPoint_cache_cubic {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstControlPoint_cache_cubic @ {:p}", self))
            .field("h", &self.h)
            .field("z", &self.z)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstControlPoint_cache_cubic_monotonic {
    pub c1s: c_double,
    pub c2s: c_double,
    pub c3s: c_double,
}

impl ::std::fmt::Debug for GstControlPoint_cache_cubic_monotonic {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!(
            "GstControlPoint_cache_cubic_monotonic @ {:p}",
            self
        ))
        .field("c1s", &self.c1s)
        .field("c2s", &self.c2s)
        .field("c3s", &self.c3s)
        .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstDirectControlBindingClass {
    pub parent_class: gst::GstControlBindingClass,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstDirectControlBindingClass {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstDirectControlBindingClass @ {:p}", self))
            .field("parent_class", &self.parent_class)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstDirectControlBinding_ABI_abi {
    pub want_absolute: gboolean,
}

impl ::std::fmt::Debug for GstDirectControlBinding_ABI_abi {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstDirectControlBinding_ABI_abi @ {:p}", self))
            .field("want_absolute", &self.want_absolute)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstInterpolationControlSourceClass {
    pub parent_class: GstTimedValueControlSourceClass,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstInterpolationControlSourceClass {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstInterpolationControlSourceClass @ {:p}", self))
            .field("parent_class", &self.parent_class)
            .finish()
    }
}

#[repr(C)]
pub struct _GstInterpolationControlSourcePrivate(c_void);

pub type GstInterpolationControlSourcePrivate = *mut _GstInterpolationControlSourcePrivate;

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstLFOControlSourceClass {
    pub parent_class: gst::GstControlSourceClass,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstLFOControlSourceClass {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstLFOControlSourceClass @ {:p}", self))
            .field("parent_class", &self.parent_class)
            .finish()
    }
}

#[repr(C)]
pub struct _GstLFOControlSourcePrivate(c_void);

pub type GstLFOControlSourcePrivate = *mut _GstLFOControlSourcePrivate;

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstProxyControlBindingClass {
    pub parent_class: gst::GstControlBindingClass,
    pub _padding: [gpointer; 4],
}

impl ::std::fmt::Debug for GstProxyControlBindingClass {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstProxyControlBindingClass @ {:p}", self))
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstTimedValueControlSourceClass {
    pub parent_class: gst::GstControlSourceClass,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstTimedValueControlSourceClass {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstTimedValueControlSourceClass @ {:p}", self))
            .field("parent_class", &self.parent_class)
            .finish()
    }
}

#[repr(C)]
pub struct _GstTimedValueControlSourcePrivate(c_void);

pub type GstTimedValueControlSourcePrivate = *mut _GstTimedValueControlSourcePrivate;

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstTriggerControlSourceClass {
    pub parent_class: GstTimedValueControlSourceClass,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstTriggerControlSourceClass {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstTriggerControlSourceClass @ {:p}", self))
            .field("parent_class", &self.parent_class)
            .finish()
    }
}

#[repr(C)]
pub struct _GstTriggerControlSourcePrivate(c_void);

pub type GstTriggerControlSourcePrivate = *mut _GstTriggerControlSourcePrivate;

// Classes
#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstARGBControlBinding {
    pub parent: gst::GstControlBinding,
    pub cs_a: *mut gst::GstControlSource,
    pub cs_r: *mut gst::GstControlSource,
    pub cs_g: *mut gst::GstControlSource,
    pub cs_b: *mut gst::GstControlSource,
    pub cur_value: gobject::GValue,
    pub last_value: u32,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstARGBControlBinding {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstARGBControlBinding @ {:p}", self))
            .field("parent", &self.parent)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstDirectControlBinding {
    pub parent: gst::GstControlBinding,
    pub cs: *mut gst::GstControlSource,
    pub cur_value: gobject::GValue,
    pub last_value: c_double,
    pub byte_size: c_int,
    pub convert_value: GstDirectControlBindingConvertValue,
    pub convert_g_value: GstDirectControlBindingConvertGValue,
    pub ABI: GstDirectControlBinding_ABI,
}

impl ::std::fmt::Debug for GstDirectControlBinding {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstDirectControlBinding @ {:p}", self))
            .field("parent", &self.parent)
            .field("ABI", &self.ABI)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstInterpolationControlSource {
    pub parent: GstTimedValueControlSource,
    pub priv_: *mut GstInterpolationControlSourcePrivate,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstInterpolationControlSource {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstInterpolationControlSource @ {:p}", self))
            .field("parent", &self.parent)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstLFOControlSource {
    pub parent: gst::GstControlSource,
    pub priv_: *mut GstLFOControlSourcePrivate,
    pub lock: glib::GMutex,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstLFOControlSource {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstLFOControlSource @ {:p}", self))
            .field("parent", &self.parent)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstProxyControlBinding {
    pub parent: gst::GstControlBinding,
    pub ref_object: gobject::GWeakRef,
    pub property_name: *mut c_char,
    pub _padding: [gpointer; 4],
}

impl ::std::fmt::Debug for GstProxyControlBinding {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstProxyControlBinding @ {:p}", self))
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstTimedValueControlSource {
    pub parent: gst::GstControlSource,
    pub lock: glib::GMutex,
    pub values: *mut glib::GSequence,
    pub nvalues: c_int,
    pub valid_cache: gboolean,
    pub priv_: *mut GstTimedValueControlSourcePrivate,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstTimedValueControlSource {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstTimedValueControlSource @ {:p}", self))
            .field("parent", &self.parent)
            .field("lock", &self.lock)
            .field("values", &self.values)
            .field("nvalues", &self.nvalues)
            .field("valid_cache", &self.valid_cache)
            .finish()
    }
}

#[repr(C)]
#[derive(Copy, Clone)]
pub struct GstTriggerControlSource {
    pub parent: GstTimedValueControlSource,
    pub priv_: *mut GstTriggerControlSourcePrivate,
    pub _gst_reserved: [gpointer; 4],
}

impl ::std::fmt::Debug for GstTriggerControlSource {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        f.debug_struct(&format!("GstTriggerControlSource @ {:p}", self))
            .field("parent", &self.parent)
            .finish()
    }
}

#[link(name = "gstcontroller-1.0")]
extern "C" {

    //=========================================================================
    // GstInterpolationMode
    //=========================================================================
    pub fn gst_interpolation_mode_get_type() -> GType;

    //=========================================================================
    // GstLFOWaveform
    //=========================================================================
    pub fn gst_lfo_waveform_get_type() -> GType;

    //=========================================================================
    // GstControlPoint
    //=========================================================================
    pub fn gst_control_point_get_type() -> GType;
    pub fn gst_control_point_copy(cp: *mut GstControlPoint) -> *mut GstControlPoint;
    pub fn gst_control_point_free(cp: *mut GstControlPoint);

    //=========================================================================
    // GstARGBControlBinding
    //=========================================================================
    pub fn gst_argb_control_binding_get_type() -> GType;
    pub fn gst_argb_control_binding_new(
        object: *mut gst::GstObject,
        property_name: *const c_char,
        cs_a: *mut gst::GstControlSource,
        cs_r: *mut gst::GstControlSource,
        cs_g: *mut gst::GstControlSource,
        cs_b: *mut gst::GstControlSource,
    ) -> *mut gst::GstControlBinding;

    //=========================================================================
    // GstDirectControlBinding
    //=========================================================================
    pub fn gst_direct_control_binding_get_type() -> GType;
    pub fn gst_direct_control_binding_new(
        object: *mut gst::GstObject,
        property_name: *const c_char,
        cs: *mut gst::GstControlSource,
    ) -> *mut gst::GstControlBinding;
    pub fn gst_direct_control_binding_new_absolute(
        object: *mut gst::GstObject,
        property_name: *const c_char,
        cs: *mut gst::GstControlSource,
    ) -> *mut gst::GstControlBinding;

    //=========================================================================
    // GstInterpolationControlSource
    //=========================================================================
    pub fn gst_interpolation_control_source_get_type() -> GType;
    pub fn gst_interpolation_control_source_new() -> *mut gst::GstControlSource;

    //=========================================================================
    // GstLFOControlSource
    //=========================================================================
    pub fn gst_lfo_control_source_get_type() -> GType;
    pub fn gst_lfo_control_source_new() -> *mut gst::GstControlSource;

    //=========================================================================
    // GstProxyControlBinding
    //=========================================================================
    pub fn gst_proxy_control_binding_get_type() -> GType;
    #[cfg(any(feature = "v1_12", feature = "dox"))]
    #[cfg_attr(feature = "dox", doc(cfg(feature = "v1_12")))]
    pub fn gst_proxy_control_binding_new(
        object: *mut gst::GstObject,
        property_name: *const c_char,
        ref_object: *mut gst::GstObject,
        ref_property_name: *const c_char,
    ) -> *mut gst::GstControlBinding;

    //=========================================================================
    // GstTimedValueControlSource
    //=========================================================================
    pub fn gst_timed_value_control_source_get_type() -> GType;
    pub fn gst_timed_value_control_source_find_control_point_iter(
        self_: *mut GstTimedValueControlSource,
        timestamp: gst::GstClockTime,
    ) -> *mut glib::GSequenceIter;
    pub fn gst_timed_value_control_source_get_all(
        self_: *mut GstTimedValueControlSource,
    ) -> *mut glib::GList;
    pub fn gst_timed_value_control_source_get_count(
        self_: *mut GstTimedValueControlSource,
    ) -> c_int;
    pub fn gst_timed_value_control_source_set(
        self_: *mut GstTimedValueControlSource,
        timestamp: gst::GstClockTime,
        value: c_double,
    ) -> gboolean;
    pub fn gst_timed_value_control_source_set_from_list(
        self_: *mut GstTimedValueControlSource,
        timedvalues: *const glib::GSList,
    ) -> gboolean;
    pub fn gst_timed_value_control_source_unset(
        self_: *mut GstTimedValueControlSource,
        timestamp: gst::GstClockTime,
    ) -> gboolean;
    pub fn gst_timed_value_control_source_unset_all(self_: *mut GstTimedValueControlSource);

    //=========================================================================
    // GstTriggerControlSource
    //=========================================================================
    pub fn gst_trigger_control_source_get_type() -> GType;
    pub fn gst_trigger_control_source_new() -> *mut gst::GstControlSource;

    //=========================================================================
    // Other functions
    //=========================================================================
    pub fn gst_timed_value_control_invalidate_cache(self_: *mut GstTimedValueControlSource);

}
