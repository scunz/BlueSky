
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.12)

INCLUDE(cmake/Utils.cmake)
SET_OUTPUT_PATHS()
include(cmake/QtMacros.cmake)

IF(UNIX)
    GCC_ADD_FLAG( "-Wall" )
    GCC_ADD_FLAG( "-fvisibility=hidden" )
ENDIF()

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_LIST_DIR})

ADD_SUBDIRECTORY(hic)
ADD_SUBDIRECTORY(libHeavenIcons)
ADD_SUBDIRECTORY(libHeavenActions)
ADD_SUBDIRECTORY(libBlueSky)
ADD_SUBDIRECTORY(Main)

