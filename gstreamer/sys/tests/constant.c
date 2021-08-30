// Generated by gir (https://github.com/gtk-rs/gir @ 9e7b5ee)
// from gir-files (https://github.com/gtk-rs/gir-files @ 7d95377)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git @ 831b444)
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
    PRINT_CONSTANT((guint) GST_ALLOCATOR_FLAG_CUSTOM_ALLOC);
    PRINT_CONSTANT((guint) GST_ALLOCATOR_FLAG_LAST);
    PRINT_CONSTANT(GST_ALLOCATOR_SYSMEM);
    PRINT_CONSTANT((guint) GST_BIN_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_BIN_FLAG_NO_RESYNC);
    PRINT_CONSTANT((guint) GST_BIN_FLAG_STREAMS_AWARE);
    PRINT_CONSTANT((gint) GST_BUFFERING_DOWNLOAD);
    PRINT_CONSTANT((gint) GST_BUFFERING_LIVE);
    PRINT_CONSTANT((gint) GST_BUFFERING_STREAM);
    PRINT_CONSTANT((gint) GST_BUFFERING_TIMESHIFT);
    PRINT_CONSTANT(GST_BUFFER_COPY_ALL);
    PRINT_CONSTANT((guint) GST_BUFFER_COPY_DEEP);
    PRINT_CONSTANT((guint) GST_BUFFER_COPY_FLAGS);
    PRINT_CONSTANT((guint) GST_BUFFER_COPY_MEMORY);
    PRINT_CONSTANT((guint) GST_BUFFER_COPY_MERGE);
    PRINT_CONSTANT((guint) GST_BUFFER_COPY_META);
    PRINT_CONSTANT(GST_BUFFER_COPY_METADATA);
    PRINT_CONSTANT((guint) GST_BUFFER_COPY_NONE);
    PRINT_CONSTANT((guint) GST_BUFFER_COPY_TIMESTAMPS);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_CORRUPTED);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_DECODE_ONLY);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_DELTA_UNIT);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_DISCONT);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_DROPPABLE);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_GAP);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_HEADER);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_LIVE);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_MARKER);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_NON_DROPPABLE);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_RESYNC);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_SYNC_AFTER);
    PRINT_CONSTANT((guint) GST_BUFFER_FLAG_TAG_MEMORY);
    PRINT_CONSTANT(GST_BUFFER_OFFSET_NONE);
    PRINT_CONSTANT((guint) GST_BUFFER_POOL_ACQUIRE_FLAG_DISCONT);
    PRINT_CONSTANT((guint) GST_BUFFER_POOL_ACQUIRE_FLAG_DONTWAIT);
    PRINT_CONSTANT((guint) GST_BUFFER_POOL_ACQUIRE_FLAG_KEY_UNIT);
    PRINT_CONSTANT((guint) GST_BUFFER_POOL_ACQUIRE_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_BUFFER_POOL_ACQUIRE_FLAG_NONE);
    PRINT_CONSTANT((gint) GST_BUS_ASYNC);
    PRINT_CONSTANT((gint) GST_BUS_DROP);
    PRINT_CONSTANT((guint) GST_BUS_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_BUS_FLUSHING);
    PRINT_CONSTANT((gint) GST_BUS_PASS);
    PRINT_CONSTANT(GST_CAN_INLINE);
    PRINT_CONSTANT(GST_CAPS_FEATURE_MEMORY_SYSTEM_MEMORY);
    PRINT_CONSTANT((guint) GST_CAPS_FLAG_ANY);
    PRINT_CONSTANT((gint) GST_CAPS_INTERSECT_FIRST);
    PRINT_CONSTANT((gint) GST_CAPS_INTERSECT_ZIG_ZAG);
    PRINT_CONSTANT((gint) GST_CLOCK_BADTIME);
    PRINT_CONSTANT((gint) GST_CLOCK_BUSY);
    PRINT_CONSTANT((gint) GST_CLOCK_DONE);
    PRINT_CONSTANT((gint) GST_CLOCK_EARLY);
    PRINT_CONSTANT((gint) GST_CLOCK_ENTRY_PERIODIC);
    PRINT_CONSTANT((gint) GST_CLOCK_ENTRY_SINGLE);
    PRINT_CONSTANT((gint) GST_CLOCK_ERROR);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_CAN_DO_PERIODIC_ASYNC);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_CAN_DO_PERIODIC_SYNC);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_CAN_DO_SINGLE_ASYNC);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_CAN_DO_SINGLE_SYNC);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_CAN_SET_MASTER);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_CAN_SET_RESOLUTION);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_CLOCK_FLAG_NEEDS_STARTUP_SYNC);
    PRINT_CONSTANT((gint) GST_CLOCK_OK);
    PRINT_CONSTANT(GST_CLOCK_TIME_NONE);
    PRINT_CONSTANT((gint) GST_CLOCK_TYPE_MONOTONIC);
    PRINT_CONSTANT((gint) GST_CLOCK_TYPE_OTHER);
    PRINT_CONSTANT((gint) GST_CLOCK_TYPE_REALTIME);
    PRINT_CONSTANT((gint) GST_CLOCK_TYPE_TAI);
    PRINT_CONSTANT((gint) GST_CLOCK_UNSCHEDULED);
    PRINT_CONSTANT((gint) GST_CLOCK_UNSUPPORTED);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_CAPS);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_CLOCK);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_DISABLED);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_EVENT);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_FAILED);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_MISSING_PLUGIN);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_NEGOTIATION);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_NOT_IMPLEMENTED);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_NUM_ERRORS);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_PAD);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_SEEK);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_STATE_CHANGE);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_TAG);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_THREAD);
    PRINT_CONSTANT((gint) GST_CORE_ERROR_TOO_LAZY);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_BLACK);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_BLUE);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_CYAN);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_GREEN);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_MAGENTA);
    PRINT_CONSTANT(GST_DEBUG_BG_MASK);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_RED);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_WHITE);
    PRINT_CONSTANT((guint) GST_DEBUG_BG_YELLOW);
    PRINT_CONSTANT((guint) GST_DEBUG_BOLD);
    PRINT_CONSTANT((gint) GST_DEBUG_COLOR_MODE_OFF);
    PRINT_CONSTANT((gint) GST_DEBUG_COLOR_MODE_ON);
    PRINT_CONSTANT((gint) GST_DEBUG_COLOR_MODE_UNIX);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_BLACK);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_BLUE);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_CYAN);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_GREEN);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_MAGENTA);
    PRINT_CONSTANT(GST_DEBUG_FG_MASK);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_RED);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_WHITE);
    PRINT_CONSTANT((guint) GST_DEBUG_FG_YELLOW);
    PRINT_CONSTANT(GST_DEBUG_FORMAT_MASK);
    PRINT_CONSTANT((guint) GST_DEBUG_GRAPH_SHOW_ALL);
    PRINT_CONSTANT((guint) GST_DEBUG_GRAPH_SHOW_CAPS_DETAILS);
    PRINT_CONSTANT((guint) GST_DEBUG_GRAPH_SHOW_FULL_PARAMS);
    PRINT_CONSTANT((guint) GST_DEBUG_GRAPH_SHOW_MEDIA_TYPE);
    PRINT_CONSTANT((guint) GST_DEBUG_GRAPH_SHOW_NON_DEFAULT_PARAMS);
    PRINT_CONSTANT((guint) GST_DEBUG_GRAPH_SHOW_STATES);
    PRINT_CONSTANT((guint) GST_DEBUG_GRAPH_SHOW_VERBOSE);
    PRINT_CONSTANT((guint) GST_DEBUG_UNDERLINE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_DECODER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_DECRYPTOR);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_DEMUXER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_DEPAYLOADER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_ENCODER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_ENCRYPTOR);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_FORMATTER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_HARDWARE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_MEDIA_AUDIO);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_MEDIA_IMAGE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_MEDIA_METADATA);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_MEDIA_SUBTITLE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_MEDIA_VIDEO);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_MUXER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_PARSER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_PAYLOADER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_SINK);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_KLASS_SRC);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_ANY);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_AUDIOVIDEO_SINKS);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_AUDIO_ENCODER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_DECODABLE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_DECODER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_DECRYPTOR);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_DEMUXER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_DEPAYLOADER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_ENCODER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_ENCRYPTOR);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_FORMATTER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_HARDWARE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MAX_ELEMENTS);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MEDIA_ANY);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MEDIA_AUDIO);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MEDIA_IMAGE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MEDIA_METADATA);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MEDIA_SUBTITLE);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MEDIA_VIDEO);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_MUXER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_PARSER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_PAYLOADER);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_SINK);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_SRC);
    PRINT_CONSTANT(GST_ELEMENT_FACTORY_TYPE_VIDEO_ENCODER);
    PRINT_CONSTANT((guint) GST_ELEMENT_FLAG_INDEXABLE);
    PRINT_CONSTANT((guint) GST_ELEMENT_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_ELEMENT_FLAG_LOCKED_STATE);
    PRINT_CONSTANT((guint) GST_ELEMENT_FLAG_PROVIDE_CLOCK);
    PRINT_CONSTANT((guint) GST_ELEMENT_FLAG_REQUIRE_CLOCK);
    PRINT_CONSTANT((guint) GST_ELEMENT_FLAG_SINK);
    PRINT_CONSTANT((guint) GST_ELEMENT_FLAG_SOURCE);
    PRINT_CONSTANT(GST_ELEMENT_METADATA_AUTHOR);
    PRINT_CONSTANT(GST_ELEMENT_METADATA_DESCRIPTION);
    PRINT_CONSTANT(GST_ELEMENT_METADATA_DOC_URI);
    PRINT_CONSTANT(GST_ELEMENT_METADATA_ICON_NAME);
    PRINT_CONSTANT(GST_ELEMENT_METADATA_KLASS);
    PRINT_CONSTANT(GST_ELEMENT_METADATA_LONGNAME);
    PRINT_CONSTANT((gint) GST_EVENT_BUFFERSIZE);
    PRINT_CONSTANT((gint) GST_EVENT_CAPS);
    PRINT_CONSTANT((gint) GST_EVENT_CUSTOM_BOTH);
    PRINT_CONSTANT((gint) GST_EVENT_CUSTOM_BOTH_OOB);
    PRINT_CONSTANT((gint) GST_EVENT_CUSTOM_DOWNSTREAM);
    PRINT_CONSTANT((gint) GST_EVENT_CUSTOM_DOWNSTREAM_OOB);
    PRINT_CONSTANT((gint) GST_EVENT_CUSTOM_DOWNSTREAM_STICKY);
    PRINT_CONSTANT((gint) GST_EVENT_CUSTOM_UPSTREAM);
    PRINT_CONSTANT((gint) GST_EVENT_EOS);
    PRINT_CONSTANT((gint) GST_EVENT_FLUSH_START);
    PRINT_CONSTANT((gint) GST_EVENT_FLUSH_STOP);
    PRINT_CONSTANT((gint) GST_EVENT_GAP);
    PRINT_CONSTANT((gint) GST_EVENT_INSTANT_RATE_CHANGE);
    PRINT_CONSTANT((gint) GST_EVENT_INSTANT_RATE_SYNC_TIME);
    PRINT_CONSTANT((gint) GST_EVENT_LATENCY);
    PRINT_CONSTANT((gint) GST_EVENT_NAVIGATION);
    PRINT_CONSTANT(GST_EVENT_NUM_SHIFT);
    PRINT_CONSTANT((gint) GST_EVENT_PROTECTION);
    PRINT_CONSTANT((gint) GST_EVENT_QOS);
    PRINT_CONSTANT((gint) GST_EVENT_RECONFIGURE);
    PRINT_CONSTANT((gint) GST_EVENT_SEEK);
    PRINT_CONSTANT((gint) GST_EVENT_SEGMENT);
    PRINT_CONSTANT((gint) GST_EVENT_SEGMENT_DONE);
    PRINT_CONSTANT((gint) GST_EVENT_SELECT_STREAMS);
    PRINT_CONSTANT((gint) GST_EVENT_SINK_MESSAGE);
    PRINT_CONSTANT((gint) GST_EVENT_STEP);
    PRINT_CONSTANT((gint) GST_EVENT_STREAM_COLLECTION);
    PRINT_CONSTANT((gint) GST_EVENT_STREAM_GROUP_DONE);
    PRINT_CONSTANT((gint) GST_EVENT_STREAM_START);
    PRINT_CONSTANT((gint) GST_EVENT_TAG);
    PRINT_CONSTANT((gint) GST_EVENT_TOC);
    PRINT_CONSTANT((gint) GST_EVENT_TOC_SELECT);
    PRINT_CONSTANT(GST_EVENT_TYPE_BOTH);
    PRINT_CONSTANT((guint) GST_EVENT_TYPE_DOWNSTREAM);
    PRINT_CONSTANT((guint) GST_EVENT_TYPE_SERIALIZED);
    PRINT_CONSTANT((guint) GST_EVENT_TYPE_STICKY);
    PRINT_CONSTANT((guint) GST_EVENT_TYPE_STICKY_MULTI);
    PRINT_CONSTANT((guint) GST_EVENT_TYPE_UPSTREAM);
    PRINT_CONSTANT((gint) GST_EVENT_UNKNOWN);
    PRINT_CONSTANT(GST_FLAG_SET_MASK_EXACT);
    PRINT_CONSTANT((gint) GST_FLOW_CUSTOM_ERROR);
    PRINT_CONSTANT((gint) GST_FLOW_CUSTOM_ERROR_1);
    PRINT_CONSTANT((gint) GST_FLOW_CUSTOM_ERROR_2);
    PRINT_CONSTANT((gint) GST_FLOW_CUSTOM_SUCCESS);
    PRINT_CONSTANT((gint) GST_FLOW_CUSTOM_SUCCESS_1);
    PRINT_CONSTANT((gint) GST_FLOW_CUSTOM_SUCCESS_2);
    PRINT_CONSTANT((gint) GST_FLOW_EOS);
    PRINT_CONSTANT((gint) GST_FLOW_ERROR);
    PRINT_CONSTANT((gint) GST_FLOW_FLUSHING);
    PRINT_CONSTANT((gint) GST_FLOW_NOT_LINKED);
    PRINT_CONSTANT((gint) GST_FLOW_NOT_NEGOTIATED);
    PRINT_CONSTANT((gint) GST_FLOW_NOT_SUPPORTED);
    PRINT_CONSTANT((gint) GST_FLOW_OK);
    PRINT_CONSTANT((gint) GST_FORMAT_BUFFERS);
    PRINT_CONSTANT((gint) GST_FORMAT_BYTES);
    PRINT_CONSTANT((gint) GST_FORMAT_DEFAULT);
    PRINT_CONSTANT((gint) GST_FORMAT_PERCENT);
    PRINT_CONSTANT(GST_FORMAT_PERCENT_MAX);
    PRINT_CONSTANT(GST_FORMAT_PERCENT_SCALE);
    PRINT_CONSTANT((gint) GST_FORMAT_TIME);
    PRINT_CONSTANT((gint) GST_FORMAT_UNDEFINED);
    PRINT_CONSTANT((guint) GST_GAP_FLAG_MISSING_DATA);
    PRINT_CONSTANT(GST_GROUP_ID_INVALID);
    PRINT_CONSTANT((gint) GST_ITERATOR_DONE);
    PRINT_CONSTANT((gint) GST_ITERATOR_ERROR);
    PRINT_CONSTANT((gint) GST_ITERATOR_ITEM_END);
    PRINT_CONSTANT((gint) GST_ITERATOR_ITEM_PASS);
    PRINT_CONSTANT((gint) GST_ITERATOR_ITEM_SKIP);
    PRINT_CONSTANT((gint) GST_ITERATOR_OK);
    PRINT_CONSTANT((gint) GST_ITERATOR_RESYNC);
    PRINT_CONSTANT((gint) GST_LEVEL_COUNT);
    PRINT_CONSTANT((gint) GST_LEVEL_DEBUG);
    PRINT_CONSTANT((gint) GST_LEVEL_ERROR);
    PRINT_CONSTANT((gint) GST_LEVEL_FIXME);
    PRINT_CONSTANT((gint) GST_LEVEL_INFO);
    PRINT_CONSTANT((gint) GST_LEVEL_LOG);
    PRINT_CONSTANT((gint) GST_LEVEL_MEMDUMP);
    PRINT_CONSTANT((gint) GST_LEVEL_NONE);
    PRINT_CONSTANT((gint) GST_LEVEL_TRACE);
    PRINT_CONSTANT((gint) GST_LEVEL_WARNING);
    PRINT_CONSTANT((gint) GST_LIBRARY_ERROR_ENCODE);
    PRINT_CONSTANT((gint) GST_LIBRARY_ERROR_FAILED);
    PRINT_CONSTANT((gint) GST_LIBRARY_ERROR_INIT);
    PRINT_CONSTANT((gint) GST_LIBRARY_ERROR_NUM_ERRORS);
    PRINT_CONSTANT((gint) GST_LIBRARY_ERROR_SETTINGS);
    PRINT_CONSTANT((gint) GST_LIBRARY_ERROR_SHUTDOWN);
    PRINT_CONSTANT((gint) GST_LIBRARY_ERROR_TOO_LAZY);
    PRINT_CONSTANT(GST_LICENSE_UNKNOWN);
    PRINT_CONSTANT((guint) GST_LOCK_FLAG_EXCLUSIVE);
    PRINT_CONSTANT((guint) GST_LOCK_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_LOCK_FLAG_READ);
    PRINT_CONSTANT(GST_LOCK_FLAG_READWRITE);
    PRINT_CONSTANT((guint) GST_LOCK_FLAG_WRITE);
    PRINT_CONSTANT((guint) GST_MAP_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_MAP_READ);
    PRINT_CONSTANT(GST_MAP_READWRITE);
    PRINT_CONSTANT((guint) GST_MAP_WRITE);
    PRINT_CONSTANT((guint) GST_MEMORY_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_MEMORY_FLAG_NOT_MAPPABLE);
    PRINT_CONSTANT((guint) GST_MEMORY_FLAG_NO_SHARE);
    PRINT_CONSTANT((guint) GST_MEMORY_FLAG_PHYSICALLY_CONTIGUOUS);
    PRINT_CONSTANT((guint) GST_MEMORY_FLAG_READONLY);
    PRINT_CONSTANT((guint) GST_MEMORY_FLAG_ZERO_PADDED);
    PRINT_CONSTANT((guint) GST_MEMORY_FLAG_ZERO_PREFIXED);
    PRINT_CONSTANT((guint) GST_MESSAGE_ANY);
    PRINT_CONSTANT((guint) GST_MESSAGE_APPLICATION);
    PRINT_CONSTANT((guint) GST_MESSAGE_ASYNC_DONE);
    PRINT_CONSTANT((guint) GST_MESSAGE_ASYNC_START);
    PRINT_CONSTANT((guint) GST_MESSAGE_BUFFERING);
    PRINT_CONSTANT((guint) GST_MESSAGE_CLOCK_LOST);
    PRINT_CONSTANT((guint) GST_MESSAGE_CLOCK_PROVIDE);
    PRINT_CONSTANT((guint) GST_MESSAGE_DEVICE_ADDED);
    PRINT_CONSTANT((guint) GST_MESSAGE_DEVICE_CHANGED);
    PRINT_CONSTANT((guint) GST_MESSAGE_DEVICE_REMOVED);
    PRINT_CONSTANT((guint) GST_MESSAGE_DURATION_CHANGED);
    PRINT_CONSTANT((guint) GST_MESSAGE_ELEMENT);
    PRINT_CONSTANT((guint) GST_MESSAGE_EOS);
    PRINT_CONSTANT((guint) GST_MESSAGE_ERROR);
    PRINT_CONSTANT((guint) GST_MESSAGE_EXTENDED);
    PRINT_CONSTANT((guint) GST_MESSAGE_HAVE_CONTEXT);
    PRINT_CONSTANT((guint) GST_MESSAGE_INFO);
    PRINT_CONSTANT((guint) GST_MESSAGE_INSTANT_RATE_REQUEST);
    PRINT_CONSTANT((guint) GST_MESSAGE_LATENCY);
    PRINT_CONSTANT((guint) GST_MESSAGE_NEED_CONTEXT);
    PRINT_CONSTANT((guint) GST_MESSAGE_NEW_CLOCK);
    PRINT_CONSTANT((guint) GST_MESSAGE_PROGRESS);
    PRINT_CONSTANT((guint) GST_MESSAGE_PROPERTY_NOTIFY);
    PRINT_CONSTANT((guint) GST_MESSAGE_QOS);
    PRINT_CONSTANT((guint) GST_MESSAGE_REDIRECT);
    PRINT_CONSTANT((guint) GST_MESSAGE_REQUEST_STATE);
    PRINT_CONSTANT((guint) GST_MESSAGE_RESET_TIME);
    PRINT_CONSTANT((guint) GST_MESSAGE_SEGMENT_DONE);
    PRINT_CONSTANT((guint) GST_MESSAGE_SEGMENT_START);
    PRINT_CONSTANT((guint) GST_MESSAGE_STATE_CHANGED);
    PRINT_CONSTANT((guint) GST_MESSAGE_STATE_DIRTY);
    PRINT_CONSTANT((guint) GST_MESSAGE_STEP_DONE);
    PRINT_CONSTANT((guint) GST_MESSAGE_STEP_START);
    PRINT_CONSTANT((guint) GST_MESSAGE_STREAMS_SELECTED);
    PRINT_CONSTANT((guint) GST_MESSAGE_STREAM_COLLECTION);
    PRINT_CONSTANT((guint) GST_MESSAGE_STREAM_START);
    PRINT_CONSTANT((guint) GST_MESSAGE_STREAM_STATUS);
    PRINT_CONSTANT((guint) GST_MESSAGE_STRUCTURE_CHANGE);
    PRINT_CONSTANT((guint) GST_MESSAGE_TAG);
    PRINT_CONSTANT((guint) GST_MESSAGE_TOC);
    PRINT_CONSTANT((guint) GST_MESSAGE_UNKNOWN);
    PRINT_CONSTANT((guint) GST_MESSAGE_WARNING);
    PRINT_CONSTANT((guint) GST_META_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_META_FLAG_LOCKED);
    PRINT_CONSTANT((guint) GST_META_FLAG_NONE);
    PRINT_CONSTANT((guint) GST_META_FLAG_POOLED);
    PRINT_CONSTANT((guint) GST_META_FLAG_READONLY);
    PRINT_CONSTANT(GST_META_TAG_MEMORY_STR);
    PRINT_CONSTANT((guint) GST_MINI_OBJECT_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_MINI_OBJECT_FLAG_LOCKABLE);
    PRINT_CONSTANT((guint) GST_MINI_OBJECT_FLAG_LOCK_READONLY);
    PRINT_CONSTANT((guint) GST_MINI_OBJECT_FLAG_MAY_BE_LEAKED);
    PRINT_CONSTANT(GST_MSECOND);
    PRINT_CONSTANT(GST_NSECOND);
    PRINT_CONSTANT((guint) GST_OBJECT_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_OBJECT_FLAG_MAY_BE_LEAKED);
    PRINT_CONSTANT((gint) GST_PAD_ALWAYS);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_ACCEPT_INTERSECT);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_ACCEPT_TEMPLATE);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_BLOCKED);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_BLOCKING);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_EOS);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_FIXED_CAPS);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_FLUSHING);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_NEED_PARENT);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_NEED_RECONFIGURE);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_PENDING_EVENTS);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_PROXY_ALLOCATION);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_PROXY_CAPS);
    PRINT_CONSTANT((guint) GST_PAD_FLAG_PROXY_SCHEDULING);
    PRINT_CONSTANT((guint) GST_PAD_LINK_CHECK_CAPS);
    PRINT_CONSTANT((guint) GST_PAD_LINK_CHECK_DEFAULT);
    PRINT_CONSTANT((guint) GST_PAD_LINK_CHECK_HIERARCHY);
    PRINT_CONSTANT((guint) GST_PAD_LINK_CHECK_NOTHING);
    PRINT_CONSTANT((guint) GST_PAD_LINK_CHECK_NO_RECONFIGURE);
    PRINT_CONSTANT((guint) GST_PAD_LINK_CHECK_TEMPLATE_CAPS);
    PRINT_CONSTANT((gint) GST_PAD_LINK_NOFORMAT);
    PRINT_CONSTANT((gint) GST_PAD_LINK_NOSCHED);
    PRINT_CONSTANT((gint) GST_PAD_LINK_OK);
    PRINT_CONSTANT((gint) GST_PAD_LINK_REFUSED);
    PRINT_CONSTANT((gint) GST_PAD_LINK_WAS_LINKED);
    PRINT_CONSTANT((gint) GST_PAD_LINK_WRONG_DIRECTION);
    PRINT_CONSTANT((gint) GST_PAD_LINK_WRONG_HIERARCHY);
    PRINT_CONSTANT((gint) GST_PAD_MODE_NONE);
    PRINT_CONSTANT((gint) GST_PAD_MODE_PULL);
    PRINT_CONSTANT((gint) GST_PAD_MODE_PUSH);
    PRINT_CONSTANT((gint) GST_PAD_PROBE_DROP);
    PRINT_CONSTANT((gint) GST_PAD_PROBE_HANDLED);
    PRINT_CONSTANT((gint) GST_PAD_PROBE_OK);
    PRINT_CONSTANT((gint) GST_PAD_PROBE_PASS);
    PRINT_CONSTANT((gint) GST_PAD_PROBE_REMOVE);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_ALL_BOTH);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_BLOCK);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_BLOCKING);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_BLOCK_DOWNSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_BLOCK_UPSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_BUFFER);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_BUFFER_LIST);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_DATA_BOTH);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_DATA_DOWNSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_DATA_UPSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_EVENT_BOTH);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_EVENT_DOWNSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_EVENT_FLUSH);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_EVENT_UPSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_IDLE);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_INVALID);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_PULL);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_PUSH);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_QUERY_BOTH);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_QUERY_DOWNSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_QUERY_UPSTREAM);
    PRINT_CONSTANT((guint) GST_PAD_PROBE_TYPE_SCHEDULING);
    PRINT_CONSTANT((gint) GST_PAD_REQUEST);
    PRINT_CONSTANT((gint) GST_PAD_SINK);
    PRINT_CONSTANT((gint) GST_PAD_SOMETIMES);
    PRINT_CONSTANT((gint) GST_PAD_SRC);
    PRINT_CONSTANT((guint) GST_PAD_TEMPLATE_FLAG_LAST);
    PRINT_CONSTANT((gint) GST_PAD_UNKNOWN);
    PRINT_CONSTANT(GST_PARAM_CONDITIONALLY_AVAILABLE);
    PRINT_CONSTANT(GST_PARAM_CONTROLLABLE);
    PRINT_CONSTANT(GST_PARAM_DOC_SHOW_DEFAULT);
    PRINT_CONSTANT(GST_PARAM_MUTABLE_PAUSED);
    PRINT_CONSTANT(GST_PARAM_MUTABLE_PLAYING);
    PRINT_CONSTANT(GST_PARAM_MUTABLE_READY);
    PRINT_CONSTANT(GST_PARAM_USER_SHIFT);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_COULD_NOT_SET_PROPERTY);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_DELAYED_LINK);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_EMPTY);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_EMPTY_BIN);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_LINK);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_NO_SUCH_ELEMENT);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_NO_SUCH_PROPERTY);
    PRINT_CONSTANT((gint) GST_PARSE_ERROR_SYNTAX);
    PRINT_CONSTANT((guint) GST_PARSE_FLAG_FATAL_ERRORS);
    PRINT_CONSTANT((guint) GST_PARSE_FLAG_NONE);
    PRINT_CONSTANT((guint) GST_PARSE_FLAG_NO_SINGLE_ELEMENT_BINS);
    PRINT_CONSTANT((guint) GST_PARSE_FLAG_PLACE_IN_BIN);
    PRINT_CONSTANT((guint) GST_PIPELINE_FLAG_FIXED_CLOCK);
    PRINT_CONSTANT((guint) GST_PIPELINE_FLAG_LAST);
    PRINT_CONSTANT((guint) GST_PLUGIN_API_FLAG_IGNORE_ENUM_MEMBERS);
    PRINT_CONSTANT((guint) GST_PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_PREFIX);
    PRINT_CONSTANT((guint) GST_PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_SUFFIX);
    PRINT_CONSTANT((guint) GST_PLUGIN_DEPENDENCY_FLAG_NONE);
    PRINT_CONSTANT((guint) GST_PLUGIN_DEPENDENCY_FLAG_PATHS_ARE_DEFAULT_ONLY);
    PRINT_CONSTANT((guint) GST_PLUGIN_DEPENDENCY_FLAG_PATHS_ARE_RELATIVE_TO_EXE);
    PRINT_CONSTANT((guint) GST_PLUGIN_DEPENDENCY_FLAG_RECURSE);
    PRINT_CONSTANT((gint) GST_PLUGIN_ERROR_DEPENDENCIES);
    PRINT_CONSTANT((gint) GST_PLUGIN_ERROR_MODULE);
    PRINT_CONSTANT((gint) GST_PLUGIN_ERROR_NAME_MISMATCH);
    PRINT_CONSTANT((guint) GST_PLUGIN_FLAG_BLACKLISTED);
    PRINT_CONSTANT((guint) GST_PLUGIN_FLAG_CACHED);
    PRINT_CONSTANT((gint) GST_PROGRESS_TYPE_CANCELED);
    PRINT_CONSTANT((gint) GST_PROGRESS_TYPE_COMPLETE);
    PRINT_CONSTANT((gint) GST_PROGRESS_TYPE_CONTINUE);
    PRINT_CONSTANT((gint) GST_PROGRESS_TYPE_ERROR);
    PRINT_CONSTANT((gint) GST_PROGRESS_TYPE_START);
    PRINT_CONSTANT((gint) GST_PROMISE_RESULT_EXPIRED);
    PRINT_CONSTANT((gint) GST_PROMISE_RESULT_INTERRUPTED);
    PRINT_CONSTANT((gint) GST_PROMISE_RESULT_PENDING);
    PRINT_CONSTANT((gint) GST_PROMISE_RESULT_REPLIED);
    PRINT_CONSTANT(GST_PROTECTION_SYSTEM_ID_CAPS_FIELD);
    PRINT_CONSTANT(GST_PROTECTION_UNSPECIFIED_SYSTEM_ID);
    PRINT_CONSTANT((gint) GST_QOS_TYPE_OVERFLOW);
    PRINT_CONSTANT((gint) GST_QOS_TYPE_THROTTLE);
    PRINT_CONSTANT((gint) GST_QOS_TYPE_UNDERFLOW);
    PRINT_CONSTANT((gint) GST_QUERY_ACCEPT_CAPS);
    PRINT_CONSTANT((gint) GST_QUERY_ALLOCATION);
    PRINT_CONSTANT((gint) GST_QUERY_BITRATE);
    PRINT_CONSTANT((gint) GST_QUERY_BUFFERING);
    PRINT_CONSTANT((gint) GST_QUERY_CAPS);
    PRINT_CONSTANT((gint) GST_QUERY_CONTEXT);
    PRINT_CONSTANT((gint) GST_QUERY_CONVERT);
    PRINT_CONSTANT((gint) GST_QUERY_CUSTOM);
    PRINT_CONSTANT((gint) GST_QUERY_DRAIN);
    PRINT_CONSTANT((gint) GST_QUERY_DURATION);
    PRINT_CONSTANT((gint) GST_QUERY_FORMATS);
    PRINT_CONSTANT((gint) GST_QUERY_JITTER);
    PRINT_CONSTANT((gint) GST_QUERY_LATENCY);
    PRINT_CONSTANT(GST_QUERY_NUM_SHIFT);
    PRINT_CONSTANT((gint) GST_QUERY_POSITION);
    PRINT_CONSTANT((gint) GST_QUERY_RATE);
    PRINT_CONSTANT((gint) GST_QUERY_SCHEDULING);
    PRINT_CONSTANT((gint) GST_QUERY_SEEKING);
    PRINT_CONSTANT((gint) GST_QUERY_SEGMENT);
    PRINT_CONSTANT(GST_QUERY_TYPE_BOTH);
    PRINT_CONSTANT((guint) GST_QUERY_TYPE_DOWNSTREAM);
    PRINT_CONSTANT((guint) GST_QUERY_TYPE_SERIALIZED);
    PRINT_CONSTANT((guint) GST_QUERY_TYPE_UPSTREAM);
    PRINT_CONSTANT((gint) GST_QUERY_UNKNOWN);
    PRINT_CONSTANT((gint) GST_QUERY_URI);
    PRINT_CONSTANT((gint) GST_RANK_MARGINAL);
    PRINT_CONSTANT((gint) GST_RANK_NONE);
    PRINT_CONSTANT((gint) GST_RANK_PRIMARY);
    PRINT_CONSTANT((gint) GST_RANK_SECONDARY);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_BUSY);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_CLOSE);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_FAILED);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_NOT_AUTHORIZED);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_NOT_FOUND);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_NO_SPACE_LEFT);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_NUM_ERRORS);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_OPEN_READ);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_OPEN_READ_WRITE);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_OPEN_WRITE);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_READ);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_SEEK);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_SETTINGS);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_SYNC);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_TOO_LAZY);
    PRINT_CONSTANT((gint) GST_RESOURCE_ERROR_WRITE);
    PRINT_CONSTANT((guint) GST_SCHEDULING_FLAG_BANDWIDTH_LIMITED);
    PRINT_CONSTANT((guint) GST_SCHEDULING_FLAG_SEEKABLE);
    PRINT_CONSTANT((guint) GST_SCHEDULING_FLAG_SEQUENTIAL);
    PRINT_CONSTANT((gint) GST_SEARCH_MODE_AFTER);
    PRINT_CONSTANT((gint) GST_SEARCH_MODE_BEFORE);
    PRINT_CONSTANT((gint) GST_SEARCH_MODE_EXACT);
    PRINT_CONSTANT(GST_SECOND);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_ACCURATE);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_FLUSH);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_INSTANT_RATE_CHANGE);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_KEY_UNIT);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_NONE);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_SEGMENT);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_SKIP);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_SNAP_AFTER);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_SNAP_BEFORE);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_SNAP_NEAREST);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_TRICKMODE);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_TRICKMODE_FORWARD_PREDICTED);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_TRICKMODE_KEY_UNITS);
    PRINT_CONSTANT((guint) GST_SEEK_FLAG_TRICKMODE_NO_AUDIO);
    PRINT_CONSTANT((gint) GST_SEEK_TYPE_END);
    PRINT_CONSTANT((gint) GST_SEEK_TYPE_NONE);
    PRINT_CONSTANT((gint) GST_SEEK_TYPE_SET);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_NONE);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_RESET);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_SEGMENT);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_SKIP);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_TRICKMODE);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_TRICKMODE_FORWARD_PREDICTED);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_TRICKMODE_KEY_UNITS);
    PRINT_CONSTANT((guint) GST_SEGMENT_FLAG_TRICKMODE_NO_AUDIO);
    PRINT_CONSTANT(GST_SEGMENT_INSTANT_FLAGS);
    PRINT_CONSTANT(GST_SEQNUM_INVALID);
    PRINT_CONSTANT((guint) GST_SERIALIZE_FLAG_BACKWARD_COMPAT);
    PRINT_CONSTANT((guint) GST_SERIALIZE_FLAG_NONE);
    PRINT_CONSTANT((guint) GST_STACK_TRACE_SHOW_FULL);
    PRINT_CONSTANT((guint) GST_STACK_TRACE_SHOW_NONE);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_ASYNC);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_FAILURE);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_NO_PREROLL);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_NULL_TO_NULL);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_NULL_TO_READY);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_PAUSED_TO_PAUSED);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_PAUSED_TO_PLAYING);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_PAUSED_TO_READY);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_PLAYING_TO_PAUSED);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_PLAYING_TO_PLAYING);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_READY_TO_NULL);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_READY_TO_PAUSED);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_READY_TO_READY);
    PRINT_CONSTANT((gint) GST_STATE_CHANGE_SUCCESS);
    PRINT_CONSTANT((gint) GST_STATE_NULL);
    PRINT_CONSTANT((gint) GST_STATE_PAUSED);
    PRINT_CONSTANT((gint) GST_STATE_PLAYING);
    PRINT_CONSTANT((gint) GST_STATE_READY);
    PRINT_CONSTANT((gint) GST_STATE_VOID_PENDING);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_CODEC_NOT_FOUND);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_DECODE);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_DECRYPT);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_DECRYPT_NOKEY);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_DEMUX);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_ENCODE);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_FAILED);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_FORMAT);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_MUX);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_NOT_IMPLEMENTED);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_NUM_ERRORS);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_TOO_LAZY);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_TYPE_NOT_FOUND);
    PRINT_CONSTANT((gint) GST_STREAM_ERROR_WRONG_TYPE);
    PRINT_CONSTANT((guint) GST_STREAM_FLAG_NONE);
    PRINT_CONSTANT((guint) GST_STREAM_FLAG_SELECT);
    PRINT_CONSTANT((guint) GST_STREAM_FLAG_SPARSE);
    PRINT_CONSTANT((guint) GST_STREAM_FLAG_UNSELECT);
    PRINT_CONSTANT((gint) GST_STREAM_STATUS_TYPE_CREATE);
    PRINT_CONSTANT((gint) GST_STREAM_STATUS_TYPE_DESTROY);
    PRINT_CONSTANT((gint) GST_STREAM_STATUS_TYPE_ENTER);
    PRINT_CONSTANT((gint) GST_STREAM_STATUS_TYPE_LEAVE);
    PRINT_CONSTANT((gint) GST_STREAM_STATUS_TYPE_PAUSE);
    PRINT_CONSTANT((gint) GST_STREAM_STATUS_TYPE_START);
    PRINT_CONSTANT((gint) GST_STREAM_STATUS_TYPE_STOP);
    PRINT_CONSTANT((guint) GST_STREAM_TYPE_AUDIO);
    PRINT_CONSTANT((guint) GST_STREAM_TYPE_CONTAINER);
    PRINT_CONSTANT((guint) GST_STREAM_TYPE_TEXT);
    PRINT_CONSTANT((guint) GST_STREAM_TYPE_UNKNOWN);
    PRINT_CONSTANT((guint) GST_STREAM_TYPE_VIDEO);
    PRINT_CONSTANT((gint) GST_STRUCTURE_CHANGE_TYPE_PAD_LINK);
    PRINT_CONSTANT((gint) GST_STRUCTURE_CHANGE_TYPE_PAD_UNLINK);
    PRINT_CONSTANT(GST_TAG_ALBUM);
    PRINT_CONSTANT(GST_TAG_ALBUM_ARTIST);
    PRINT_CONSTANT(GST_TAG_ALBUM_ARTIST_SORTNAME);
    PRINT_CONSTANT(GST_TAG_ALBUM_GAIN);
    PRINT_CONSTANT(GST_TAG_ALBUM_PEAK);
    PRINT_CONSTANT(GST_TAG_ALBUM_SORTNAME);
    PRINT_CONSTANT(GST_TAG_ALBUM_VOLUME_COUNT);
    PRINT_CONSTANT(GST_TAG_ALBUM_VOLUME_NUMBER);
    PRINT_CONSTANT(GST_TAG_APPLICATION_DATA);
    PRINT_CONSTANT(GST_TAG_APPLICATION_NAME);
    PRINT_CONSTANT(GST_TAG_ARTIST);
    PRINT_CONSTANT(GST_TAG_ARTIST_SORTNAME);
    PRINT_CONSTANT(GST_TAG_ATTACHMENT);
    PRINT_CONSTANT(GST_TAG_AUDIO_CODEC);
    PRINT_CONSTANT(GST_TAG_BEATS_PER_MINUTE);
    PRINT_CONSTANT(GST_TAG_BITRATE);
    PRINT_CONSTANT(GST_TAG_CODEC);
    PRINT_CONSTANT(GST_TAG_COMMENT);
    PRINT_CONSTANT(GST_TAG_COMPOSER);
    PRINT_CONSTANT(GST_TAG_COMPOSER_SORTNAME);
    PRINT_CONSTANT(GST_TAG_CONDUCTOR);
    PRINT_CONSTANT(GST_TAG_CONTACT);
    PRINT_CONSTANT(GST_TAG_CONTAINER_FORMAT);
    PRINT_CONSTANT(GST_TAG_COPYRIGHT);
    PRINT_CONSTANT(GST_TAG_COPYRIGHT_URI);
    PRINT_CONSTANT(GST_TAG_DATE);
    PRINT_CONSTANT(GST_TAG_DATE_TIME);
    PRINT_CONSTANT(GST_TAG_DESCRIPTION);
    PRINT_CONSTANT(GST_TAG_DEVICE_MANUFACTURER);
    PRINT_CONSTANT(GST_TAG_DEVICE_MODEL);
    PRINT_CONSTANT(GST_TAG_DURATION);
    PRINT_CONSTANT(GST_TAG_ENCODED_BY);
    PRINT_CONSTANT(GST_TAG_ENCODER);
    PRINT_CONSTANT(GST_TAG_ENCODER_VERSION);
    PRINT_CONSTANT(GST_TAG_EXTENDED_COMMENT);
    PRINT_CONSTANT((gint) GST_TAG_FLAG_COUNT);
    PRINT_CONSTANT((gint) GST_TAG_FLAG_DECODED);
    PRINT_CONSTANT((gint) GST_TAG_FLAG_ENCODED);
    PRINT_CONSTANT((gint) GST_TAG_FLAG_META);
    PRINT_CONSTANT((gint) GST_TAG_FLAG_UNDEFINED);
    PRINT_CONSTANT(GST_TAG_GENRE);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_CAPTURE_DIRECTION);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_CITY);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_COUNTRY);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_ELEVATION);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_HORIZONTAL_ERROR);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_LATITUDE);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_LONGITUDE);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_MOVEMENT_DIRECTION);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_MOVEMENT_SPEED);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_NAME);
    PRINT_CONSTANT(GST_TAG_GEO_LOCATION_SUBLOCATION);
    PRINT_CONSTANT(GST_TAG_GROUPING);
    PRINT_CONSTANT(GST_TAG_HOMEPAGE);
    PRINT_CONSTANT(GST_TAG_IMAGE);
    PRINT_CONSTANT(GST_TAG_IMAGE_ORIENTATION);
    PRINT_CONSTANT(GST_TAG_INTERPRETED_BY);
    PRINT_CONSTANT(GST_TAG_ISRC);
    PRINT_CONSTANT(GST_TAG_KEYWORDS);
    PRINT_CONSTANT(GST_TAG_LANGUAGE_CODE);
    PRINT_CONSTANT(GST_TAG_LANGUAGE_NAME);
    PRINT_CONSTANT(GST_TAG_LICENSE);
    PRINT_CONSTANT(GST_TAG_LICENSE_URI);
    PRINT_CONSTANT(GST_TAG_LOCATION);
    PRINT_CONSTANT(GST_TAG_LYRICS);
    PRINT_CONSTANT(GST_TAG_MAXIMUM_BITRATE);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_APPEND);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_COUNT);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_KEEP);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_KEEP_ALL);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_PREPEND);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_REPLACE);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_REPLACE_ALL);
    PRINT_CONSTANT((gint) GST_TAG_MERGE_UNDEFINED);
    PRINT_CONSTANT(GST_TAG_MIDI_BASE_NOTE);
    PRINT_CONSTANT(GST_TAG_MINIMUM_BITRATE);
    PRINT_CONSTANT(GST_TAG_NOMINAL_BITRATE);
    PRINT_CONSTANT(GST_TAG_ORGANIZATION);
    PRINT_CONSTANT(GST_TAG_PERFORMER);
    PRINT_CONSTANT(GST_TAG_PREVIEW_IMAGE);
    PRINT_CONSTANT(GST_TAG_PRIVATE_DATA);
    PRINT_CONSTANT(GST_TAG_PUBLISHER);
    PRINT_CONSTANT(GST_TAG_REFERENCE_LEVEL);
    PRINT_CONSTANT((gint) GST_TAG_SCOPE_GLOBAL);
    PRINT_CONSTANT((gint) GST_TAG_SCOPE_STREAM);
    PRINT_CONSTANT(GST_TAG_SERIAL);
    PRINT_CONSTANT(GST_TAG_SHOW_EPISODE_NUMBER);
    PRINT_CONSTANT(GST_TAG_SHOW_NAME);
    PRINT_CONSTANT(GST_TAG_SHOW_SEASON_NUMBER);
    PRINT_CONSTANT(GST_TAG_SHOW_SORTNAME);
    PRINT_CONSTANT(GST_TAG_SUBTITLE_CODEC);
    PRINT_CONSTANT(GST_TAG_TITLE);
    PRINT_CONSTANT(GST_TAG_TITLE_SORTNAME);
    PRINT_CONSTANT(GST_TAG_TRACK_COUNT);
    PRINT_CONSTANT(GST_TAG_TRACK_GAIN);
    PRINT_CONSTANT(GST_TAG_TRACK_NUMBER);
    PRINT_CONSTANT(GST_TAG_TRACK_PEAK);
    PRINT_CONSTANT(GST_TAG_USER_RATING);
    PRINT_CONSTANT(GST_TAG_VERSION);
    PRINT_CONSTANT(GST_TAG_VIDEO_CODEC);
    PRINT_CONSTANT((gint) GST_TASK_PAUSED);
    PRINT_CONSTANT((gint) GST_TASK_STARTED);
    PRINT_CONSTANT((gint) GST_TASK_STOPPED);
    PRINT_CONSTANT((gint) GST_TOC_ENTRY_TYPE_ANGLE);
    PRINT_CONSTANT((gint) GST_TOC_ENTRY_TYPE_CHAPTER);
    PRINT_CONSTANT((gint) GST_TOC_ENTRY_TYPE_EDITION);
    PRINT_CONSTANT((gint) GST_TOC_ENTRY_TYPE_INVALID);
    PRINT_CONSTANT((gint) GST_TOC_ENTRY_TYPE_TITLE);
    PRINT_CONSTANT((gint) GST_TOC_ENTRY_TYPE_TRACK);
    PRINT_CONSTANT((gint) GST_TOC_ENTRY_TYPE_VERSION);
    PRINT_CONSTANT((gint) GST_TOC_LOOP_FORWARD);
    PRINT_CONSTANT((gint) GST_TOC_LOOP_NONE);
    PRINT_CONSTANT((gint) GST_TOC_LOOP_PING_PONG);
    PRINT_CONSTANT((gint) GST_TOC_LOOP_REVERSE);
    PRINT_CONSTANT(GST_TOC_REPEAT_COUNT_INFINITE);
    PRINT_CONSTANT((gint) GST_TOC_SCOPE_CURRENT);
    PRINT_CONSTANT((gint) GST_TOC_SCOPE_GLOBAL);
    PRINT_CONSTANT((guint) GST_TRACER_VALUE_FLAGS_AGGREGATED);
    PRINT_CONSTANT((guint) GST_TRACER_VALUE_FLAGS_NONE);
    PRINT_CONSTANT((guint) GST_TRACER_VALUE_FLAGS_OPTIONAL);
    PRINT_CONSTANT((gint) GST_TRACER_VALUE_SCOPE_ELEMENT);
    PRINT_CONSTANT((gint) GST_TRACER_VALUE_SCOPE_PAD);
    PRINT_CONSTANT((gint) GST_TRACER_VALUE_SCOPE_PROCESS);
    PRINT_CONSTANT((gint) GST_TRACER_VALUE_SCOPE_THREAD);
    PRINT_CONSTANT((gint) GST_TYPE_FIND_LIKELY);
    PRINT_CONSTANT((gint) GST_TYPE_FIND_MAXIMUM);
    PRINT_CONSTANT((gint) GST_TYPE_FIND_MINIMUM);
    PRINT_CONSTANT((gint) GST_TYPE_FIND_NEARLY_CERTAIN);
    PRINT_CONSTANT((gint) GST_TYPE_FIND_NONE);
    PRINT_CONSTANT((gint) GST_TYPE_FIND_POSSIBLE);
    PRINT_CONSTANT((gint) GST_URI_ERROR_BAD_REFERENCE);
    PRINT_CONSTANT((gint) GST_URI_ERROR_BAD_STATE);
    PRINT_CONSTANT((gint) GST_URI_ERROR_BAD_URI);
    PRINT_CONSTANT((gint) GST_URI_ERROR_UNSUPPORTED_PROTOCOL);
    PRINT_CONSTANT(GST_URI_NO_PORT);
    PRINT_CONSTANT((gint) GST_URI_SINK);
    PRINT_CONSTANT((gint) GST_URI_SRC);
    PRINT_CONSTANT((gint) GST_URI_UNKNOWN);
    PRINT_CONSTANT(GST_USECOND);
    PRINT_CONSTANT(GST_VALUE_EQUAL);
    PRINT_CONSTANT(GST_VALUE_GREATER_THAN);
    PRINT_CONSTANT(GST_VALUE_LESS_THAN);
    PRINT_CONSTANT(GST_VALUE_UNORDERED);
    return 0;
}
