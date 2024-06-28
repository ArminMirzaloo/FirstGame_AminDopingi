# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FirstGame_Amin_Dopingi__autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FirstGame_Amin_Dopingi__autogen.dir\\ParseCache.txt"
  "FirstGame_Amin_Dopingi__autogen"
  )
endif()
