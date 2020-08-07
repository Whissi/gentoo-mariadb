find_path(LZ4_INCLUDE_DIR NAMES lz4.h)
find_library(LZ4_LIBRARIES NAMES lz4)

include(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(
    LZ4 DEFAULT_MSG
    LZ4_LIBRARIES LZ4_INCLUDE_DIR)

mark_as_advanced(LZ4_INCLUDE_DIR LZ4_LIBRARIES)
