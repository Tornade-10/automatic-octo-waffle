# Install script for directory: C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui-sfml

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SimpleChat")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/maxen/source/repos/automatic-octo-waffle/cmake-build-relwithdebinfo/externals/imgui-sfml/ImGui-SFML.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui-sfml/imgui-SFML.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui-sfml/imgui-SFML_export.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui/imconfig.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui/imgui.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui/imgui_internal.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui/imstb_rectpack.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui/imstb_textedit.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui/imstb_truetype.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui/misc/cpp/imgui_stdlib.h"
    "C:/Users/maxen/source/repos/automatic-octo-waffle/externals/imgui-sfml/imconfig-SFML.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/ImGui-SFML/ImGui-SFMLConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/ImGui-SFML/ImGui-SFMLConfig.cmake"
         "C:/Users/maxen/source/repos/automatic-octo-waffle/cmake-build-relwithdebinfo/externals/imgui-sfml/CMakeFiles/Export/761a6a4c7704629aea6d1d08969b2ac8/ImGui-SFMLConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/ImGui-SFML/ImGui-SFMLConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/ImGui-SFML/ImGui-SFMLConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/ImGui-SFML" TYPE FILE FILES "C:/Users/maxen/source/repos/automatic-octo-waffle/cmake-build-relwithdebinfo/externals/imgui-sfml/CMakeFiles/Export/761a6a4c7704629aea6d1d08969b2ac8/ImGui-SFMLConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/ImGui-SFML" TYPE FILE FILES "C:/Users/maxen/source/repos/automatic-octo-waffle/cmake-build-relwithdebinfo/externals/imgui-sfml/CMakeFiles/Export/761a6a4c7704629aea6d1d08969b2ac8/ImGui-SFMLConfig-relwithdebinfo.cmake")
  endif()
endif()

