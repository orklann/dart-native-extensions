cmake_minimum_required (VERSION 3.1)
project (dna)

add_definitions(-DDART_SHARED_LIB)
set (CMAKE_CXX_STANDARD 11)

file(GLOB DNA_SRC
    "*.h"
    "*.cpp"
)

add_library(dna SHARED ${DNA_SRC})
add_library(dart SHARED IMPORTED)

#set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

if (UNIX)
	include_directories ("/usr/lib/dart" "/home/user/dev/projects/dartgl/cpp/dyncall-0.9/dyncall" "/home/user/dev/projects/dartgl/cpp/dyncall-0.9/dynload")

	find_library(DYN_LIB NAMES libdyncall_s.a PATHS "../dyncall-0.9/dyncall")
	find_library(DYN_LOAD_LIB NAMES libdynload_s.a PATHS "../dyncall-0.9/dynload")

	target_link_libraries (dna ${DYN_LIB} ${DYN_LOAD_LIB})
else()
	include_directories ("$ENV{DART_SDK}" "../dyncall-0.9-win/include/")

	find_library(DART_LIB NAMES dart PATHS "$ENV{DART_SDK}/bin/")
	find_library(DYN_LIB NAMES libdyncall_s PATHS "../dyncall-0.9-win/lib/")
	find_library(DYN_LOAD_LIB NAMES libdynload_s PATHS "../dyncall-0.9-win/lib/")

	target_link_libraries (dna ${DART_LIB} ${DYN_LIB} ${DYN_LOAD_LIB})
endif()
