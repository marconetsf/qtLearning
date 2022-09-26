# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\aula_03_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\aula_03_autogen.dir\\ParseCache.txt"
  "aula_03_autogen"
  )
endif()
