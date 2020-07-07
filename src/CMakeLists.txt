add_definitions(
    -DGETTEXT_PACKAGE="${GETTEXT_PACKAGE}"
    -DLOCALEDIR="${CMAKE_INSTALL_FULL_LOCALEDIR}"
)

add_executable(hello_cmake main.c)

install(TARGETS hello_cmake
    DESTINATION ${CMAKE_INSTALL_BINDIR}
)
