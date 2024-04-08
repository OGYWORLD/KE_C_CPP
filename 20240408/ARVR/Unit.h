#pragma once
#include <iostream>

using namespace std;

#pragma region 상속
/*
// 노션정리
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
	
	// C++ 클래스의 특성 중 다형성을 지원하기 위한 키워드
	virtual void attak();


	Unit();
	~Unit();
};

