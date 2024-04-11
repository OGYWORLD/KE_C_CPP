#include "PlayerMoving.h"

PlayerMoving::PlayerMoving()
{
}

PlayerMoving::~PlayerMoving()
{
	delete gt;
	delete p;
}

void PlayerMoving::IntroMoving()
{
	int PlayMode;

	gt->gotoXY(EPOSITION::INTRO_POSIRON_X, EPOSITION::INTRO_POSIRON_Y);
	
	std::cout << "¢º";
	while (1)
	{
		if (_kbhit())
		{
			int GetKey = _getch();

			switch (GetKey)
			{
			case EKEYNUM::KEY_DOWN:
			{
				break;
			}
			case EKEYNUM::KEY_ENTER:
			{

			}
			}
		}
	}
}
