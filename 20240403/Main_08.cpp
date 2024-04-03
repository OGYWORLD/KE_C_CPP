#include <iostream>

using namespace std;

#pragma region 포인터 + 스마트 포인터
/*
	노션정리
*/
#pragma endregion

void voidPointer();

// inline: 알아도 그만 몰라도 그만 / 단 깊게는 찾아보지 말 것
inline void linePrint()
{
	cout << "===================================" << endl;
}

void main()
{
	cout << "즐겁고 쉽게 재밌게 너무 최고야 -> 포인터" << endl;
	linePrint();

	/*
	- 포인터 선언 방법
	int Value = 0;				<- 메모리의 특정 영역에 4바이트 공간 할당
	int* pnPointer = &Value;	<- Value가 할당된 메모리 공간의 첫 주소를 할당

	*/

	int ValueA = 10;

	int* pValueA = &ValueA; // ValueA의 주소
	int** ppValueA = &pValueA; // pValueA의 주소

	cout << ppValueA << endl; // pValueA의 주소

	cout << *(*ppValueA) << endl; // 10

	cout << &ValueA << endl; // ValueA의 주소

	cout << ValueA << endl; // 10

	cout << pValueA << endl; // ValueA의 주소

	cout << *pValueA << endl; // 10

	linePrint();

	/*
		- 포인터는 사용함에 있어 주의를 많이 요하는 문법
		- 포인터는 초기화를 명시해야 한다.
		
		- 컴파일러 버전이 올라가면서 쓰레기 값 같은 경우 오류처리 하지 않고 넘어가 주는 경우가 있지만 원친적으로 오류가 맞다.
		- 포인터가 가리키는 값을 변경할 때는 꼭 확인을 하고 변경을 해줘야 한다.

		- 이러한 패턴은 예외처리를 진행할 때도 동일하게 수행된다.

		
	*/

	linePrint();

	cout << "포인터 배열" << endl;

	int* pArrA[3];

	int numA = 10, numB = 20, numC = 30;
	int* pNumA = &numA;
	int* pNumB = &numB;
	int* pNumC = &numC;

	int* pArrB[] = { pNumA, pNumB, pNumC };
	int** dpArr = pArrB;

	// 과제 1
	cout << pNumA << endl; // 실행결과: numA의 주소인 0x012FF8C0
	// pNumA는 포인터 변수이고 여기에 &numA,
	// 즉 numA의 주소를 넣고 있으므로 numA의 주소가 출력된다.

	cout << pArrB << endl; // 실행결과: pNumA의 주소인 0x012FF870
	// pArrB는 포인터 자료형을 담고있는 배열로 배열이기 때문에
	// 배열명인 pArrB는 해당 배열의 첫 번째 요소인 pNumA의 주소를 가리키고 있다.
	//따라서 pNumA의 주소가 출력된다.


	cout << dpArr << endl; // 실행결과: pNumA의 주소인 0x012FF870
	//dpArr은 이중포인터로 pArrB를 담고있다.
	// 그리고 pArrB는 배열이기 때문에 pArrB가 가지는 값은 해당 배열의 첫 번째 요소인
	// pNumA의 주소이다.


	linePrint();

	cout << "문자열 포인터" << endl;

	char str1[] = "my String"; // 변수 형태
	char* str2 = "Your String"; // 상수 형태

}

void voidPointer()
{

}
