#pragma once
#include <iostream>

using namespace std;

//13. �����Լ� + ��ȯ ������/������

#pragma region �����Լ�
/*
// �������
*/
#pragma endregion

#pragma region ��ü����
/*
// �������
*/
#pragma endregion

#pragma region ���� �����Լ� + �߻� Ŭ���� + �������̽�
/*
// �������
*/
#pragma endregion


// �θ�
class weapon
{
public:
	virtual void attack() { cout << "����� �����Ѵ�." << endl; }
};

class gun : public weapon
{
public:
	void attack() { cout << "������ ����" << endl; }
};

class bow : public weapon
{
public:
	void attack() { cout << "Ȱ�� ����" << endl; }
};

class MainGame_05
{
private:
	// Ŭ���� ĳ����
	weapon* _gun;
	weapon* _bow;
	weapon* _myWeapon;



public:
	MainGame_05();
	~MainGame_05();
};

