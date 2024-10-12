# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appImageViewer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appImageViewer_autogen.dir\\ParseCache.txt"
  "appImageViewer_autogen"
  )
endif()
