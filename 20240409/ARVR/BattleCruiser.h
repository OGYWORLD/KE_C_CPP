#pragma once
#include "Unit.h"

// Ŭ���� ���� ���� 
//class Tank; Tank Ŭ������ ���� ���θ� �ʿ��� ��
// �������·� �˷��ش�.

// ���� ���
class BattleCruiser : public Unit
{
private:
	const char* name;
	int hp;
	int mp;
	int atk;
	bool die;

public:
	virtual void attack();

	BattleCruiser();
	~BattleCruiser();

};

