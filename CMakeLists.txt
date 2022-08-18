cmake_minimum_required(VERSION 3.5.1)
project(DungeonRush VERSION 0.1.0
                    DESCRIPTION "A game inspired by snake"
                    LANGUAGES C)

# Set output path
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(BIN_NAME dungeon_rush)

file(GLOB SRC src/*.c)

add_executable(${BIN_NAME} ${SRC})

INCLUDE(FindPkgConfig)

pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_IMG REQUIRED SDL2_image)
pkg_check_modules(SDL2_TTF REQUIRED SDL2_ttf)
pkg_check_modules(SDL2_NET REQUIRED SDL2_net)
pkg_check_modules(SDL2_MIX REQUIRED SDL2_mixer)

include_directories(${SDL2_INCLUDE_DIRS}
        ${SDL2_IMG_INCLUDE_DIRS}
        ${SDL2_TTF_INCLUDE_DIRS}
        ${SDL2_NET_INCLUDE_DIRS}
        ${SDL2_MIX_INCLUDE_DIRS})

link_directories (${SDL2_LIBRARY_DIRS}
        ${SDL2_IMG_LIBRARY_DIRS}
        ${SDL2_TTF_LIBRARY_DIRS}
        ${SDL2_NET_LIBRARY_DIRS}
        ${SDL2_MIX_LIBRARY_DIRS})

target_link_libraries (${BIN_NAME}
        ${SDL2_LIBRARIES}
        ${SDL2_IMG_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
        ${SDL2_NET_LIBRARIES}
        ${SDL2_MIX_LIBRARIES})

file(COPY res DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
