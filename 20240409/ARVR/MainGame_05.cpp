
#include "MainGame_05.h"

MainGame_05::MainGame_05()
{
	_gun = new gun;
	_bow = new bow;

	cout << "무기 장착" << endl;
	_myWeapon = _gun;
	_myWeapon->attack(); // 부모 클래스의 attack()도 같이 출력
	// virtual 키워드를 붙이면 선택적으로 호출가능하다.

	_myWeapon = _bow;
	_myWeapon->attack(); // 부모 클래스의 attack()도 같이 출력
	// virtual 키워드를 붙이면 선택적으로 호출가능하다.
}

MainGame_05::~MainGame_05()
{
}
