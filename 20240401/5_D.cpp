#include <iostream>

using namespace std;

#pragma region �Լ� + ��/��� + ������ + ����������Ŭ
/*
* 
*/

#pragma endregion

void IncreaseValue(int Value);
void DecreaseValue(int Value);

static int g_Value = 0;
const int g_ConstantValue = 0;

void main()
{
	int Value = 0;
	
	cout << "���� �Է�: ";
	cin >> Value; // 10 �Է¹ޱ�

	cout << '\n';

	cout << "�� ������Ų ��" << endl;

	IncreaseValue(Value); // 10
	IncreaseValue(Value); // 10

	cout << g_Value << endl << endl;

	cout << "\n";

	cout << "�� ���ҽ�Ų ��" << endl;

	DecreaseValue(Value); // -10
	DecreaseValue(Value); // -20

	cout << g_Value << endl << endl; // 0

	// �ٸ� ���� �η����ϴ� ��� -> Ư�� �����ȿ� ���ο� ���ο� ������ ����� ���
	// ��� �ٲ㾲�� �ٽ� �������ڴٴ� ��
	{
		int Value = 0;
		int g_ConstantValue = 0;

		Value = 100;
		g_ConstantValue = 200;
	}

	cout << Value << endl; // 10
	cout << g_ConstantValue << endl; // 0

}

// ���� ������Ų��.
void IncreaseValue(int Value)
{
	int LocalValue = 0;

	g_Value += Value;
	LocalValue += Value;

	cout << "���� ������Ű�� �Լ��� ���� ����: " << LocalValue << endl;
}


// ���� ���ҽ�Ų��.
void DecreaseValue(int Value)
{
	// �Լ� ������ ����� static -> �ѹ��� �ʱ�ȭ ��
	// ���� ������ �޸� �Լ��� ���������� �Ҹ���� �ʴ´�.
	// ���� ��/����� Ư�� ���������� ������ ������ ���� ������ Ư¡�� ���α׷��� ����ɶ�����
	// ������� �ʴ� ���� ������ Ư¡�� ��� ���ϰ� �ִ�.
	// �׷��� ������ �����ϴ� ������ ������ �Ǵ� �� ù �������� ��ȿ�ϴٴ� ���� �� �� �ִ�.
	// �浹�� ���õ� �����ʹ� �������� �����ϴ� ��찡 ����.
	static int LocalValue = 0;

	g_Value -= Value;
	LocalValue -= Value;

	cout << "���� ���ҽ�Ű�� �Լ��� ���� ����: " << LocalValue << endl;
}
