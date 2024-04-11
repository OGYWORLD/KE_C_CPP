#pragma once
#include "Unit.h"
#include "Tank.h"
#include "BattleCruiser.h"

class MainGame_04
{
private:
	Unit* _terran;
	Tank* _singleTank;
	BattleCruiser* _BattleCruiser;

public:
	MainGame_04();
	~MainGame_04();
};

