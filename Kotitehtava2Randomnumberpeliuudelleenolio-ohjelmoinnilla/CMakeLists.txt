cmake_minimum_required(VERSION 3.5)

project(Kotitehtava2Randomnumberpeliuudelleenolio-ohjelmoinnilla LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Kotitehtava2Randomnumberpeliuudelleenolio-ohjelmoinnilla main.cpp
    Game.h)

include(GNUInstallDirs)
install(TARGETS Kotitehtava2Randomnumberpeliuudelleenolio-ohjelmoinnilla
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
