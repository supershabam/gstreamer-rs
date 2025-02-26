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
    PRINT_CONSTANT((guint) GST_RTSP_ANNOUNCE);
    PRINT_CONSTANT((gint) GST_RTSP_AUTH_BASIC);
    PRINT_CONSTANT((gint) GST_RTSP_AUTH_DIGEST);
    PRINT_CONSTANT((gint) GST_RTSP_AUTH_NONE);
    PRINT_CONSTANT(GST_RTSP_DEFAULT_PORT);
    PRINT_CONSTANT((guint) GST_RTSP_DESCRIBE);
    PRINT_CONSTANT((gint) GST_RTSP_EEOF);
    PRINT_CONSTANT((gint) GST_RTSP_EINTR);
    PRINT_CONSTANT((gint) GST_RTSP_EINVAL);
    PRINT_CONSTANT((gint) GST_RTSP_ELAST);
    PRINT_CONSTANT((gint) GST_RTSP_ENET);
    PRINT_CONSTANT((gint) GST_RTSP_ENOMEM);
    PRINT_CONSTANT((gint) GST_RTSP_ENOTIMPL);
    PRINT_CONSTANT((gint) GST_RTSP_ENOTIP);
    PRINT_CONSTANT((gint) GST_RTSP_EPARSE);
    PRINT_CONSTANT((gint) GST_RTSP_ERESOLV);
    PRINT_CONSTANT((gint) GST_RTSP_ERROR);
    PRINT_CONSTANT((gint) GST_RTSP_ESYS);
    PRINT_CONSTANT((gint) GST_RTSP_ETGET);
    PRINT_CONSTANT((gint) GST_RTSP_ETIMEOUT);
    PRINT_CONSTANT((gint) GST_RTSP_ETPOST);
    PRINT_CONSTANT((guint) GST_RTSP_EV_READ);
    PRINT_CONSTANT((guint) GST_RTSP_EV_WRITE);
    PRINT_CONSTANT((gint) GST_RTSP_EWSASTART);
    PRINT_CONSTANT((gint) GST_RTSP_EWSAVERSION);
    PRINT_CONSTANT((gint) GST_RTSP_FAM_INET);
    PRINT_CONSTANT((gint) GST_RTSP_FAM_INET6);
    PRINT_CONSTANT((gint) GST_RTSP_FAM_NONE);
    PRINT_CONSTANT((guint) GST_RTSP_GET);
    PRINT_CONSTANT((guint) GST_RTSP_GET_PARAMETER);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ACCEPT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ACCEPT_CHARSET);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ACCEPT_ENCODING);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ACCEPT_LANGUAGE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ACCEPT_RANGES);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ALERT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ALLOW);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_AUTHENTICATION_INFO);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_AUTHORIZATION);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_BANDWIDTH);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_BLOCKSIZE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CACHE_CONTROL);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CLIENT_CHALLENGE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CLIENT_ID);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_COMPANY_ID);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONFERENCE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONNECTION);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONTENT_BASE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONTENT_ENCODING);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONTENT_LANGUAGE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONTENT_LENGTH);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONTENT_LOCATION);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CONTENT_TYPE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_CSEQ);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_DATE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_ETAG);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_EXPIRES);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_FRAMES);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_FROM);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_GUID);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_HOST);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_IF_MATCH);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_IF_MODIFIED_SINCE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_INVALID);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_KEYMGMT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_LANGUAGE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_LAST);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_LAST_MODIFIED);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_LOCATION);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_MAX_ASM_WIDTH);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_MEDIA_PROPERTIES);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_PIPELINED_REQUESTS);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_PLAYER_START_TIME);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_PRAGMA);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_PROXY_AUTHENTICATE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_PROXY_REQUIRE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_PUBLIC);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_RANGE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_RATE_CONTROL);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_REAL_CHALLENGE1);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_REAL_CHALLENGE2);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_REAL_CHALLENGE3);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_REFERER);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_REGION_DATA);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_REQUIRE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_RETRY_AFTER);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_RTCP_INTERVAL);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_RTP_INFO);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_SCALE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_SEEK_STYLE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_SERVER);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_SESSION);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_SPEED);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_SUBSCRIBE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_SUPPORTED);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_TIMESTAMP);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_TRANSPORT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_UNSUPPORTED);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_USER_AGENT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_VARY);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_VIA);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_WWW_AUTHENTICATE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_ACCELERATE_STREAMING);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_ACCEPT_AUTHENT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_ACCEPT_PROXY_AUTHENT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_BROADCAST_ID);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_BURST_STREAMING);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_NOTICE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_PLAYER_LAG_TIME);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_PLAYLIST);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_PLAYLIST_CHANGE_NOTICE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_PLAYLIST_GEN_ID);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_PLAYLIST_SEEK_ID);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_PROXY_CLIENT_AGENT);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_PROXY_CLIENT_VERB);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_RECEDING_PLAYLISTCHANGE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_RTP_INFO);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_SERVER_IP_ADDRESS);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_SESSIONCOOKIE);
    PRINT_CONSTANT((gint) GST_RTSP_HDR_X_STARTUPPROFILE);
    PRINT_CONSTANT((guint) GST_RTSP_INVALID);
    PRINT_CONSTANT((guint) GST_RTSP_LOWER_TRANS_HTTP);
    PRINT_CONSTANT((guint) GST_RTSP_LOWER_TRANS_TCP);
    PRINT_CONSTANT((guint) GST_RTSP_LOWER_TRANS_TLS);
    PRINT_CONSTANT((guint) GST_RTSP_LOWER_TRANS_UDP);
    PRINT_CONSTANT((guint) GST_RTSP_LOWER_TRANS_UDP_MCAST);
    PRINT_CONSTANT((guint) GST_RTSP_LOWER_TRANS_UNKNOWN);
    PRINT_CONSTANT((gint) GST_RTSP_MESSAGE_DATA);
    PRINT_CONSTANT((gint) GST_RTSP_MESSAGE_HTTP_REQUEST);
    PRINT_CONSTANT((gint) GST_RTSP_MESSAGE_HTTP_RESPONSE);
    PRINT_CONSTANT((gint) GST_RTSP_MESSAGE_INVALID);
    PRINT_CONSTANT((gint) GST_RTSP_MESSAGE_REQUEST);
    PRINT_CONSTANT((gint) GST_RTSP_MESSAGE_RESPONSE);
    PRINT_CONSTANT((gint) GST_RTSP_OK);
    PRINT_CONSTANT((guint) GST_RTSP_OPTIONS);
    PRINT_CONSTANT((guint) GST_RTSP_PAUSE);
    PRINT_CONSTANT((guint) GST_RTSP_PLAY);
    PRINT_CONSTANT((guint) GST_RTSP_POST);
    PRINT_CONSTANT((guint) GST_RTSP_PROFILE_AVP);
    PRINT_CONSTANT((guint) GST_RTSP_PROFILE_AVPF);
    PRINT_CONSTANT((guint) GST_RTSP_PROFILE_SAVP);
    PRINT_CONSTANT((guint) GST_RTSP_PROFILE_SAVPF);
    PRINT_CONSTANT((guint) GST_RTSP_PROFILE_UNKNOWN);
    PRINT_CONSTANT((gint) GST_RTSP_RANGE_CLOCK);
    PRINT_CONSTANT((gint) GST_RTSP_RANGE_NPT);
    PRINT_CONSTANT((gint) GST_RTSP_RANGE_SMPTE);
    PRINT_CONSTANT((gint) GST_RTSP_RANGE_SMPTE_25);
    PRINT_CONSTANT((gint) GST_RTSP_RANGE_SMPTE_30_DROP);
    PRINT_CONSTANT((guint) GST_RTSP_RECORD);
    PRINT_CONSTANT((guint) GST_RTSP_REDIRECT);
    PRINT_CONSTANT((guint) GST_RTSP_SETUP);
    PRINT_CONSTANT((guint) GST_RTSP_SET_PARAMETER);
    PRINT_CONSTANT((gint) GST_RTSP_STATE_INIT);
    PRINT_CONSTANT((gint) GST_RTSP_STATE_INVALID);
    PRINT_CONSTANT((gint) GST_RTSP_STATE_PLAYING);
    PRINT_CONSTANT((gint) GST_RTSP_STATE_READY);
    PRINT_CONSTANT((gint) GST_RTSP_STATE_RECORDING);
    PRINT_CONSTANT((gint) GST_RTSP_STATE_SEEKING);
    PRINT_CONSTANT((gint) GST_RTSP_STS_AGGREGATE_OPERATION_NOT_ALLOWED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_BAD_GATEWAY);
    PRINT_CONSTANT((gint) GST_RTSP_STS_BAD_REQUEST);
    PRINT_CONSTANT((gint) GST_RTSP_STS_CONFERENCE_NOT_FOUND);
    PRINT_CONSTANT((gint) GST_RTSP_STS_CONTINUE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_CREATED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_DESTINATION_UNREACHABLE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_FORBIDDEN);
    PRINT_CONSTANT((gint) GST_RTSP_STS_GATEWAY_TIMEOUT);
    PRINT_CONSTANT((gint) GST_RTSP_STS_GONE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_HEADER_FIELD_NOT_VALID_FOR_RESOURCE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_INTERNAL_SERVER_ERROR);
    PRINT_CONSTANT((gint) GST_RTSP_STS_INVALID);
    PRINT_CONSTANT((gint) GST_RTSP_STS_INVALID_RANGE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_KEY_MANAGEMENT_FAILURE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_LENGTH_REQUIRED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_LOW_ON_STORAGE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_METHOD_NOT_ALLOWED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_METHOD_NOT_VALID_IN_THIS_STATE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_MOVED_PERMANENTLY);
    PRINT_CONSTANT((gint) GST_RTSP_STS_MOVE_TEMPORARILY);
    PRINT_CONSTANT((gint) GST_RTSP_STS_MULTIPLE_CHOICES);
    PRINT_CONSTANT((gint) GST_RTSP_STS_NOT_ACCEPTABLE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_NOT_ENOUGH_BANDWIDTH);
    PRINT_CONSTANT((gint) GST_RTSP_STS_NOT_FOUND);
    PRINT_CONSTANT((gint) GST_RTSP_STS_NOT_IMPLEMENTED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_NOT_MODIFIED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_OK);
    PRINT_CONSTANT((gint) GST_RTSP_STS_ONLY_AGGREGATE_OPERATION_ALLOWED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_OPTION_NOT_SUPPORTED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_PARAMETER_IS_READONLY);
    PRINT_CONSTANT((gint) GST_RTSP_STS_PARAMETER_NOT_UNDERSTOOD);
    PRINT_CONSTANT((gint) GST_RTSP_STS_PAYMENT_REQUIRED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_PRECONDITION_FAILED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_PROXY_AUTH_REQUIRED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_REQUEST_ENTITY_TOO_LARGE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_REQUEST_TIMEOUT);
    PRINT_CONSTANT((gint) GST_RTSP_STS_REQUEST_URI_TOO_LARGE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_RTSP_VERSION_NOT_SUPPORTED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_SEE_OTHER);
    PRINT_CONSTANT((gint) GST_RTSP_STS_SERVICE_UNAVAILABLE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_SESSION_NOT_FOUND);
    PRINT_CONSTANT((gint) GST_RTSP_STS_UNAUTHORIZED);
    PRINT_CONSTANT((gint) GST_RTSP_STS_UNSUPPORTED_MEDIA_TYPE);
    PRINT_CONSTANT((gint) GST_RTSP_STS_UNSUPPORTED_TRANSPORT);
    PRINT_CONSTANT((gint) GST_RTSP_STS_USE_PROXY);
    PRINT_CONSTANT((guint) GST_RTSP_TEARDOWN);
    PRINT_CONSTANT((gint) GST_RTSP_TIME_END);
    PRINT_CONSTANT((gint) GST_RTSP_TIME_FRAMES);
    PRINT_CONSTANT((gint) GST_RTSP_TIME_NOW);
    PRINT_CONSTANT((gint) GST_RTSP_TIME_SECONDS);
    PRINT_CONSTANT((gint) GST_RTSP_TIME_UTC);
    PRINT_CONSTANT((guint) GST_RTSP_TRANS_RDT);
    PRINT_CONSTANT((guint) GST_RTSP_TRANS_RTP);
    PRINT_CONSTANT((guint) GST_RTSP_TRANS_UNKNOWN);
    PRINT_CONSTANT((gint) GST_RTSP_VERSION_1_0);
    PRINT_CONSTANT((gint) GST_RTSP_VERSION_1_1);
    PRINT_CONSTANT((gint) GST_RTSP_VERSION_2_0);
    PRINT_CONSTANT((gint) GST_RTSP_VERSION_INVALID);
    return 0;
}
