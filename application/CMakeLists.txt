# Specify source files of the application
file(GLOB_RECURSE APP_HDR ${CMAKE_CURRENT_SOURCE_DIR}/*.hh)
file(GLOB_RECURSE APP_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

# Add library headers to includes
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../library")

# Define application executable
add_executable(Application WIN32 ${APP_SRC} ${APP_HDR})

# Link library
target_link_libraries(Application PRIVATE library)

# Copy library file to the application build directory after application build to be able to run it
add_custom_command(TARGET Application POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy
                   "${CMAKE_BINARY_DIR}/library/liblibrary.dll" "${CMAKE_BINARY_DIR}/Application/liblibrary.dll")
