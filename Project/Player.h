#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "ScoreSheet.h"

class Player{
public:
	bool isActive();
	virtual void inputBeforeRoll(RollOfDice&) = 0;
	virtual void inputAfterRoll(RollOfDice&) = 0;
};
#endif // !_PLAYER_H_



