#ifndef SCORESHEET_H_
#define SCORESHEET_H_

#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <vector>

using std::string;
using std::ostream;
using std::istream;

static const int g_height = 3;
static const int g_width = 14;

//istream& operator>>(istream&, ScoreSheet&);
//ostream& operator<<(ostream&, const ScoreSheet&);

struct Dice {
	enum class Colour {
		RED, YELLOW, GREEN, BLUE, WHITE
	};

private:
	//int d_faces;
	int d_value;
	Colour d_colour;

public:
	
	Dice(const int& value, const Colour& colour);
	int roll();
	void print(std::ostream& os) const;

	friend istream& operator>>(istream&, Dice&);
	friend ostream &operator<< (ostream &os, const Dice&);
	string colourStr(const Colour& colour) const;
	
};

struct RollOfDice {
	void roll(Dice&);
	//RollofDice pair(Dice&, Dice&);

};


/*The Class ScoreSheet should hold:
- the scores for 3 colours
- the name of the player
- the number of failed attempts
- the overall score*/
class ScoreSheet {
	int score_3colours[g_height][g_width];
	int score_overall; 
	int num_failed[g_width];
	string player_firstName;
	string player_lastName;
public:
	void print(ostream& os) const;
	ScoreSheet(const string& _firstName = "", const string& _lastName = "");
	void score(std::vector<Dice> dice, std::string colour, int position);
	
	friend istream& operator>>(istream&, ScoreSheet&);
	friend ostream& operator<<(ostream&, const ScoreSheet&);
};
#endif // !SCORESHEET_H_



