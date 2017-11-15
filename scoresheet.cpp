#include "scoresheet.h"

//-------------------------------------
//RandomDice is a helper function w/ only static objects
//structure holds all objects needed to
// use one std::uniform_int_distribution FOR ALL dice ensuring
//that the pseudo random numbers do not start at the same value

//---------------------------------------
//Dice -> struct storing a const Colour &
// face as int between 1 and 6
// return the face rolled as int
// need to overload the insertion operator to print the
// Dice to an output stream

/* FOLLOWING CODE WAS GIVEN IN THE PRESENTATION DURING THE LAB
 struct Die {
    int number_of_sides;
    int *sides;
 };
 int createDie(int n, int *sidelist, struct Die *newdie) {
    newdie->number_of_sides = n;
    newdie->sides = malloc(n*sizeof(int));

    if (newdie->sides == NULL) {
        return 1; /*bad things*
    }
    for (int i = 0; i < n; i++) {
        newdie->sides[i] = sidelist[i];
    }
    return 0;
 }

 int RollDie(struct Die die) {
    return die.sides[rand()%die.number_of_sides];
 }

*/

//----------------------------------------
//RollOfDice -> container structure that holds multiple dice
// as in a roll
// The size of container should grow & shrink to # of Dice in
// a particular roll
//  - provides a function roll which calls roll on all Dice in
//    the container
//  - provides the function pair that returns a RollOfDice w/ 2 selected
//    Dice in it.
//  - should also have a conversion operator to integer

/* FOLLOWING CODE WAS GIVEN IN THE PRESENTATION DURING THE LAB
 *  #include "stdafx.h"
    #include <iostream>
    #include <string>
    #include <ctime>
    #include <time.h>
    using namespace std;
    class PairOfDice {
    private:
        int diceOne; int diceTwo;
        int score; int faceVaule;
    public:
        PairOfDice(){
            srand(time(NULL));
            roll();
        }

        void roll(){
        diceOne = (rand() % 6) + 1;
        diceTwo = (rand() % 6) + 1;
        setdiceOne(diceOne);
        setdiceTwo(diceTwo);
        }
        void setdiceOne(int value){
        faceVaule = value;
        }
        int getdiceOne(){
        return faceValue;
        }
        void setdiceTwo(int value){
        faceVaule = value;
        }
        int getdiceTwo(){
        return faceVaule;
        }

        void totalScore(){ score = diceOne + diceTwo; }
        void display()
        {
            cout << "The first Dice rolled a " << getdiceOne() << " ." <<
            endl;
            cout << "The second Dice rolled a " << getdiceTwo() << " ." <<
            endl;
            // adding both dices gives an:
            //No operator " < < " matches these operands
            cout << "Adding both dices up you rolled a total of: " <<
            totalScore() << "." << endl;
        }
};
 * */




