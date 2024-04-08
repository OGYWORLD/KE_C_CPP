#pragma once
#include <iostream>

using namespace std;

#pragma region 클래스
/*


*/

#pragma endregion


struct MyStruct
{

};

enum MyEnum
{

};

union MyUnion
{

};

class MainGame
{
	// 클래스가 익숙해 질 때까지 당분간 변수는 private 영역안에 잡아두도록.
private:
	int _Number;// 언더바가 들어가면 클래스 멤버변수이다.
	int _x;
	int _y;

	const int m_nConstValue = 0;

	// 클래스가 익숙해 질 때까지 당분간 변수는 private 영역안에 잡아두도록.
public:
	void outPut();
	void showPostion(void);
	void movePostion(void);
	void setPosition(int x, int y);

	//void FunctionA(const int a);

	//void FunctionB() const;

	//const int FunctionC();

	//int const FunctionD();

	//const int FunctionE() const;

	/*
	const int ValueA;
	mutable int ValueB;

	void DoSomething(int x) const
	{
		// ValueA = x; Error!
		ValueB = x;
	}

	void print() const { std::cout << "데이터: " << ValueB << std::endl; }
	*/




	// 생성자
	// 주로 멤버 변수의 값을 원하는 값으로 대입하는 작업을 하거나
	// 그외 객체가 동작하는데 필요한 모든 초기화 처리를 담당하기도 한다.
	MainGame();

	// 소멸자
	// 객체가 바꿔놓은 환경을 원래대로 돌려 놓거나 할당한 자원을 회수하는
	// 역활을 한다. 
	// (동적할당 등의 메모리 해제)
	~MainGame();
};

