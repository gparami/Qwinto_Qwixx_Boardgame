//
// Created by luxmy on 2017-11-14.
//
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


//----------------------------------------
//RollOfDice -> container structure that holds multiple dice
// as in a roll
// The size of container should grow & shrink to # of Dice in
// a particular roll

// RollOfDice rd;
// for( Dice d : rd )

//  - provides a function roll which calls roll on all Dice in
//    the container
//  - provides the function pair that returns a RollOfDice w/ 2 selected
//    Dice in it.
//  - should also have a conversion operator to integer

void RollOfDice::roll()// calls roll on all Dice in the container
{
    for( Dice d : rd)
    {
        d.value = (rand() % 6) + 1;
    }

}
RollOfDice RollOfDice::pair(const Dice& dice1, const Dice& dice2)
{
    diceOne = (rand() % 6) + 1;
    diceTwo = (rand() % 6) + 1;

}
