cmake_minimum_required (VERSION 2.8.11)
project (AppLibExample)

# In this subdirectory all the library compilation setup lives
add_subdirectory (library)

# In application directory application lives the application project
add_subdirectory (application)
