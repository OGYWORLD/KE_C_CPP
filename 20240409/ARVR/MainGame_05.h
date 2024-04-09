#pragma once
#include <iostream>

using namespace std;

//13. 가상함수 + 변환 생성자/연산자

#pragma region 가상함수
/*
// 노션정리
*/
#pragma endregion

#pragma region 객체지향
/*
// 노션정리
*/
#pragma endregion

#pragma region 순수 가상함수 + 추상 클래스 + 인터페이스
/*
// 노션정리
*/
#pragma endregion


// 부모
class weapon
{
public:
	virtual void attack() { cout << "무기로 공격한다." << endl; }
};

class gun : public weapon
{
public:
	void attack() { cout << "총으로 공격" << endl; }
};

class bow : public weapon
{
public:
	void attack() { cout << "활로 공격" << endl; }
};

class MainGame_05
{
private:
	// 클래스 캐스팅
	weapon* _gun;
	weapon* _bow;
	weapon* _myWeapon;



public:
	MainGame_05();
	~MainGame_05();
};

