#pragma once
#include "Unit.h"

// 클래스 전방 선언 
//class Tank; Tank 클래스의 존재 여부만 필요할 때
// 참조형태로 알려준다.

// 다중 상속
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

