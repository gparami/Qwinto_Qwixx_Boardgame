//
// Created by Parami Gunasekara on 2017-12-02.
//

#include "RollOfDice.h"

RollOfDice::RollOfDice(std::vector<Colour> pickedColours) {
    for (Colour diceColour: pickedColours) {
        diceSet.emplace_back(diceColour);
    }
}

RollOfDice::RollOfDice(vector<Dice> existingDices) {
    for (Dice currentDice: existingDices) {
        diceSet.push_back(currentDice);
    }
}

void RollOfDice::roll() {
    for (Dice & currentDice: diceSet) {
        currentDice.roll();
    }
}

std::vector<Dice>::iterator RollOfDice::begin() {
    return diceSet.begin();
}

std::vector<Dice>::iterator RollOfDice::end() {
    return diceSet.end();
}

RollOfDice RollOfDice::pair(int firstDiceIndex, int secondDiceIndex) {
    vector<Dice> newDiceSet;
    newDiceSet.push_back(diceSet[firstDiceIndex]);
    newDiceSet.push_back(diceSet[secondDiceIndex]);
    return RollOfDice(newDiceSet);
}

RollOfDice::operator int() {
    int faceTotal = 0;
    for (Dice currentDice: diceSet) {
        faceTotal += currentDice.getDiceValue();
    }
    return faceTotal;
}

ostream &operator<<(ostream &_os, const RollOfDice &diceRoll) {
    for (const Dice & currentDice: diceRoll.diceSet) {
        _os << currentDice;
    }
    return _os;
}