cmake_minimum_required(VERSION 3.10)
project(SimpleChat)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(externals/SFML)
set(IMGUI_SFML_FIND_SFML OFF)
set(IMGUI_DIR "${CMAKE_SOURCE_DIR}/externals/imgui/" CACHE STRING "")
add_subdirectory(externals/imgui-sfml)

add_subdirectory(externals/crackitos_physics)

add_executable(server main/server.cpp)
target_include_directories(server PRIVATE externals/SFML/include include)
target_link_libraries(server PRIVATE sfml-network crackitos_physics)

add_executable(client
        main/client.cpp
        main/client/src/game_manager.cpp
        main/client/src/display.cpp
        main/client/src/input_manager.cpp
        main/client/src/game.cpp
        main/client/src/player_character.cc
)
target_include_directories(client PRIVATE
        externals/SFML/include
        include
        externals/imgui-sfml
        externals/imgui
        main/client/include)
target_link_libraries(client PRIVATE sfml-network sfml-graphics ImGui-SFML crackitos_physics)