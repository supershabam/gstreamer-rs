// This file was generated by gir (https://github.com/gtk-rs/gir)
// from gir-files (https://github.com/gtk-rs/gir-files)
// DO NOT EDIT

use glib::object::IsA;
use glib::translate::*;
use gst_sys;
use Element;
use Object;
use TagList;
use TagMergeMode;

glib_wrapper! {
    pub struct TagSetter(Interface<gst_sys::GstTagSetter>) @requires Element, Object;

    match fn {
        get_type => || gst_sys::gst_tag_setter_get_type(),
    }
}

unsafe impl Send for TagSetter {}
unsafe impl Sync for TagSetter {}

pub const NONE_TAG_SETTER: Option<&TagSetter> = None;

pub trait TagSetterExt: 'static {
    //fn add_tag_valist(&self, mode: TagMergeMode, tag: &str, var_args: /*Unknown conversion*//*Unimplemented*/Unsupported);

    //fn add_tag_valist_values(&self, mode: TagMergeMode, tag: &str, var_args: /*Unknown conversion*//*Unimplemented*/Unsupported);

    //fn add_tag_values(&self, mode: TagMergeMode, tag: &str, : /*Unknown conversion*//*Unimplemented*/Fundamental: VarArgs);

    //fn add_tags(&self, mode: TagMergeMode, tag: &str, : /*Unknown conversion*//*Unimplemented*/Fundamental: VarArgs);

    fn get_tag_list(&self) -> Option<TagList>;

    fn get_tag_merge_mode(&self) -> TagMergeMode;

    fn merge_tags(&self, list: &TagList, mode: TagMergeMode);

    fn reset_tags(&self);

    fn set_tag_merge_mode(&self, mode: TagMergeMode);
}

impl<O: IsA<TagSetter>> TagSetterExt for O {
    //fn add_tag_valist(&self, mode: TagMergeMode, tag: &str, var_args: /*Unknown conversion*//*Unimplemented*/Unsupported) {
    //    unsafe { TODO: call gst_sys:gst_tag_setter_add_tag_valist() }
    //}

    //fn add_tag_valist_values(&self, mode: TagMergeMode, tag: &str, var_args: /*Unknown conversion*//*Unimplemented*/Unsupported) {
    //    unsafe { TODO: call gst_sys:gst_tag_setter_add_tag_valist_values() }
    //}

    //fn add_tag_values(&self, mode: TagMergeMode, tag: &str, : /*Unknown conversion*//*Unimplemented*/Fundamental: VarArgs) {
    //    unsafe { TODO: call gst_sys:gst_tag_setter_add_tag_values() }
    //}

    //fn add_tags(&self, mode: TagMergeMode, tag: &str, : /*Unknown conversion*//*Unimplemented*/Fundamental: VarArgs) {
    //    unsafe { TODO: call gst_sys:gst_tag_setter_add_tags() }
    //}

    fn get_tag_list(&self) -> Option<TagList> {
        unsafe {
            from_glib_none(gst_sys::gst_tag_setter_get_tag_list(
                self.as_ref().to_glib_none().0,
            ))
        }
    }

    fn get_tag_merge_mode(&self) -> TagMergeMode {
        unsafe {
            from_glib(gst_sys::gst_tag_setter_get_tag_merge_mode(
                self.as_ref().to_glib_none().0,
            ))
        }
    }

    fn merge_tags(&self, list: &TagList, mode: TagMergeMode) {
        unsafe {
            gst_sys::gst_tag_setter_merge_tags(
                self.as_ref().to_glib_none().0,
                list.to_glib_none().0,
                mode.to_glib(),
            );
        }
    }

    fn reset_tags(&self) {
        unsafe {
            gst_sys::gst_tag_setter_reset_tags(self.as_ref().to_glib_none().0);
        }
    }

    fn set_tag_merge_mode(&self, mode: TagMergeMode) {
        unsafe {
            gst_sys::gst_tag_setter_set_tag_merge_mode(
                self.as_ref().to_glib_none().0,
                mode.to_glib(),
            );
        }
    }
}
