#pragma once
#include <iostream>

using namespace std;

#pragma region ���
/*
// �������
*/
#pragma endregion

class Unit
{
protected:
	const char* name;
	int hp;
	int mp;
	int atk;
	bool die;

public:
	void attack(char* myName, char* enemyName);
	void attack(int atk, int enemyHP);
	void attack(bool enemyDie);
	
	// C++ Ŭ������ Ư�� �� �������� �����ϱ� ���� Ű����
	virtual void attak();


	Unit();
	~Unit();
};

