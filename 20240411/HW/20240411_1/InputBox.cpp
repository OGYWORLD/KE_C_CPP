#include "InputBox.h"

InputBox::InputBox()
{
}

InputBox::~InputBox()
{
	delete pm;
}

void InputBox::IntroSelection()
{
	std::cout << "\t\t\t\t  忙式式式式式式式式式式式式式式式式式式式忖\n";
	std::cout << "\t\t\t\t  弛     5x4 Play      弛\n";
	std::cout << "\t\t\t\t  弛                   弛\n";
	std::cout << "\t\t\t\t  弛     Free Play     弛\n";
	std::cout << "\t\t\t\t  戌式式式式式式式式式式式式式式式式式式式戎\n";

	pm->IntroMoving();
}
