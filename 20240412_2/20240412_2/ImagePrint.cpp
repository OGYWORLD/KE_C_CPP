#include "ImagePrint.h"


ImagePrint::ImagePrint()
{
}

ImagePrint::~ImagePrint()
{
	delete to;
}

void ImagePrint::IntroImagePrint()
{
	IntroTitle();
	DropBlood1();
}


void ImagePrint::ConvertDotSmall(int VSize, int HSize, int Ar[][SMALL_SPRITE], int OriginX, int OriginY, int ColorNum)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);

	for (int i = 0; i < VSize; i++)
	{
		for (int j = 0; j < HSize; j++)
		{
			if (Ar[i][j] == 1)
			{
				to->GoToXYPostion(OriginX + j, OriginY + i);
				printf("бс");
			}
			else
			{
				to->GoToXYPostion(OriginX + j, OriginY + i);
				printf("  ");
			}
		}
		std::cout << "\n";
	}
}

void ImagePrint::DropBlood1()
{
	int DropBlood1[SMALL_SPRITE][SMALL_SPRITE] =
	{ {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
	{0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0},
	{0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0},
	{0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0},
	{0, }, {0, }, {0, }, {0, }, {0, }, {0, } 
	};

	ConvertDotSmall(10, SMALL_SPRITE, DropBlood1, DROP_BLOOD_1_X, DROP_BLOOD_1_Y, 12);
}

void ImagePrint::IntroTitle()
{
	to->GoToXYPostion(TITLE_POSITION_X, TITLE_POSITION_Y);
	printf(" _____ _       _     _   _ \n");
	to->GoToXYPostion(TITLE_POSITION_X, TITLE_POSITION_Y + 1);
	printf("|  ___(_) __ _| |__ | |_| |\n");
	to->GoToXYPostion(TITLE_POSITION_X, TITLE_POSITION_Y + 2);
	printf("| |_  | |/ _` | '_ \\| __| |\n");
	to->GoToXYPostion(TITLE_POSITION_X, TITLE_POSITION_Y + 3);
	printf("|  _| | | (_| | | | | |_|_|\n");
	to->GoToXYPostion(TITLE_POSITION_X, TITLE_POSITION_Y + 4);
	printf("|_|   |_|\\__, |_| |_|\\__(_)\n");
	to->GoToXYPostion(TITLE_POSITION_X, TITLE_POSITION_Y + 5);
	printf("         |___/             \n");
}
