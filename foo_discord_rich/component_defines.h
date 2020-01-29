#pragma once

// Generated by scripts from setup.bat
#include <commit_hash.h>

#define DRP_NAME "Discord Rich Presense"
#define DRP_UNDERSCORE_NAME "foo_discord_rich"
#define DRP_DLL_NAME DRP_UNDERSCORE_NAME ".dll"

#define DRP_STRINGIFY_HELPER( x ) #x
#define DRP_STRINGIFY( x ) DRP_STRINGIFY_HELPER( x )

#define DRP_VERSION_MAJOR 1
#define DRP_VERSION_MINOR 2
#define DRP_VERSION_PATCH 0
//#define DRP_VERSION_PRERELEASE_TEXT "beta"

#ifdef DRP_VERSION_PRERELEASE_TEXT
#    define DRP_VERSION_PRERELEASE "-" DRP_VERSION_PRERELEASE_TEXT
#    define DRP_VERSION_METADATA "+" DRP_STRINGIFY( DRP_COMMIT_HASH )
#else
#    define DRP_VERSION_PRERELEASE ""
#    define DRP_VERSION_METADATA ""
#endif

#ifdef _DEBUG
#    define DRP_VERSION_DEBUG_SUFFIX " (Debug)"
#else
#    define DRP_VERSION_DEBUG_SUFFIX ""
#endif

#define DRP_VERSION \
    DRP_STRINGIFY( DRP_VERSION_MAJOR ) "." DRP_STRINGIFY( DRP_VERSION_MINOR ) "." DRP_STRINGIFY( DRP_VERSION_PATCH ) \
    DRP_VERSION_PRERELEASE DRP_VERSION_METADATA
#define DRP_NAME_WITH_VERSION DRP_NAME " v" DRP_VERSION DRP_VERSION_DEBUG_SUFFIX
