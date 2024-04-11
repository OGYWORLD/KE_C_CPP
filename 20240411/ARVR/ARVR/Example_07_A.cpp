#include "Example_07.h"

// 삼항 연산자
#define EXAMPLE_TYPE_PRINT					1

// 문자열
#define EXAMPLE_TYPE_TERNARY_OPERATOR		2

#define EXAMPLE_TYPE_STRING					3

#define EXAMPLE_TYPE		EXAMPLE_TYPE_PRINT

namespace EXAMPLE_02
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "심볼릭 세팅을 하려면 이곳에서 " << endl;

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "삼항 연산자 " << endl;

		int numA, numB;
		cout << "정수 입력: ";
		cin >> numA;

		numB = (numA > 0) ? numA : numA * (-1);

		//
		cout << "입력한 수의 값: " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;

		cout << "정수 입력: ";
		cin >> numberA;

		result = numberA < 10 ? numberA : numberB;

		//
		cout << "삼항 연산의 결과값: " << result << endl;


#else
		char moonja = 'A';
		int numA = 20;
		float numB = 3.0f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : 바이트" << endl;
		cout << sizeof(numA) << " : 바이트" << endl;
		cout << sizeof(numB) << " : 바이트" << endl;
		cout << sizeof(numC) << " : 바이트" << endl;

		printf("\n");

		/*
		- C/C++은 타입에 엄격한 언어
		ㄴ 이는 오류를 방지하기 위함.

		- 기본적으로 타입 오류를 예방할 수 있는게 NULL이다.
		*/

		char strC[20] = "I like game.!";

		cout << strC << endl; // I like game.!

		strC[10] = '\0';

		cout << strC << endl; // I like gam

		strC[2] = '\0';

		cout << strC << endl; // I 

		/*
			4대 문자열 + 알파
			// 노션정리
		*/

	
		cout << "4대 문자열" << endl;

		cout << "\n";

		char strD[100] = "abcedf";
		int lenA = strlen(strD);

		cout << strlen(strD) << endl;
		cout << "문자열의 길이: " << lenA << endl;

		cout << "\n";

		/*
		2. strcmp
		*/

		char StrE[10] = "abc";
		char StrF[10] = "abc";
		char StrG[10] = "abb";

		int lenE = strcmp(strE, strF);
		int lenF = strcmp(strE, strG);

		// 접속 -> ID + PW
		cout << lenE << endl;
		cout << lenC << endl;

		cout << "\n";

		/*
		3. strcpy(문자열, 문자열)
		*/

		char strH[10] = "ABCDEFG";
		char strI[10] = "HIJK";

		cout << strH << endl;

		strcpy(strI, strH);

		cout << strI << endl;

		cout << "\n";

		/*
		4. strcat(문자열, 문자열)
		*/

		char StrG[100] = "오늘 과제는 ";
		char StrH[100] = "없으면 좋겠지";

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

		char StrJ[100] = "이곳에 문자를";
		
		const char* StrR = "이렇게도 사용 가능";
		
		string strZ = "이게 된다고";
#endif
	}
}