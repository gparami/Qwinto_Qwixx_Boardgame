#ifndef TEST_SCORESHEET

#include "ScoreSheet.h"

using std::cout;
using std::endl;





int main() {
	//std::random_device rd;
	//std::mt19937 gen(rd());
	//std::uniform_int_distribution<int> dis(1, 6);

	cout << "Select the game version you wish to play" << endl;

	ScoreSheet* score = new ScoreSheet();
	
	//score->print(cout);
	std::cin >> *score;
	cout << score;

	return 0;
}
#endif // !TEST_SCORESHEET
