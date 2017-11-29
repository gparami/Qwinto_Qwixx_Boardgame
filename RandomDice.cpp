/**
    Qwinto_Qwixx_Boardgame, RandomDice.cpp
    Purpose: A helper structure for rolling function of a Dice objects.

    @author Parami Gunasekara
    @version 1.0 2017-11-29
*/
#include "RandomDice.h"

/**
    Generates a pseudo random number as a integer that is between 1 and 6

    @return a pseudo random integer between 1 and 6 (inclusive)
*/
int RandomDice::getRandomFaceValue() {

    std::uniform_int_distribution<> dis(1, 6);
    static std::random_device rand;
    std::mt19937 gen(rand());
    dis(gen);

}