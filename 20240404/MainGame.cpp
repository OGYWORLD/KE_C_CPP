#include "MainGame.h"

// ��а� �ʱ�ȭ�� �����ڿ��� �����Ѵ�.
MainGame::MainGame() // ��� �̴ϼȶ�����
{
	_Number = 500; //������ �ʱ�ȭ
	
	cout << "��а� ���⿡ �ڵ��� �ϵ��� " << endl;

	
}

// �Ҹ���
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
	// Ŭ������ ĸ��ȭ�� Ư���� ������ ����
	// ������ privat, �Լ��� public -> �ٸ� Ŭ���������� �����Ҽ��� ����!
	_x += x;
	_y += y;

	this->_x = x;
	this->_y = y;
}
