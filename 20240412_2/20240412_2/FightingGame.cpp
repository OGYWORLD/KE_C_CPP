#include "FightingGame.h"

FightingGame::FightingGame()
{
}

FightingGame::~FightingGame()
{
	delete print;
}

void FightingGame::PlayGame()
{
	print->IntroImagePrint();
}

