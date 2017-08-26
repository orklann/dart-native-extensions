# Install script for directory: /home/user/dev/projects/cpp/dyncall-0.9/test

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/call_suite/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/callback_suite/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/plain/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/plain_c++/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/suite/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/suite2/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/suite3/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/suite_floats/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/ellipsis/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/callf/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/nm/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/resolve_self/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/thunk/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/malloc_wx/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/callback_plain/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/sharedlib/cmake_install.cmake")
  include("/home/user/dev/projects/cpp/dyncall-0.9/test/syscall/cmake_install.cmake")

endif()

