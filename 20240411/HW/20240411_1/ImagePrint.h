#pragma once
#include <iostream>
#include "InputBox.h"

class ImagePrint
{
private:
	InputBox* box = new InputBox;

public:
	ImagePrint();
	~ImagePrint();

	void IntroPrint();
};

