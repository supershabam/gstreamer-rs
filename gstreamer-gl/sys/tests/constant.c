// Generated by gir (https://github.com/gtk-rs/gir @ 7ca0cbfc850e)
// from gir-files (https://github.com/gtk-rs/gir-files @ b827978e7d18)
// from gst-gir-files (https://gitlab.freedesktop.org/gstreamer/gir-files-rs.git @ 0220d4948268)
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
    PRINT_CONSTANT(GST_BUFFER_POOL_OPTION_GL_SYNC_META);
    PRINT_CONSTANT(GST_BUFFER_POOL_OPTION_GL_TEXTURE_TARGET_2D);
    PRINT_CONSTANT(GST_BUFFER_POOL_OPTION_GL_TEXTURE_TARGET_EXTERNAL_OES);
    PRINT_CONSTANT(GST_BUFFER_POOL_OPTION_GL_TEXTURE_TARGET_RECTANGLE);
    PRINT_CONSTANT(GST_CAPS_FEATURE_MEMORY_GL_BUFFER);
    PRINT_CONSTANT(GST_CAPS_FEATURE_MEMORY_GL_MEMORY);
    PRINT_CONSTANT((gint) GST_GLSL_ERROR_COMPILE);
    PRINT_CONSTANT((gint) GST_GLSL_ERROR_LINK);
    PRINT_CONSTANT((gint) GST_GLSL_ERROR_PROGRAM);
    PRINT_CONSTANT((guint) GST_GLSL_PROFILE_ANY);
    PRINT_CONSTANT((guint) GST_GLSL_PROFILE_COMPATIBILITY);
    PRINT_CONSTANT((guint) GST_GLSL_PROFILE_CORE);
    PRINT_CONSTANT((guint) GST_GLSL_PROFILE_ES);
    PRINT_CONSTANT((guint) GST_GLSL_PROFILE_NONE);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_100);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_110);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_120);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_130);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_140);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_150);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_300);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_310);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_320);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_330);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_400);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_410);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_420);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_430);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_440);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_450);
    PRINT_CONSTANT((gint) GST_GLSL_VERSION_NONE);
    PRINT_CONSTANT(GST_GL_ALLOCATION_PARAMS_ALLOC_FLAG_ALLOC);
    PRINT_CONSTANT(GST_GL_ALLOCATION_PARAMS_ALLOC_FLAG_BUFFER);
    PRINT_CONSTANT(GST_GL_ALLOCATION_PARAMS_ALLOC_FLAG_USER);
    PRINT_CONSTANT(GST_GL_ALLOCATION_PARAMS_ALLOC_FLAG_VIDEO);
    PRINT_CONSTANT(GST_GL_ALLOCATION_PARAMS_ALLOC_FLAG_WRAP_GPU_HANDLE);
    PRINT_CONSTANT(GST_GL_ALLOCATION_PARAMS_ALLOC_FLAG_WRAP_SYSMEM);
    PRINT_CONSTANT((gint) GST_GL_ALPHA);
    PRINT_CONSTANT((guint) GST_GL_API_ANY);
    PRINT_CONSTANT((guint) GST_GL_API_GLES1);
    PRINT_CONSTANT(GST_GL_API_GLES1_NAME);
    PRINT_CONSTANT((guint) GST_GL_API_GLES2);
    PRINT_CONSTANT(GST_GL_API_GLES2_NAME);
    PRINT_CONSTANT((guint) GST_GL_API_NONE);
    PRINT_CONSTANT((guint) GST_GL_API_OPENGL);
    PRINT_CONSTANT((guint) GST_GL_API_OPENGL3);
    PRINT_CONSTANT(GST_GL_API_OPENGL3_NAME);
    PRINT_CONSTANT(GST_GL_API_OPENGL_NAME);
    PRINT_CONSTANT(GST_GL_BASE_MEMORY_ALLOCATOR_NAME);
    PRINT_CONSTANT((gint) GST_GL_BASE_MEMORY_ERROR_FAILED);
    PRINT_CONSTANT((gint) GST_GL_BASE_MEMORY_ERROR_OLD_LIBS);
    PRINT_CONSTANT((gint) GST_GL_BASE_MEMORY_ERROR_RESOURCE_UNAVAILABLE);
    PRINT_CONSTANT((guint) GST_GL_BASE_MEMORY_TRANSFER_NEED_DOWNLOAD);
    PRINT_CONSTANT((guint) GST_GL_BASE_MEMORY_TRANSFER_NEED_UPLOAD);
    PRINT_CONSTANT(GST_GL_BUFFER_ALLOCATOR_NAME);
    PRINT_CONSTANT(GST_GL_COLOR_CONVERT_EXT_FORMATS);
    PRINT_CONSTANT((gint) GST_GL_CONFIG_CAVEAT_NONE);
    PRINT_CONSTANT((gint) GST_GL_CONFIG_CAVEAT_NON_CONFORMANT);
    PRINT_CONSTANT((gint) GST_GL_CONFIG_CAVEAT_SLOW);
    PRINT_CONSTANT(GST_GL_CONFIG_STRUCTURE_NAME);
    PRINT_CONSTANT((guint) GST_GL_CONFIG_SURFACE_TYPE_NONE);
    PRINT_CONSTANT((guint) GST_GL_CONFIG_SURFACE_TYPE_PBUFFER);
    PRINT_CONSTANT((guint) GST_GL_CONFIG_SURFACE_TYPE_PIXMAP);
    PRINT_CONSTANT((guint) GST_GL_CONFIG_SURFACE_TYPE_WINDOW);
    PRINT_CONSTANT((gint) GST_GL_CONTEXT_ERROR_CREATE_CONTEXT);
    PRINT_CONSTANT((gint) GST_GL_CONTEXT_ERROR_FAILED);
    PRINT_CONSTANT((gint) GST_GL_CONTEXT_ERROR_OLD_LIBS);
    PRINT_CONSTANT((gint) GST_GL_CONTEXT_ERROR_RESOURCE_UNAVAILABLE);
    PRINT_CONSTANT((gint) GST_GL_CONTEXT_ERROR_WRONG_API);
    PRINT_CONSTANT((gint) GST_GL_CONTEXT_ERROR_WRONG_CONFIG);
    PRINT_CONSTANT(GST_GL_CONTEXT_TYPE_CGL);
    PRINT_CONSTANT(GST_GL_CONTEXT_TYPE_EAGL);
    PRINT_CONSTANT(GST_GL_CONTEXT_TYPE_EGL);
    PRINT_CONSTANT(GST_GL_CONTEXT_TYPE_GLX);
    PRINT_CONSTANT(GST_GL_CONTEXT_TYPE_WGL);
    PRINT_CONSTANT((gint) GST_GL_DEPTH24_STENCIL8);
    PRINT_CONSTANT((gint) GST_GL_DEPTH_COMPONENT16);
    PRINT_CONSTANT(GST_GL_DISPLAY_CONTEXT_TYPE);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_ANDROID);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_ANY);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_COCOA);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_DISPMANX);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_EAGL);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_EGL);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_EGL_DEVICE);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_GBM);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_NONE);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_VIV_FB);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_WAYLAND);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_WIN32);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_WINRT);
    PRINT_CONSTANT((guint) GST_GL_DISPLAY_TYPE_X11);
    PRINT_CONSTANT((gint) GST_GL_LUMINANCE);
    PRINT_CONSTANT((gint) GST_GL_LUMINANCE_ALPHA);
    PRINT_CONSTANT(GST_GL_MEMORY_ALLOCATOR_NAME);
    PRINT_CONSTANT(GST_GL_MEMORY_PBO_ALLOCATOR_NAME);
    PRINT_CONSTANT(GST_GL_MEMORY_VIDEO_EXT_FORMATS);
    PRINT_CONSTANT((guint) GST_GL_PLATFORM_ANY);
    PRINT_CONSTANT((guint) GST_GL_PLATFORM_CGL);
    PRINT_CONSTANT((guint) GST_GL_PLATFORM_EAGL);
    PRINT_CONSTANT((guint) GST_GL_PLATFORM_EGL);
    PRINT_CONSTANT((guint) GST_GL_PLATFORM_GLX);
    PRINT_CONSTANT((guint) GST_GL_PLATFORM_NONE);
    PRINT_CONSTANT((guint) GST_GL_PLATFORM_WGL);
    PRINT_CONSTANT((gint) GST_GL_QUERY_NONE);
    PRINT_CONSTANT((gint) GST_GL_QUERY_TIMESTAMP);
    PRINT_CONSTANT((gint) GST_GL_QUERY_TIME_ELAPSED);
    PRINT_CONSTANT((gint) GST_GL_R16);
    PRINT_CONSTANT((gint) GST_GL_R8);
    PRINT_CONSTANT((gint) GST_GL_RED);
    PRINT_CONSTANT(GST_GL_RENDERBUFFER_ALLOCATOR_NAME);
    PRINT_CONSTANT((gint) GST_GL_RG);
    PRINT_CONSTANT((gint) GST_GL_RG16);
    PRINT_CONSTANT((gint) GST_GL_RG8);
    PRINT_CONSTANT((gint) GST_GL_RGB);
    PRINT_CONSTANT((gint) GST_GL_RGB10_A2);
    PRINT_CONSTANT((gint) GST_GL_RGB16);
    PRINT_CONSTANT((gint) GST_GL_RGB565);
    PRINT_CONSTANT((gint) GST_GL_RGB8);
    PRINT_CONSTANT((gint) GST_GL_RGBA);
    PRINT_CONSTANT((gint) GST_GL_RGBA16);
    PRINT_CONSTANT((gint) GST_GL_RGBA8);
    PRINT_CONSTANT((gint) GST_GL_STEREO_DOWNMIX_ANAGLYPH_AMBER_BLUE_DUBOIS);
    PRINT_CONSTANT((gint) GST_GL_STEREO_DOWNMIX_ANAGLYPH_GREEN_MAGENTA_DUBOIS);
    PRINT_CONSTANT((gint) GST_GL_STEREO_DOWNMIX_ANAGLYPH_RED_CYAN_DUBOIS);
    PRINT_CONSTANT((gint) GST_GL_TEXTURE_TARGET_2D);
    PRINT_CONSTANT(GST_GL_TEXTURE_TARGET_2D_STR);
    PRINT_CONSTANT((gint) GST_GL_TEXTURE_TARGET_EXTERNAL_OES);
    PRINT_CONSTANT(GST_GL_TEXTURE_TARGET_EXTERNAL_OES_STR);
    PRINT_CONSTANT((gint) GST_GL_TEXTURE_TARGET_NONE);
    PRINT_CONSTANT((gint) GST_GL_TEXTURE_TARGET_RECTANGLE);
    PRINT_CONSTANT(GST_GL_TEXTURE_TARGET_RECTANGLE_STR);
    PRINT_CONSTANT((gint) GST_GL_UPLOAD_DONE);
    PRINT_CONSTANT((gint) GST_GL_UPLOAD_ERROR);
    PRINT_CONSTANT((gint) GST_GL_UPLOAD_RECONFIGURE);
    PRINT_CONSTANT((gint) GST_GL_UPLOAD_UNSHARED_GL_CONTEXT);
    PRINT_CONSTANT((gint) GST_GL_UPLOAD_UNSUPPORTED);
    PRINT_CONSTANT((gint) GST_GL_WINDOW_ERROR_FAILED);
    PRINT_CONSTANT((gint) GST_GL_WINDOW_ERROR_OLD_LIBS);
    PRINT_CONSTANT((gint) GST_GL_WINDOW_ERROR_RESOURCE_UNAVAILABLE);
    PRINT_CONSTANT(GST_MAP_GL);
    return 0;
}
