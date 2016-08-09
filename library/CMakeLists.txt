# Definition is used in library source to export library methods.
# When library headers are included by an application that wants to link to the library, this definition is
# ignored and library methods are defined as imports. See Library.hh for details.
add_definitions(-DLIB_EXPORTS)

# Specify source files
file(GLOB_RECURSE LIBRARY_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
file(GLOB_RECURSE LIBRARY_HDR ${CMAKE_CURRENT_SOURCE_DIR}/*.hh)

# Add library target
add_library(library SHARED ${LIBRARY_SRC} ${LIBRARY_HDR})
