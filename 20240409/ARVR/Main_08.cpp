#include <iostream>

using namespace std;

#pragma region ������ + ����Ʈ ������
/*
	�������
*/
#pragma endregion

void GetHP(int a, int b) // Ŭ�����ͷ� ����(�ּҰ��� ����������)
{
	a + b;
}

void SomeFunction()
{
	int HP = 1000;

	GetHP(HP, 100);
	cout << HP << endl;
}

#define ARRAY_SIZE 30


// a = argument (���� ���ڷθ� ����ϰڴ�.)
void voidPointer();
void InitMatrix(int* a_pnMatrix, int a_nRow, int a_nCol, int a_ColCount);
void PrintMatrix(int* a_pnMatrix, int a_nRow, int a_nCol, int a_ColCount);
void ArrPointer();

// inline: �˾Ƶ� �׸� ���� �׸� / �� ��Դ� ã�ƺ��� �� ��
inline void linePrint()
{
	cout << "===================================" << endl;
}

void main()
{
	cout << "��̰� ���� ��հ� �ʹ� �ְ�� -> ������" << endl;
	linePrint();

	/*
	- ������ ���� ���
	int Value = 0;				<- �޸��� Ư�� ������ 4����Ʈ ���� �Ҵ�
	int* pnPointer = &Value;	<- Value�� �Ҵ�� �޸� ������ ù �ּҸ� �Ҵ�

	*/

	int ValueA = 10;

	int* pValueA = &ValueA; // ValueA�� �ּ�
	int** ppValueA = &pValueA; // pValueA�� �ּ�

	cout << ppValueA << endl; // pValueA�� �ּ�

	cout << *(*ppValueA) << endl; // 10

	cout << &ValueA << endl; // ValueA�� �ּ�

	cout << ValueA << endl; // 10

	cout << pValueA << endl; // ValueA�� �ּ�

	cout << *pValueA << endl; // 10

	linePrint();

	/*
		- �����ʹ� ����Կ� �־� ���Ǹ� ���� ���ϴ� ����
		- �����ʹ� �ʱ�ȭ�� ����ؾ� �Ѵ�.
		
		- �����Ϸ� ������ �ö󰡸鼭 ������ �� ���� ��� ����ó�� ���� �ʰ� �Ѿ �ִ� ��찡 ������ ��ģ������ ������ �´�.
		- �����Ͱ� ����Ű�� ���� ������ ���� �� Ȯ���� �ϰ� ������ ����� �Ѵ�.

		- �̷��� ������ ����ó���� ������ ���� �����ϰ� ����ȴ�.

		
	*/

	linePrint();

	cout << "������ �迭" << endl;

	int* pArrA[3];

	int numA = 10, numB = 20, numC = 30;
	int* pNumA = &numA;
	int* pNumB = &numB;
	int* pNumC = &numC;

	int* pArrB[] = { pNumA, pNumB, pNumC };
	int** dpArr = pArrB;

	// ���� 1
	cout << pNumA << endl; // ������: numA�� �ּ��� 0x012FF8C0
	// pNumA�� ������ �����̰� ���⿡ &numA,
	// �� numA�� �ּҸ� �ְ� �����Ƿ� numA�� �ּҰ� ��µȴ�.

	cout << pArrB << endl; // ������: pNumA�� �ּ��� 0x012FF870
	// pArrB�� ������ �ڷ����� ����ִ� �迭�� �迭�̱� ������
	// �迭���� pArrB�� �ش� �迭�� ù ��° ����� pNumA�� �ּҸ� ����Ű�� �ִ�.
	//���� pNumA�� �ּҰ� ��µȴ�.


	cout << dpArr << endl; // ������: pNumA�� �ּ��� 0x012FF870
	//dpArr�� ���������ͷ� pArrB�� ����ִ�.
	// �׸��� pArrB�� �迭�̱� ������ pArrB�� ������ ���� �ش� �迭�� ù ��° �����
	// pNumA�� �ּ��̴�.


	linePrint();

	cout << "���ڿ� ������" << endl;

	char str1[] = "my String"; // ���� ����
	const char* str2 = "Your String"; // ��� ����

	/*
	�����Ҵ� - �������
	*/

	// �����Ѵ�. -> new�� ���� �� ��ü -> �״�� ����ϰ� ������ �� ���� ����Ű�� �ִ�.
	int* countA = new int[3];
	int* countB = new int; // �迭�� ũ��� 1
	// �����Ҵ�

	for (int i = 0; i < 3; i++)
	{
		countA[i] = i;
		*countB = i + 18;
	}

	for (int i = 0; i < 3; i++)
	{
		// 
		cout << "ī��Ʈ�� " << countA[i] << endl; // 0 1 2
	}

	//
	cout << "count2�� ���� " << *countB << endl; // 20
	

	// ����
	delete[] countA;
	delete countB;

}

void voidPointer()
{

}

void InitMatrix(int* a_pnMatrix, int a_nRow, int a_nCol, int a_ColCount)
{
	int nNumber = 0;
	int nMaxNumber = a_nRow * a_nCol;

	int nLoopCount = 0;
	int nDirection = 1;

	int nRowIndex = 0;
	int nColIndex = -1;

	while (nNumber < nMaxNumber)
	{
		int anValues[5] = { 0 };

		for (int i = 0; i < a_nCol - nLoopCount; ++i)
		{
			nColIndex += nDirection;
			int nIndex = (nRowIndex * a_ColCount) + nColIndex;

			a_pnMatrix[nIndex] == ++nNumber;
		}

		for (int i = 0; i < sizeof(anValues) / sizeof(anValues[0]); i++)
		{

		}
	}
}

void PrintMatrix(int* a_pnMatrix, int a_nRow, int a_nCol, int a_ColCount)
{

}

void ArrPointer()
{
	int nSize = 0;

	cout << "���� �Է�: " << endl;
	cin >> nSize;
}

