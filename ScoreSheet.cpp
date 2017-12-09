#include "ScoreSheet.h"
 
using std::endl;

string Dice::colourStr(const Colour& colour) const {
	string dColor;

	switch (colour) {
	case Colour::BLUE:
		dColor = "Blue";
		break;
	case Colour::RED:
		dColor = "Red";
		break;
	case Colour::YELLOW:
		dColor = "Yellow";
		break;
	case Colour::GREEN:
		dColor = "Green";
		break;
	case Colour::WHITE:
		dColor = "White";
		break;
	}
	return dColor;
}

Dice::Dice(const int& value, const Colour& colour):
	d_value(value), d_colour(colour){}


int Dice::roll() {
	d_value = rand() % 6 + 1;
	return d_value;
}

istream& operator >>(istream& _is, Dice& _d) {
	_is >> _d.d_value;
	return _is;
}

ostream& operator<<(ostream& _os, const Dice& _d) {
	if (_d.d_value > 0) {
		_os << "You rolled " << _d.d_value << "times" << endl;
	}
	
	return _os;
}


void Dice::print(ostream& os) const {

	os << colourStr(d_colour) << ": ";

	/*os << "Red: |%%|xx|%%||||" << endl;
	os << "Yellow: ||||||xx|%%||" << endl;
	os << "Blue: ||%%|xx||||%%" << endl;*/
}

void ScoreSheet::print(ostream& os) const {
	os << "Player name: " << player_firstName << " " << player_lastName << "\t";
	if (score_overall > 0) {
		os << "Points: " << score_overall << endl;
	}
	os << endl;
	os << "       -----------------------" << endl;
	//print(os);
	os << "Failed Throws:" << endl;
}

void RollOfDice::roll(Dice& dice) {
	numberOfRolls.push_back(dice.roll);
}

RollOfDice RollOfDice::pair(Dice& d1, Dice& d2) {

}

ScoreSheet::ScoreSheet(const string& _firstName, const string& _lastName):
	player_firstName(_firstName), player_lastName(_lastName), score_overall(0){}

istream& operator >>(istream& _is, ScoreSheet& _s) {
	_is >> _s.player_firstName >> _s.player_lastName >> _s.score_overall;

	//check for failure
	if (!_is)_s = ScoreSheet();
	return _is;
}

ostream& operator<<(ostream& _os, const ScoreSheet& _s) {
	_os << _s.player_firstName << " " << _s.player_lastName << "\t";

	if (_s.score_overall != 0) {
		_os << "Points: " << _s.score_overall << endl;
	} 
	_os << endl;
	return _os;
}

void ScoreSheet::score(std::vector<Dice> dice, std::string colour, int position) {
	if (colour == "Red") {
		//dice.push_back(Dice::Colour::RED);
	}
}