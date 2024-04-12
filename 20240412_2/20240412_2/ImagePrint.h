#pragma once
#include "PositonNum.h"
#include "GoToXY.h"
#include <iostream>

class ImagePrint
{
private:
	GoToXY* to = new GoToXY;

public:
	ImagePrint();
	~ImagePrint();

	void ConvertDotSmall(int VSize, int HSize, int Ar[][SMALL_SPRITE], int OriginX, int OriginY, int ColorNum);

	//Intro Image
	void IntroImagePrint();
	void DropBlood1();

	void IntroTitle();
};

