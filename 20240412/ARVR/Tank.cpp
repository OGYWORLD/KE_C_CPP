#include "Tank.h"

Tank::Tank()
{
	name = "������ũ";
	hp = 100;
	mp = 0;
	atk = 1000;
	die = false;

	cout << "�� �̸��� : " << name << endl;
	cout << "ü��: " << hp << endl;
	cout << "����: " << mp << endl;
	cout << "���ݷ�: " << atk << endl;
	cout << boolalpha;
	cout << "���� ���� �ʴ´�! " << die << endl;

	attack();
}

void Tank::attack()
{
}

Tank::~Tank()
{
}