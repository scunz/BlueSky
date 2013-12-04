
QT_PREPARE(Core Gui)

SET(SRC_FILES
    Main.cpp
    LoremIpsumView.cpp
)

SET(HDR_FILES
    LoremIpsumView.hpp
)

SET(RCC_FILES
    Images/Images.rcc
)

QT_MOC(MOC_FILES ${HDR_FILES})
QT_RCC(QRC_FILES RES_FILES ${RCC_FILES})

ADD_QT_EXECUTABLE(
    SkyTest

    ${SRC_FILES}
    ${HDR_FILES}
    ${MOC_FILES}
    ${QRC_FILES}
    ${RES_FILES}
    ${RCC_FILES}
)

TARGET_LINK_LIBRARIES(
    SkyTest

    LINK_PRIVATE
        BlueSky
        HeavenIcons
        HeavenActions
)
