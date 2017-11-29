//
// Created by Parami Gunasekara on 2017-11-29.
//

#include "Dice.h"

/**
    Changes the face value of this dice to a random int between 1 and 6
    using the getRandomFaceValue function from the RandomDice structure.
*/
void Dice::roll() { diceValue = RandomDice::getRandomFaceValue(); }


/**
    Converts the Dice enum to a string value.

    @param diceColour the enum value to convert to string.
    @return a string value corresponding to the enum diceColour
*/
std::string Dice::toString(const Dice::Colour &diceColour) const {
    std::string stringColour;
    if (diceColour == Colour::RED) {stringColour = "RED";}
    else if (diceColour == Colour::YELLOW) {stringColour = "YELLOW";}
    else if (diceColour == Colour::GREEN) {stringColour = "GREEN";}
    else if (diceColour == Colour::BLUE) {stringColour = "BLUE";}
    else if (diceColour == Colour::WHITE) {stringColour = "WHITE";}
    return stringColour;
}

/**
    Overloaded insertion operator to print the Dice to an output stream.

    @param _os the output stream that
    @param dice the dice object to be put into the output stream.
    @return an output stream containing a structured Dice object.
*/
ostream& operator<<( ostream& _os, const Dice& dice) {
    _os << dice.toString(diceColour) << "\t" << dice.diceValue << "\t";
    return _os;
}