#include <iostream>
#include <time.h>
#include <random>


using namespace std;

void main()
{
	// ����̽� ��ü ���� (���̴�)
	random_device oRandomDevice; // prefix - Object

	// �õ� ���� (���� ���� ���� �ʱ�ȭ)
	mt19937_64 rnd(oRandomDevice);
	// �Ȱ��� �������� ������ �� ������ �װ� ����̽� �ʱ�ȭ ���� ������ϴ� ���̱� ������
	// ���� �����ϴٰ� �� �� �ִ�.

	int RandomMin = 1;
	int RandomMax = 10;

	// ���� ���� (���� - int)
	uniform_int_distribution<int> range(RandomMin, RandomMax);

	// ���� ���� (�Ǽ� - real)
	uniform_real_distribution<float> range(RandomMin, RandomMax);

	// ���Ժ����� Ȯ���̱�
	normal_distribution<double> range(RandomMin, RandomMax);

	cout << '\n';

	int RandomValue = range(rnd);

	cout << "���Ⱚ: " << RandomValue << endl;

	// time�� ���� ����̽��� ����
	int numberA = (oRandomDevice() % 10) + 1;
	int numberB = (oRandomDevice() % 10) + 1;

	int numberA = (rand() % 10) + 1;
	int numberB = (rand() % 10) + 1;








}