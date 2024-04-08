#include "Player_03.h"

Player_03::Player_03()
{

}

Player_03::~Player_03()
{

}

bool Player_03::isPlayerDead(int hp)
{
	if (hp < 0)
	{
		this->_hp = 0;
		return true;
	}
	else
	{
		return false;
	}
}
