//
// Created by Parami Gunasekara on 2017-12-07.
//

#include <iostream>
#include <vector>
#include "Aesthetics.cpp"
#include "Colour.h"
#include "RandomDice.h"
#include "Dice.h"
#include "RollOfDice.h"
#include "QwintoRow.h"

using namespace std;

int main() {

    Aesthetics::printIntro();

    cout << "Testing Stuff" << endl;
    //Testing Dice
    Colour RED = Colour::RED;
    Colour YELLOW = Colour::YELLOW;
    Colour GREEN = Colour::GREEN;
    Colour BLUE = Colour::BLUE;
    Colour WHITE = Colour::WHITE;

    Dice rD(RED);
    Dice yD(YELLOW);
    Dice gD(GREEN);

    cout << rD;
    rD.roll();
    cout << "Rolled Red Dice: " << rD << endl;
    cout << rD;
    cout << yD;
    cout << gD << endl;


    //Testing RollOfDice
    vector<Dice> diceSet;
    diceSet.push_back(rD);
    diceSet.push_back(yD);
    diceSet.push_back(gD);

    vector<Colour> qwintoSet;
    qwintoSet.push_back(WHITE);
    qwintoSet.push_back(BLUE);

    RollOfDice setOne(diceSet);
    RollOfDice setTwo(qwintoSet);

    cout << "Set One: " << "\n" << setOne << endl;
    setOne.roll();
    cout << "Set One Rolled: \n" << setOne << endl;
    int total = setOne;
    cout << "Total of the Dice set: " << total << endl;

    cout << "QwintoSet: \n" << setTwo << endl;
    setTwo.roll();
    cout << "QwintoSet: \n" << setTwo << endl;

    //Testing QwintoRow
    QwintoRow<Colour::RED> rQwintoRow;
    QwintoRow<Colour::YELLOW> yQwintoRow;

    if (rQwintoRow.validate(1,setOne)) {
        rQwintoRow[1] = setOne;
    }

    if (yQwintoRow.validate(4,setTwo)) {
        yQwintoRow[4] = setTwo;
    }

    cout << rQwintoRow << endl;
    cout << yQwintoRow << endl;








    return 0;
}