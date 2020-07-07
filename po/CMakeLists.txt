include(FindGettext)
find_program(GETTEXT_XGETTEXT_EXECUTABLE xgettext)

# update hello_cmake.pot
set(_potFile ${CMAKE_CURRENT_SOURCE_DIR}/${GETTEXT_PACKAGE}.pot)
set(xgettext_options -j --keyword=_ --keyword=N_ --keyword=Q_ --keyword=C_:1c,2 --keyword=NC_:1c,2 --from-code=UTF-8 -ktranslatable -o ${_potFile})

add_custom_target(hello_cmake_pot BYPRODUCTS ${_potFile}
    # make sure inkscape.pot is re-created from scratch
    COMMAND rm -f ${_potFile} && touch ${_potFile}

    # extract strings from source files into inkscape.pot
    COMMAND ${GETTEXT_XGETTEXT_EXECUTABLE} ${xgettext_options} -f POTFILES
    COMMENT "Extract translatable messages to ${_potFile}"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

GETTEXT_CREATE_TRANSLATIONS(hello_cmake.pot ALL zh_CN.po)
