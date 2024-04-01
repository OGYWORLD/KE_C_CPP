#include <iostream>

using namespace std;

#pragma region 함수 + 변/상수 + 스코프 + 라이프사이클
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
	
	cout << "정수 입력: ";
	cin >> Value; // 10 입력받기

	cout << '\n';

	cout << "값 증가시킨 후" << endl;

	IncreaseValue(Value); // 10
	IncreaseValue(Value); // 10

	cout << g_Value << endl << endl;

	cout << "\n";

	cout << "값 감소시킨 후" << endl;

	DecreaseValue(Value); // -10
	DecreaseValue(Value); // -20

	cout << g_Value << endl << endl; // 0

	// 다른 언어에서 부러워하는 기능 -> 특정 영역안에 새로운 새로운 영역을 만드는 기능
	// 잠시 바꿔쓰고 다시 돌려놓겠다는 뜻
	{
		int Value = 0;
		int g_ConstantValue = 0;

		Value = 100;
		g_ConstantValue = 200;
	}

	cout << Value << endl; // 10
	cout << g_ConstantValue << endl; // 0

}

// 값을 증가시킨다.
void IncreaseValue(int Value)
{
	int LocalValue = 0;

	g_Value += Value;
	LocalValue += Value;

	cout << "값을 증가시키는 함수의 지역 변수: " << LocalValue << endl;
}


// 값을 감소시킨다.
void DecreaseValue(int Value)
{
	// 함수 내에서 선언된 static -> 한번만 초기화 됨
	// 지역 변수와 달리 함수를 빠져나가도 소멸되지 않는다.
	// 정적 변/상수는 특정 지역에서만 접근이 가능한 지역 변수의 특징과 프로그램이 종료될때까지
	// 사라지지 않는 전역 변수의 특징을 모두 지니고 있다.
	// 그렇기 때문에 선언하는 영역과 실행이 되는 그 첫 순간에만 유효하다는 것을 알 수 있다.
	// 충돌에 관련된 데이터는 전역으로 관리하는 경우가 많다.
	static int LocalValue = 0;

	g_Value -= Value;
	LocalValue -= Value;

	cout << "값을 감소시키는 함수의 지역 변수: " << LocalValue << endl;
}
