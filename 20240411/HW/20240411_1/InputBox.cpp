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
	std::cout << "\t\t\t\t  ������������������������������������������\n";
	std::cout << "\t\t\t\t  ��     5x4 Play      ��\n";
	std::cout << "\t\t\t\t  ��                   ��\n";
	std::cout << "\t\t\t\t  ��     Free Play     ��\n";
	std::cout << "\t\t\t\t  ������������������������������������������\n";

	pm->IntroMoving();
}
