#pragma once
#include "ImagePrint.h"


class NumberSlideHandler
{
private:
	ImagePrint* IP = new ImagePrint;


public:
	NumberSlideHandler();
	~NumberSlideHandler();

	void PlayGame();
};

