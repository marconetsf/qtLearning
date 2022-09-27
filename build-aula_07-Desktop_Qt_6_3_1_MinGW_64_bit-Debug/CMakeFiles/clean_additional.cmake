# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\aula_07_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\aula_07_autogen.dir\\ParseCache.txt"
  "aula_07_autogen"
  )
endif()
