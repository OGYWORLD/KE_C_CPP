#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <assert.h> // 런타임 타임에서 오류를 잡아냄
#include <cassert> // 컴파일 타임에서 오류를 잡아냄

using namespace std;

#pragma region 접근자+설정자 + 예외처리
/*
// 노션정리
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
	// 캡슐 함수(getter, setter)
	// ㄴ일반 함수들은 cpp에서 기능을 구현하는 것이 원칙이지만
	// getter, setter함수는 헤더 파일에서 구현을 원칙으로 함
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

