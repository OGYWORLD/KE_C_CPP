#include "FightingGame.h"

int main()
{
	system("mode con cols=150 lines = 40 | title Fight!");
	FightingGame* game = new FightingGame;
	game->PlayGame();


	delete game;

	return 0;
}