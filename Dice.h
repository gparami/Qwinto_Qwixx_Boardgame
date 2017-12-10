/**
    Qwinto_Qwixx_Boardgame, Dice.h
    Purpose: Holds a Dice object with a face value and a colour.

    @author Parami Gunasekara
    @version 1.0 2017-11-29
*/
#ifndef QWINTO_QWIXX_BOARDGAME_DICE_H
#define QWINTO_QWIXX_BOARDGAME_DICE_H

#include "Colour.h"
#include "RandomDice.h"
#include <string>
#include <iostream>

using namespace std;

class Dice;
ostream& operator<<( ostream&, const Dice& );

using namespace std;
class Dice {

public:

    /**
     * Creates a dice object and assignes a random value to it's face.
     * @param diceColour
     */
    Dice(Colour diceColour);

    /**
        Changes the face value of this dice to a random int between 1 and 6
        using the getRandomFaceValue function from the RandomDice structure.
    */
    void roll();

    /**
     * Getter method for the currentDice's face value.
     * @return integer face value of the dice.
     */
    int getDiceValue() const;

    /**
        Converts the Dice enum to a string value.

        @param diceColour the enum value to convert to string.
        @return a string value corresponding to the enum diceColour
    */
    string toString(const Colour &diceColour) const;

    /**
        Overloaded insertion operator to print the Dice to an output stream.

        @param _os the output stream
        @param dice the dice object to be put into the output stream.
        @return an output stream containing a structured Dice object.
    */
    friend ostream& operator<<( ostream&, const Dice& );

private:

    Colour diceColour; //stores the diceColour enum.
    int diceValue; //stores the current dice face value.

};


#endif //QWINTO_QWIXX_BOARDGAME_DICE_H
