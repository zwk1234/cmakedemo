cmake_minimum_required(VERSION 3.1)
project(hello_cmake VERSION 0.2.0)

include(GNUInstallDirs)
find_package(Gettext REQUIRED)
find_package(Intl REQUIRED)

set(GETTEXT_PACKAGE ${PROJECT_NAME})

add_subdirectory(data)
add_subdirectory(po)
add_subdirectory(src)
