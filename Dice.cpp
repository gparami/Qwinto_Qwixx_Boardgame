/**
    Qwinto_Qwixx_Boardgame, Dice.cpp
    Purpose: Holds a Dice object with a face value and a colour.

    @author Parami Gunasekara
    @version 1.0 2017-11-29
*/
#include "Dice.h"

Dice::Dice(Colour colour) : diceColour(colour) { roll(); }

void Dice::roll() { diceValue = RandomDice::getRandomFaceValue(); }

int Dice::getDiceValue() const { return diceValue; }

std::string Dice::toString(const Colour &diceColour) const {
    std::string stringColour;
    if (diceColour == Colour::RED) {stringColour = "RED";}
    else if (diceColour == Colour::YELLOW) {stringColour = "YELLOW";}
    else if (diceColour == Colour::GREEN) {stringColour = "GREEN";}
    else if (diceColour == Colour::BLUE) {stringColour = "BLUE";}
    else if (diceColour == Colour::WHITE) {stringColour = "WHITE";}
    return stringColour;
}

ostream& operator<<( ostream& _os, const Dice& dice) {
    _os << dice.toString(dice.diceColour) << "\t" << dice.diceValue << "\t";
    return _os;
}
