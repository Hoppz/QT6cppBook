# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appStackViewTEst_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appStackViewTEst_autogen.dir\\ParseCache.txt"
  "appStackViewTEst_autogen"
  )
endif()
