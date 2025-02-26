// Generated by gir (https://github.com/gtk-rs/gir @ ee37253c10af)
// from gir-files (https://github.com/gtk-rs/gir-files @ 5502d32880f5)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git @ f05404723520)
// DO NOT EDIT

#include "manual.h"
#include <stdio.h>

#define PRINT_CONSTANT(CONSTANT_NAME) \
    printf("%s;", #CONSTANT_NAME); \
    printf(_Generic((CONSTANT_NAME), \
                    char *: "%s", \
                    const char *: "%s", \
                    char: "%c", \
                    signed char: "%hhd", \
                    unsigned char: "%hhu", \
                    short int: "%hd", \
                    unsigned short int: "%hu", \
                    int: "%d", \
                    unsigned int: "%u", \
                    long: "%ld", \
                    unsigned long: "%lu", \
                    long long: "%lld", \
                    unsigned long long: "%llu", \
                    float: "%f", \
                    double: "%f", \
                    long double: "%ld"), \
           CONSTANT_NAME); \
    printf("\n");

int main() {
    PRINT_CONSTANT(GST_TAG_ACOUSTID_FINGERPRINT);
    PRINT_CONSTANT(GST_TAG_ACOUSTID_ID);
    PRINT_CONSTANT(GST_TAG_CAPTURING_CONTRAST);
    PRINT_CONSTANT(GST_TAG_CAPTURING_DIGITAL_ZOOM_RATIO);
    PRINT_CONSTANT(GST_TAG_CAPTURING_EXPOSURE_COMPENSATION);
    PRINT_CONSTANT(GST_TAG_CAPTURING_EXPOSURE_MODE);
    PRINT_CONSTANT(GST_TAG_CAPTURING_EXPOSURE_PROGRAM);
    PRINT_CONSTANT(GST_TAG_CAPTURING_FLASH_FIRED);
    PRINT_CONSTANT(GST_TAG_CAPTURING_FLASH_MODE);
    PRINT_CONSTANT(GST_TAG_CAPTURING_FOCAL_LENGTH);
    PRINT_CONSTANT(GST_TAG_CAPTURING_FOCAL_LENGTH_35_MM);
    PRINT_CONSTANT(GST_TAG_CAPTURING_FOCAL_RATIO);
    PRINT_CONSTANT(GST_TAG_CAPTURING_GAIN_ADJUSTMENT);
    PRINT_CONSTANT(GST_TAG_CAPTURING_ISO_SPEED);
    PRINT_CONSTANT(GST_TAG_CAPTURING_METERING_MODE);
    PRINT_CONSTANT(GST_TAG_CAPTURING_SATURATION);
    PRINT_CONSTANT(GST_TAG_CAPTURING_SCENE_CAPTURE_TYPE);
    PRINT_CONSTANT(GST_TAG_CAPTURING_SHARPNESS);
    PRINT_CONSTANT(GST_TAG_CAPTURING_SHUTTER_SPEED);
    PRINT_CONSTANT(GST_TAG_CAPTURING_SOURCE);
    PRINT_CONSTANT(GST_TAG_CAPTURING_WHITE_BALANCE);
    PRINT_CONSTANT(GST_TAG_CDDA_CDDB_DISCID);
    PRINT_CONSTANT(GST_TAG_CDDA_CDDB_DISCID_FULL);
    PRINT_CONSTANT(GST_TAG_CDDA_MUSICBRAINZ_DISCID);
    PRINT_CONSTANT(GST_TAG_CDDA_MUSICBRAINZ_DISCID_FULL);
    PRINT_CONSTANT(GST_TAG_CMML_CLIP);
    PRINT_CONSTANT(GST_TAG_CMML_HEAD);
    PRINT_CONSTANT(GST_TAG_CMML_STREAM);
    PRINT_CONSTANT((gint) GST_TAG_DEMUX_RESULT_AGAIN);
    PRINT_CONSTANT((gint) GST_TAG_DEMUX_RESULT_BROKEN_TAG);
    PRINT_CONSTANT((gint) GST_TAG_DEMUX_RESULT_OK);
    PRINT_CONSTANT(GST_TAG_ID3V2_HEADER_SIZE);
    PRINT_CONSTANT(GST_TAG_IMAGE_HORIZONTAL_PPI);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_ARTIST);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_BACK_COVER);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_BAND_ARTIST_LOGO);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_BAND_ORCHESTRA);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_COMPOSER);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_CONDUCTOR);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_DURING_PERFORMANCE);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_DURING_RECORDING);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_FISH);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_FRONT_COVER);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_ILLUSTRATION);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_LEAD_ARTIST);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_LEAFLET_PAGE);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_LYRICIST);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_MEDIUM);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_NONE);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_PUBLISHER_STUDIO_LOGO);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_RECORDING_LOCATION);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_UNDEFINED);
    PRINT_CONSTANT((gint) GST_TAG_IMAGE_TYPE_VIDEO_CAPTURE);
    PRINT_CONSTANT(GST_TAG_IMAGE_VERTICAL_PPI);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_CREATIVE_COMMONS_LICENSE);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_FREE_SOFTWARE_FOUNDATION_LICENSE);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_PERMITS_DERIVATIVE_WORKS);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_PERMITS_DISTRIBUTION);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_PERMITS_REPRODUCTION);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_PERMITS_SHARING);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_PROHIBITS_COMMERCIAL_USE);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_PROHIBITS_HIGH_INCOME_NATION_USE);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_REQUIRES_ATTRIBUTION);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_REQUIRES_COPYLEFT);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_REQUIRES_LESSER_COPYLEFT);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_REQUIRES_NOTICE);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_REQUIRES_SHARE_ALIKE);
    PRINT_CONSTANT((guint) GST_TAG_LICENSE_REQUIRES_SOURCE_CODE);
    PRINT_CONSTANT(GST_TAG_MUSICAL_KEY);
    PRINT_CONSTANT(GST_TAG_MUSICBRAINZ_ALBUMARTISTID);
    PRINT_CONSTANT(GST_TAG_MUSICBRAINZ_ALBUMID);
    PRINT_CONSTANT(GST_TAG_MUSICBRAINZ_ARTISTID);
    PRINT_CONSTANT(GST_TAG_MUSICBRAINZ_RELEASEGROUPID);
    PRINT_CONSTANT(GST_TAG_MUSICBRAINZ_RELEASETRACKID);
    PRINT_CONSTANT(GST_TAG_MUSICBRAINZ_TRACKID);
    PRINT_CONSTANT(GST_TAG_MUSICBRAINZ_TRMID);
    return 0;
}
