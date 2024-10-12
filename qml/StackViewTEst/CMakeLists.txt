cmake_minimum_required(VERSION 3.16)

project(StackViewTEst VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick Network)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appStackViewTEst
    main.cpp
)

qt_add_qml_module(appStackViewTEst
    URI StackViewTEst
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES Home.qml
        QML_FILES Profile.qml
        QML_FILES About.qml
        SOURCES
        SOURCES
        SOURCES
        SOURCES
        SOURCES
        SOURCES linkconfiguration.h linkconfiguration.cpp
        SOURCES linkmanager.h linkmanager.cpp
        SOURCES linkconfiguration.h linkconfiguration.cpp
        SOURCES linkinterface.h linkinterface.cpp
        SOURCES udplink.h udplink.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appStackViewTEst PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appStackViewTEst
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appStackViewTEst
    PRIVATE Qt6::Quick
    Qt6::Network
)

include(GNUInstallDirs)
install(TARGETS appStackViewTEst
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
