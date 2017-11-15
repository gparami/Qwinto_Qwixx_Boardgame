#ifndef SCORE_H
#define SCORE_H

#include <iostream>
#include <string>
#include <vector>

using std::string; using std::ostream; using std::vector; 

static const int g_height = 3;
static const int g_width = 14; // ? 12

class ScoreSheet {
	
	//The class ScoreSheet should hold the scores for the 3 colours, the name of
	// the player, the number of failed attempts and the overall score.
	//int[] score_red, score_yellow, score_blue;
	int score_3colours[g_height][g_width];
	int score_overall;
	int[] num_failed;
	string name_player;
	
	//Give the class ScoreSheet a print function that accepts an std::ostream and
	// inserts the score sheet formatted as in the above example into the stream.
public:
	void print(const ostream& os) const;
	enum class Colour { RED, YELLOW, GREEN, BLUE, WHITE };

	struct Dice { // no private 
		int value; // from 1 to 6
		Colour colour;
		void print(ostream& os) const;
	};
	//constructor that accepts name of player as std::string
	ScoreSheet(const std::string& _firstName = "", const string& _lastName = "");
	//function score accepts a vector of structure Dice and the user selected 

	//colour and position counted from the left

    ~ScoreSheet();
};

class RollOfDice{
    std::vector <Dice> d_die;
public:
    RollOfDice rd;
    void roll();// calls roll on all Dice in the container
    RollOfDice pair(const Dice& die); //returns a RollOfDice w/ 2 selected Dice in it.
    // should also have a conversion operator to integer
};


#endif
