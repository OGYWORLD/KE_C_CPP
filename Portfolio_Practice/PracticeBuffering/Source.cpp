#include <Windows.h>
#include <conio.h>
#include <iostream>

#define TEXT_POSITION_X		3
#define TEXT_POSITION_Y		20

#define BOTTOM_BOX_POSITION_X	0
#define BOTTOM_BOX_POSITION_Y	16

#define C1_POSITION_X	27
#define C1_POSITION_Y	7

#define VIEWPORT_POSITION_X
#define VIEWPORT_POSITION_Y

#define SPRITE_SIZE_X	9
#define SPRITE_SIZE_Y	9

void gotoXY(int x, int y);

void AttackTextPrint(const char* Name, const char* AttackName);
void BottomBox();

void ViewPortPrint();

void CreateCharacter();
void ConvertDot(int CharacterAr[SPRITE_SIZE_X][SPRITE_SIZE_X], int OriginX, int OriginY);


int main(void)
{
	const char* name = "È«±æµ¿";
	const char* attack = "µ· ÈÉÄ¡±â";

	CreateCharacter();
	BottomBox();
	AttackTextPrint(name, attack);

	_getch();

	while (1)
	{
		if (_kbhit)
		{
			break;
		}
	}

	return 0;
}

void gotoXY(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void AttackTextPrint(const char* Name, const char* AttackName)
{
	gotoXY(TEXT_POSITION_X, TEXT_POSITION_Y);
	printf("%sÀÇ %s °ø°Ý~!", Name, AttackName);
}

void BottomBox()
{
	gotoXY(BOTTOM_BOX_POSITION_X, BOTTOM_BOX_POSITION_Y);
	std::cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n";
	std::cout << "¦¢                                                                                               ¦¢\n";
	std::cout << "¦¢                                                                                               ¦¢\n";
	std::cout << "¦¢                                                                                               ¦¢\n";
	std::cout << "¦¢                                                                                               ¦¢\n";
	std::cout << "¦¢                                                                                               ¦¢\n";
	std::cout << "¦¢                                                                                               ¦¢\n";
	std::cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n";
}

void ViewPortPrint()
{
	gotoXY(BOTTOM_BOX_POSITION_X, BOTTOM_BOX_POSITION_Y);
}

void CreateCharacter()
{
	int PlayerCharacter[SPRITE_SIZE_X][SPRITE_SIZE_Y]=
	{ {0, 0, 0, 1, 0, 0, 0},
		{0, 0, 1, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 1, 0},
		{0, 0, 1, 0, 1, 0, 0},
		{0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0},
		{0, 1, 1, 1, 1, 1, 0},
		{1, 0, 1, 1, 1, 0, 1},
		{0, 0, 1, 1, 1, 0, 0}
	};

	ConvertDot(PlayerCharacter, C1_POSITION_X, C1_POSITION_Y);
}

void ConvertDot(int CharacterAr[SPRITE_SIZE_X][SPRITE_SIZE_X], int OriginX, int OriginY)
{
	int X = OriginX;
	int Y = OriginY;
	for (int i = 0; i < SPRITE_SIZE_X; i++)
	{
		for (int j = 0; j < SPRITE_SIZE_Y; j++)
		{
			if (CharacterAr[i][j] == 1)
			{
				gotoXY(X+j, Y+i);
				std::cout << "¡á";
			}
			else
			{
				gotoXY(X + j, Y+i);
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}
}

