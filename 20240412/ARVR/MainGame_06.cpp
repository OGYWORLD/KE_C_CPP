#include "MainGame_06.h"

#include <vector>
#include <iostream>

MainGame_06::MainGame_06()
{
	/*

	*/

	int num[2];
	num[0] = 1;
	num[1] = 2;

	std::cout << num[0] << endl;
	std::cout << num[1] << endl;

	LinePrint();

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	for (int i = 0; i < _vNumber.size(); i++)
	{
		_vNumber.push_back(i + 1);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1);

	_vNumber.pop_back();

	_vNumber.clear();

	_vNumber.insert(_vNumber.begin() + 5, 100);


	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);

	// ���������ϴ� ���
	for (int i = 0; i < _vNumber.size(); i++) 
	{
		cout << _vNumber[i] << endl;
	}

	// ���� �����ϴ� ���
	for (_viNumber = _vNumber.begin(); _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl;
	}

	LinePrint();

	printVector();
}

MainGame_06::~MainGame_06()
{
}

void MainGame_06::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();


	// 1�� push_back
	std::cout << "Ǫ�ù� " << endl;
	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 2. insert
	// ������ �Ǹ� �ε����� �и���.
	cout << "���� " << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 3. pop_back
	cout << "�˹� " << endl;

	_vNumber.pop_back();

	// ���� iterator�� ������� �ʴ� ����
	// 1. ������
	// 2. �޸� ��뷮�� Ŀ�� (iterator�� ��ü�̱� ����)
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	// C++������ �����ϴ� iterator
	// C#�� for each�� ����

	for each (object var in collection_to_loop)
	{

	}

	for (size_t i = 0; i < length; i++)
	{

	}

	for each (auto p in _vNumber)
	{
		cout << p << endl;
	}

	for (auto components : _vNumber)
	{

	}

	cout << "erase" << endl;
	_vNumber.erase(_vNumber.begin() + 1);
	_vNumber.erase(_vNumber.begin(), _vNumber.begin() + 3);

	LinePrint();

	_vriNumber = _vNumber.rbegin();
	for (_vriNumber; _vriNumber != _vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}

	if (_vNumber.empty())
	{
		cout << "!EMTPY!";

		return;
	}

	cout << _vNumber.at(2) << endl;

	LinePrint();
}