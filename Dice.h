/**
    Qwinto_Qwixx_Boardgame, Dice.h
    Purpose: Holds a Dice object with a face value and a colour.

    @author Parami Gunasekara
    @version 1.0 2017-11-29
*/
#ifndef QWINTO_QWIXX_BOARDGAME_DICE_H
#define QWINTO_QWIXX_BOARDGAME_DICE_H

#include "RandomDice.h"
#include <string>
#include <iostream>

class Dice;
ostream& operator<<( ostream&, const Dice& );

using namespace std;
class Dice {

public:


    enum class Colour {
        RED, YELLOW, GREEN, BLUE, WHITE
    };

    /**
        Changes the face value of this dice to a random int between 1 and 6
        using the getRandomFaceValue function from the RandomDice structure.
    */
    void roll();

    /**
        Converts the Dice enum to a string value.

        @param diceColour the enum value to convert to string.
        @return a string value corresponding to the enum diceColour
    */
    string toString(const Colour &diceColour) const;

    /**
        Overloaded insertion operator to print the Dice to an output stream.

        @param _os the output stream that
        @param dice the dice object to be put into the output stream.
        @return an output stream containing a structured Dice object.
    */
    friend ostream& operator<<( ostream&, const Dice& );

private:

    Colour diceColour; //stores the diceColour enum.
    int diceValue; //stores the current dice face value.
};


#endif //QWINTO_QWIXX_BOARDGAME_DICE_H
