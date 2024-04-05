// Main
#include "Example_07.h"
#include "MainGame.h"
#include "MainGame02.h"

void main()
{
	// 1. 정적할당
	MainGame mg;
	mg.outPut();

	// 2. 동적할당
	MainGame* mainG = new MainGame;
	
	mainG->showPostion(); // 쓰레기값 출력

	mainG->setPosition(100, 100);
	mainG->showPostion(); // 100 100

	mainG->movePostion();
	mainG->movePostion();
	mainG->movePostion();
	
	mainG->showPostion(); // 400 400

	delete mainG;

	MainGame02 mg2;

}