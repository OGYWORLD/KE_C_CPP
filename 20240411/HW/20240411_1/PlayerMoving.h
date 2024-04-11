#pragma once
#include "GoToXY.h"
#include "EKeyNum.h"
#include "Player.h"

class PlayerMoving
{
private:
	GoToXY* gt = new GoToXY;
	Player* p = new Player;

public:
	PlayerMoving();
	~PlayerMoving();

	void IntroMoving();
};

