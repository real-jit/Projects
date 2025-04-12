# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MyProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MyProject_autogen.dir\\ParseCache.txt"
  "MyProject_autogen"
  )
endif()
