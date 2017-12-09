//
// Created by Parami Gunasekara on 2017-12-07.
//

#ifndef QWINTO_QWIXX_BOARDGAME_QWINTOROW_H
#define QWINTO_QWIXX_BOARDGAME_QWINTOROW_H

#include "Dice.h"

template <const Dice::Colour C>
class QwintoRow {

public:

    /**
     * Constructor to create a QuintoRow with specific colour
     */
//    QwintoRow();

    /**
     * Overloaded subscript operator[] to add an integer score at a certain index
     */
    int &operator[](const int index);

    /**
     * Performs an error checking for adding a RollofDice to the row at a certain index.
     * @param valueOne first value to be added.
     * @param valueTwo second value to be added.
     * @return true if an addition is valid.
     */
    bool validate(int valueOne, int valueTwo);

    /**
        Overloaded insertion operator to print a QwintoRow to an output stream.
        @param _os the output stream
        @param diceRoll the dice object to be put into the output stream.
        @return an output stream containing a structured RollOfDice object.
    */
    friend ostream& operator<<( ostream & _os, const QwintoRow & currentQwintoRow);

private:
    int row[8];

};


#endif //QWINTO_QWIXX_BOARDGAME_QWINTOROW_H
