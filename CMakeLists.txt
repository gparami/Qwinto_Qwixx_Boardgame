cmake_minimum_required(VERSION 3.9)
project(Qwinto_Qwixx_Boardgame)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES Dice.h RandomDice.cpp RandomDice.h Dice.cpp Dice.h RollOfDice.cpp RollOfDice.h Aesthetics.cpp main.cpp)
add_executable(Qwinto_Qwixx_Boardgame ${SOURCE_FILES} main.cpp Aesthetics.cpp Dice.h RandomDice.cpp RandomDice.h Dice.cpp Dice.h RollOfDice.cpp RollOfDice.h)