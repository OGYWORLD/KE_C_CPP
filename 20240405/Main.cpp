// Main
#include "Example_07.h"
#include "MainGame.h"
#include "MainGame02.h"

void main()
{
	// 1. �����Ҵ�
	MainGame mg;
	mg.outPut();

	// 2. �����Ҵ�
	MainGame* mainG = new MainGame;
	
	mainG->showPostion(); // �����Ⱚ ���

	mainG->setPosition(100, 100);
	mainG->showPostion(); // 100 100

	mainG->movePostion();
	mainG->movePostion();
	mainG->movePostion();
	
	mainG->showPostion(); // 400 400

	delete mainG;

	MainGame02 mg2;

}