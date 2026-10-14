cmake_minimum_required(VERSION 3.19)
project(41132226_1014_Dialog_Based_Application LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets LinguistTools)

qt_standard_project_setup()

qt_add_executable(41132226_1014_Dialog_Based_Application
    WIN32 MACOSX_BUNDLE
    main.cpp
    byterconverter.cpp
    byterconverter.h
)

qt_add_translations(
    TARGETS 41132226_1014_Dialog_Based_Application
    TS_FILES 41132226_1014_Dialog_Based_Application_zh_TW.ts
)

target_link_libraries(41132226_1014_Dialog_Based_Application
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS 41132226_1014_Dialog_Based_Application
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET 41132226_1014_Dialog_Based_Application
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
