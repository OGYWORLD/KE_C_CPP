#include "Example_07.h"

// ���� ������
#define EXAMPLE_TYPE_PRINT					1

// ���ڿ�
#define EXAMPLE_TYPE_TERNARY_OPERATOR		2

#define EXAMPLE_TYPE_STRING					3

#define EXAMPLE_TYPE		EXAMPLE_TYPE_PRINT

namespace EXAMPLE_02
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "�ɺ��� ������ �Ϸ��� �̰����� " << endl;

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "���� ������ " << endl;

		int numA, numB;
		cout << "���� �Է�: ";
		cin >> numA;

		numB = (numA > 0) ? numA : numA * (-1);

		//
		cout << "�Է��� ���� ��: " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;

		cout << "���� �Է�: ";
		cin >> numberA;

		result = numberA < 10 ? numberA : numberB;

		//
		cout << "���� ������ �����: " << result << endl;


#else
		char moonja = 'A';
		int numA = 20;
		float numB = 3.0f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : ����Ʈ" << endl;
		cout << sizeof(numA) << " : ����Ʈ" << endl;
		cout << sizeof(numB) << " : ����Ʈ" << endl;
		cout << sizeof(numC) << " : ����Ʈ" << endl;

		printf("\n");

		/*
		- C/C++�� Ÿ�Կ� ������ ���
		�� �̴� ������ �����ϱ� ����.

		- �⺻������ Ÿ�� ������ ������ �� �ִ°� NULL�̴�.
		*/

		char strC[20] = "I like game.!";

		cout << strC << endl; // I like game.!

		strC[10] = '\0';

		cout << strC << endl; // I like gam

		strC[2] = '\0';

		cout << strC << endl; // I 

		/*
			4�� ���ڿ� + ����
			// �������
		*/

	
		cout << "4�� ���ڿ�" << endl;

		cout << "\n";

		char strD[100] = "abcedf";
		int lenA = strlen(strD);

		cout << strlen(strD) << endl;
		cout << "���ڿ��� ����: " << lenA << endl;

		cout << "\n";

		/*
		2. strcmp
		*/

		char StrE[10] = "abc";
		char StrF[10] = "abc";
		char StrG[10] = "abb";

		int lenE = strcmp(strE, strF);
		int lenF = strcmp(strE, strG);

		// ���� -> ID + PW
		cout << lenE << endl;
		cout << lenC << endl;

		cout << "\n";

		/*
		3. strcpy(���ڿ�, ���ڿ�)
		*/

		char strH[10] = "ABCDEFG";
		char strI[10] = "HIJK";

		cout << strH << endl;

		strcpy(strI, strH);

		cout << strI << endl;

		cout << "\n";

		/*
		4. strcat(���ڿ�, ���ڿ�)
		*/

		char StrG[100] = "���� ������ ";
		char StrH[100] = "������ ������";

		cout << StrG << endl;

		strcat(StrG, StrH);

		cout << StrG << endl;

		cout << "\n";

		/*
		5. strtok
		*/

		char StrI[10] = "ABCD EFGH";

		strtok(StrI, " ");

		cout << strI << endl;

		char StrJ[100] = "�̰��� ���ڸ�";
		
		const char* StrR = "�̷��Ե� ��� ����";
		
		string strZ = "�̰� �ȴٰ�";
#endif
	}
}