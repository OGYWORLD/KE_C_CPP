#pragma once
#include <iostream>

using namespace std;

#pragma region Ŭ����
/*


*/

#pragma endregion


struct MyStruct
{

};

enum MyEnum
{

};

union MyUnion
{

};

class MainGame
{
	// Ŭ������ �ͼ��� �� ������ ��а� ������ private �����ȿ� ��Ƶε���.
private:
	int _Number;// ����ٰ� ���� Ŭ���� ��������̴�.
	int _x;
	int _y;

	const int m_nConstValue = 0;

	// Ŭ������ �ͼ��� �� ������ ��а� ������ private �����ȿ� ��Ƶε���.
public:
	void outPut();
	void showPostion(void);
	void movePostion(void);
	void setPosition(int x, int y);

	//void FunctionA(const int a);

	//void FunctionB() const;

	//const int FunctionC();

	//int const FunctionD();

	//const int FunctionE() const;

	/*
	const int ValueA;
	mutable int ValueB;

	void DoSomething(int x) const
	{
		// ValueA = x; Error!
		ValueB = x;
	}

	void print() const { std::cout << "������: " << ValueB << std::endl; }
	*/




	// ������
	// �ַ� ��� ������ ���� ���ϴ� ������ �����ϴ� �۾��� �ϰų�
	// �׿� ��ü�� �����ϴµ� �ʿ��� ��� �ʱ�ȭ ó���� ����ϱ⵵ �Ѵ�.
	MainGame();

	// �Ҹ���
	// ��ü�� �ٲ���� ȯ���� ������� ���� ���ų� �Ҵ��� �ڿ��� ȸ���ϴ�
	// ��Ȱ�� �Ѵ�. 
	// (�����Ҵ� ���� �޸� ����)
	~MainGame();
};

