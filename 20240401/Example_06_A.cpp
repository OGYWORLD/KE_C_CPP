#include "Example_06_A.h"

#define EXAMPLE_TYPE_PRINT		1

#define ARRAY_TYPE_SIMPLE		1
#define ARRAY_TYPE_DIMENSION	2


#define EXAMPLE_TYPE	EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE		ARRAY_TYPE_SIMPLE

namespace EXAMPLE_1
{
#define ARRAY_SIZE		5

	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "출력 테스트" << endl;

		cout << '\n';

		// 일반적인 방법
		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;

		cout << '\n';

		// 1차원
		//int num[6];
		
		// 초록색 -> 초기화를 안 했기 때문에 등장
		//cout << num[0] << endl;
		//cout << num[1] << endl;
		//cout << num[2] << endl;
		//cout << num[3] << endl;
		//cout << num[4] << endl;
		//cout << num[5] << endl;

		// 반복문 -> for문 -> 반복 횟수를 얻을 수 있기 때문
		
		// 배열 또한 선언과 동시에 초기화가 가능하다.
		int anNums[6] = { 0, 1, 2, 3, 4, 5 };
		//int anNums[6] = {};
		//int anNums[6] = { 0, };

		for (int i = 0; i < 6; i++)
		{
			cout << "배열의 값: " << anNums[i] << endl;
		}

		cout << '\n';




// 1차원 배열 관리
#if ARRAY_TYPE == ARRAY_TYPE_SIMPLE
		/* 배열의 크기를 가지고 무언가를 해야할 때 sizeof 연산자를 떠올려라.
		* sizeof 연산자를 배열에 활용할 경우 배열 전체의 바이트 크기를 계산하는 것이
		* 가능하기 때문
		* 
		* ex)
		* int anValues[5];
		* 
		* sizeof(anValues); // 20
		* sizeof(anValues[0]); // 4
		* 
		*/

		int anValuesA[ARRAY_SIZE] =
		{
			1, 2, 3, 4, 5
		};

		int anValuesB[] =
		{
			1, 2, 3, 4, 5
		};

		const int SizeA = sizeof(anValuesA) / sizeof(anValuesA[0]); 
		const int SizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		printf("%d, %d, %d, %d, %d\n", anValuesA[0], anValuesA[1], anValuesA[2]
			, anValuesA[3], anValuesA[4]);

		cout << '\n';

		for (int i = 0; i < SizeA; i++)
		{
			printf("%d%c", anValuesA[i], (i <= SizeA - 2)? ',' : ' ');
		}

// 2차원 배열 관리
#else
		/*
		C/C++ 언어의 다차원 배열 선언
		
		int anMatrix[5][5];
		int anDimensionMatrix[5][5][5];

		sizeof(anMatrix); 5 * 5 * 4(배열 요소 크기)
		sizeof(anMatrix); 5 * (5 * (배열 요소 크기: 5 * 4) ) 
		*/

		int anMatrix[ARRAY_SIZE][ARRAY_SIZE] = { 0 };

		const int nRow = sizeof(anMatrix) / sizeof(anMatrix[0]); // 
		const int nRow = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]); // 4

		// 차원이 늘어나면 반복문이 늘어난다.
		// x , y 좌표를 표현할 때 추천

#endif // End Of ARRAY_TYPE_SIMPLE

#else

#endif // End Of EXAMPLE_TYPE_PRINT

	}
}