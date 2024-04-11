#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <assert.h> // ��Ÿ�� Ÿ�ӿ��� ������ ��Ƴ�
#include <cassert> // ������ Ÿ�ӿ��� ������ ��Ƴ�

using namespace std;

#pragma region ������+������ + ����ó��
/*
// �������
*/
#pragma endregion

class Player_03
{
private:
	int _hp;
	int _mp;
	int def;
	int att;
	float _speed;

public:
	// ĸ�� �Լ�(getter, setter)
	// ���Ϲ� �Լ����� cpp���� ����� �����ϴ� ���� ��Ģ������
	// getter, setter�Լ��� ��� ���Ͽ��� ������ ��Ģ���� ��
	int getHP() { return _hp; }
	void setHP(int hp) {_hp = hp; }

	int getMP() { return _mp; }
	void setMP(int mp) { _mp = mp; }

	float getSpeed() { return _speed; }
	void setSpeed(float speed) { _speed = speed; }

	bool isPlayerDead(int hp);


	Player_03() {}
	~Player_03() {}
};

