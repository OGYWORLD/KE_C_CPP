#include "Unit.h"

Unit::Unit()
{
	name = "�׶� ����";
	hp = 100;
	mp = 50;
	atk = 800;
	die = false;

	cout << "�� �̸��� : " << name << endl;
	cout << "ü��: " << hp << endl;
	cout << "����: " << mp << endl;
	cout << "���ݷ�: " << atk << endl;
	cout << "���� ���� �ʴ´�! " << die << endl;
}

Unit::~Unit()
{
	// Do Nothing
}

void Unit::attack(char* myName, char* enemyName)
{
	cout << myName << "�� " << enemyName << "�� �����Ѵ�." << endl;
}

void Unit::attack(int atk, int enemyHP)
{
	cout << atk << "�� �������� ���� ü�� " << enemyHP << "�� ���� ���״�." << endl;
}

void Unit::attack(bool enemyDie)
{
	cout << boolalpha;
	cout << "�� ���� ����: " << enemyDie << endl;
}

void Unit::attak()
{
	cout << "���� �����Ѵ�." << endl;
}