#pragma once
#include <iostream>
#include "PlayerMoving.h"

class InputBox
{
private:
	PlayerMoving* pm = new PlayerMoving;

public:
	InputBox();
	~InputBox();

	void IntroSelection();
};

