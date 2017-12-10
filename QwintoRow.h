//
// Created by Parami Gunasekara on 2017-12-07.
//

#ifndef QWINTO_QWIXX_BOARDGAME_QWINTOROW_H
#define QWINTO_QWIXX_BOARDGAME_QWINTOROW_H

#include "Dice.h"
#include "Colour.h"

template <Colour C>
class QwintoRow {

public:

    /**
     * Constructor to create a QuintoRow with specific colour
     */
    QwintoRow();

    /**
     * Overloaded subscript operator[] to add an integer score at a certain index
     */
    int& operator[] ( int index);

    /**
     * Performs an error checking for adding a RollofDice to the row at a certain index.
     * @param valueOne first value to be added.
     * @param valueTwo second value to be added.
     * @return true if an addition is valid.
     */
    bool validate(int index, int value);

    /**
        Overloaded insertion operator to print a QwintoRow to an output stream.
        @param _os the output stream
        @param diceRoll the dice object to be put into the output stream.
        @return an output stream containing a structured RollOfDice object.
    */
    friend ostream& operator<<( ostream & _os, const QwintoRow & currentQwintoRow) {

        string values[8];

        for (int i = 0; i < 9; i++) {
            if (currentQwintoRow.row[i] < 10) {
                values[i] = " " + to_string(currentQwintoRow.row[i]);
            } else if (currentQwintoRow.row[i] > 9) {
                values[i] = to_string(currentQwintoRow.row[i]);
            }
        }

        if (currentQwintoRow.rowColour == Colour::RED) {

            _os << "\t\t\t\t|" << values[0] << "%";
            _os << values[1] << "%";
            _os << values[2] << "|XX|";
            _os << values[3] << "%";
            _os << values[4] << "%";
            _os << values[5] << "|";
            _os << values[6] << "|";
            _os << values[7] << "|";
            _os << values[8] << "|";
        }

        if (currentQwintoRow.rowColour == Colour::YELLOW) {

            _os << "\t\t\t\t|" << values[0] << "|";
            _os << values[1] << "|";
            _os << values[2] << "|";
            _os << values[3] << "|";
            _os << values[4] << "|XX|";
            _os << values[5] << "%";
            _os << values[6] << "%";
            _os << values[7] << "|";
            _os << values[8] << "|";
        }

        if (currentQwintoRow.rowColour == Colour::BLUE) {

            _os << "\t\t\t\t|" << values[0] << "|";
            _os << values[1] << "%";
            _os << values[2] << "%";
            _os << values[3] << "|XX|";
            _os << values[4] << "|";
            _os << values[5] << "|";
            _os << values[6] << "|";
            _os << values[7] << "%";
            _os << values[8] << "%";
        }

        return _os;
    }

private:

    int row[9];
    Colour rowColour;

};

#include "QwintoRow.tpp"
#endif //QWINTO_QWIXX_BOARDGAME_QWINTOROW_H
