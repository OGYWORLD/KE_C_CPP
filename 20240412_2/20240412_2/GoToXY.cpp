#include "GoToXY.h"

GoToXY::GoToXY()
{
}

GoToXY::~GoToXY()
{
}

void GoToXY::GoToXYPostion(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
