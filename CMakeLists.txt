cmake_minimum_required(VERSION 3.20)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Wall)
add_executable(TicTacToe main.cpp Plansza.cpp Plansza.h Game.cpp Game.h Player.cpp Player.h )
add_compile_options(-Wall -pedantic -Wextra -Werror=return-type -Werror=array-bounds -Werror=parentheses)
add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)

