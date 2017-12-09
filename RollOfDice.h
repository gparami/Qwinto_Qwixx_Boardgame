/**
    Qwinto_Qwixx_Boardgame
    RandomDice.h
    Purpose: A simple container structure that holds multiple dice as in a roll.

 */

#ifndef QWINTO_QWIXX_BOARDGAME_ROLLOFDICE_H
#define QWINTO_QWIXX_BOARDGAME_ROLLOFDICE_H

#include <vector>
#include <iostream>
#include "Dice.h"


using namespace std;

struct RollOfDice {

private:

    vector<Dice> diceSet;

public:

    /**
     * Constructs a RollOfDice object with multiple dices of user picked colours.
     * @param pickedColours vector of users choices of colours.
    */
    RollOfDice(vector<Dice::Colour> pickedColours);

    /**
     * Constructs a RollOfDice object with multiple existing dices.
     * @param existingDices vector of existing dices used to create a RollOfDice.
    */
    RollOfDice(vector<Dice> existingDices);

    /**
     * Provides an iterator to iterate through the RollOfDice object.
     * @return iterator to the start of the diceSet.
     */
    vector<Dice>::iterator begin();

    /**
     * Provides an iterator to iterate through the RollOfDice object.
     * @return iterator to the end of the diceSet.
     */
    vector<Dice>::iterator end();

    /**
     * Rolls the dices in the RollOfDice object.
     */
    void roll();

    /**
     * Returns a RollOfDice object with two user picked dices in it.
     * @param firstDiceIndex user picked dice one.
     * @param secondDiceIndex user picked dice two.
     * @return RollOfDice object with two dices in it.
     */
    RollOfDice pair(int firstDiceIndex, int secondDiceIndex);

    /**
     * A conversion operator to integer that simply adds up all the faces in the roll.
     * @return integer total of all the faces.
     */
    operator int();

    /**
        Overloaded insertion operator to print the RollOfDice to an output stream.

        @param _os the output stream
        @param diceRoll the dice object to be put into the output stream.
        @return an output stream containing a structured RollOfDice object.
    */
    friend ostream& operator<<( ostream & _os, const RollOfDice & diceRoll);

};

#endif //QWINTO_QWIXX_BOARDGAME_ROLLOFDICE_H
