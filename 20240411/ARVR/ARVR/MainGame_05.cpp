
#include "MainGame_05.h"

MainGame_05::MainGame_05()
{
	_gun = new gun;
	_bow = new bow;

	cout << "���� ����" << endl;
	_myWeapon = _gun;
	_myWeapon->attack(); // �θ� Ŭ������ attack()�� ���� ���
	// virtual Ű���带 ���̸� ���������� ȣ�Ⱑ���ϴ�.

	_myWeapon = _bow;
	_myWeapon->attack(); // �θ� Ŭ������ attack()�� ���� ���
	// virtual Ű���带 ���̸� ���������� ȣ�Ⱑ���ϴ�.
}

MainGame_05::~MainGame_05()
{
}
