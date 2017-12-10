//
// Created by Parami Gunasekara on 2017-12-07.
//

#include "QwintoRow.h"
#include <string>

using namespace std;

template<Colour C>
QwintoRow<C>::QwintoRow() {
    for (int & currentValue: row) {
        currentValue = 0;
        rowColour = C;
    }
}

template<Colour C>
int &QwintoRow<C>::operator[](int index) {
//    if (index >= 0 && index < 9) {
        return row[index];
//    }
}

template<Colour C>
bool QwintoRow<C>::validate(int index, int value) {

    int indexToLeft = -1;
    int indexToRight = -1;
    int valueToLeft = -1;
    int valueToRight = -1;

    for (int i = index; i >= 0; i--) {
        if (row[i] != 0) {
            indexToLeft = i;
            valueToLeft = row[i];
            break;
        }
    }

    for (int i = index; i < 9; i++) {
        if (row[i] != 0) {
            indexToRight = i;
            valueToRight = row[i];
        }
    }

    //Avoiding out of range index
    if (index < 0 && index > 8) { return false; }

    //Avoiding over writing
    if (row[index] != 0) {return false;}

    //Accepting corners
    if (indexToLeft == -1 && index >= 0 ){
        return true;
    } else if (indexToRight == -1 && index < 9) {
        return true;
    }

    //Accepting in between values
    if (indexToLeft != -1 && indexToRight != -1) {

        if (index > indexToLeft && index < indexToRight) {

            if (value > valueToLeft && value < valueToRight) {
                return true;

            }
        }

    }

    return false;
}

//ostream &operator<<(ostream &_os, const QwintoRow &currentQwintoRow) {
//
//    string values[8];
//
//    for (int i = 0; i < 9; i++) {
//        if (currentQwintoRow.row[i] < 10) {
//            values[i] = " " + to_string(currentQwintoRow.row[i]);
//        } else if (currentQwintoRow.row[i] > 9) {
//            values [i] = to_string(currentQwintoRow.row[i]);
//        }
//    }
//
//    if (currentQwintoRow.rowColour == Colour::RED) {
//
//        _os << "\t\t\t\t|" <<values[0] << "%";
//        _os << values[1] << "%";
//        _os << values[2] << "|XX|";
//        _os << values[3] << "%";
//        _os << values[4] << "%";
//        _os << values[5] << "|";
//        _os << values[6] << "|";
//        _os << values[7] << "|";
//        _os << values[8] << "|";
//    }
//
//    if (currentQwintoRow.rowColour == Colour::YELLOW) {
//
//        _os << "\t\t\t\t|" <<values[0] << "|";
//        _os << values[1] << "|";
//        _os << values[2] << "|";
//        _os << values[3] << "|";
//        _os << values[4] << "|XX|";
//        _os << values[5] << "%";
//        _os << values[6] << "%";
//        _os << values[7] << "|";
//        _os << values[8] << "|";
//    }
//
//    if (currentQwintoRow.rowColour == Colour::BLUE) {
//
//        _os << "\t\t\t\t|" <<values[0] << "|";
//        _os << values[1] << "%";
//        _os << values[2] << "%";
//        _os << values[3] << "|XX|";
//        _os << values[4] << "|";
//        _os << values[5] << "|";
//        _os << values[6] << "|";
//        _os << values[7] << "%";
//        _os << values[8] << "%";
//    }
//
//    return _os;
//}


