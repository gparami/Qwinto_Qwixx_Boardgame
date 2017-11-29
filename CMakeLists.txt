cmake_minimum_required(VERSION 3.8)
project(Qwinto_Qwixx_Boardgame)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES ScoreSheet.h Dice.h RandomDice.cpp RandomDice.h)
add_executable(Qwinto_Qwixx_Boardgame ${SOURCE_FILES} ScoreSheet.h Dice.h RandomDice.cpp RandomDice.h)