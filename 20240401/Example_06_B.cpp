#include <iostream>
#include <time.h>
#include <random>

using namespace std;


void main()
{
	// ���� �õ� �ʱ�ȭ
	srand(time(NULL));

	int damage = (rand() % 10) + 1;

	cout << "�����: " << damage << endl;

	for (int i = 0; i < 10; i++)
	{
		printf("%d \t", rand());
	}

	// ����
	// ���ӿ��� ������ �����͸� ���� ����
	// <algorithm> ��������� �����Ѵ�. -> ��õ���� ����
	int num[10];
	int dest, sour, temp; // ������ ������ �ӽð�

	for (int i = 0; i < 10; i++)
	{
		num[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl << endl;
	}

	for (int i = 0; i < 100000; i++)
	{
		dest = rand() % 10;	// dest ���� 0~9������ �������� �������� ����
		sour = rand() % 10; // sour ���� 0~9������ �������� �������� ����

		temp = num[dest];
		num[dest] = num[sour];
		num[sour] = temp;
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] = " << num[i] << endl;
	}

	//star_marker@naver.com


}