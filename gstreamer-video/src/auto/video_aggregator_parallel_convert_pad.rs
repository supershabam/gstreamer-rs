// This file was generated by gir (https://github.com/gtk-rs/gir)
// from gir-files (https://github.com/gtk-rs/gir-files)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git)
// DO NOT EDIT

glib::wrapper! {
    #[doc(alias = "GstVideoAggregatorParallelConvertPad")]
    pub struct VideoAggregatorParallelConvertPad(Object<ffi::GstVideoAggregatorParallelConvertPad, ffi::GstVideoAggregatorParallelConvertPadClass>) @extends gst::Object;

    match fn {
        type_ => || ffi::gst_video_aggregator_parallel_convert_pad_get_type(),
    }
}

impl VideoAggregatorParallelConvertPad {}

unsafe impl Send for VideoAggregatorParallelConvertPad {}
unsafe impl Sync for VideoAggregatorParallelConvertPad {}

pub const NONE_VIDEO_AGGREGATOR_PARALLEL_CONVERT_PAD: Option<&VideoAggregatorParallelConvertPad> =
    None;
