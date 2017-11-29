/**
    Qwinto_Qwixx_Boardgame
    RandomDice.h
    Purpose: A helper structure for rolling function of a Dice objects.

    @author Parami Gunasekara
    @version 1.0 2017-11-29
*/
#ifndef QWINTO_QWIXX_BOARDGAME_RANDOMDICE_H
#define QWINTO_QWIXX_BOARDGAME_RANDOMDICE_H

#include <random>

struct RandomDice {

    /**
        Generates a pseudo random number as a integer that is between 1 and 6

        @return a pseudo random integer between 1 and 6 (inclusive)
    */
    static int getRandomFaceValue();

};


#endif //QWINTO_QWIXX_BOARDGAME_RANDOMDICE_H
