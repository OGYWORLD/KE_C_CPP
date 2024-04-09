#include "MainGame.h"

// 당분간 초기화는 생성자에서 진행한다.
MainGame::MainGame() // 멤버 이니셜라이져
{
	_Number = 500; //스코프 초기화
	
	cout << "당분간 여기에 코딩을 하도록 " << endl;

	
}

// 소멸자
MainGame::~MainGame()
{
	//! Do Nothing
}


void MainGame::outPut()
{
	cout << _Number << endl;
}

void MainGame::showPostion(void)
{
	cout << "x: " << _x << ", y: " << _y << endl;
}

void MainGame::movePostion(void)
{
	_x += 100;
	_y += 100;
}

void MainGame::setPosition(int x, int y)
{
	// 클래스는 캡슐화의 특성을 가지고 있음
	// 변수는 privat, 함수는 public -> 다른 클래스에서도 접근할수도 있음!
	_x += x;
	_y += y;

	this->_x = x;
	this->_y = y;
}
