#include <iostream>

using namespace std;

#pragma region ������ + ����Ʈ ������
/*
	�������
*/
#pragma endregion

void voidPointer();

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
	char* str2 = "Your String"; // ��� ����

}

void voidPointer()
{

}
