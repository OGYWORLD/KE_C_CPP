#pragma once
#include <iostream>

using namespace std;

#pragma region 사용자 정의 자료형
/*

*/
#pragma endregion

// 구조체 선언 방법

// Family는 공통점이 없다.
struct tagFamily // 추상화 안 됨
{
	const char* name;
	int age;
	int height;
	float weight;
	bool wedding;
};

// Player인 고유객체라서 추상화가 안 되더라도 써야됨
struct tagPlayer // 추상화 안 됨
{
	int hp;
	int mp;
	int att;
	int def;
	float speed;
};

struct tagUnit // 추상화 됨
{
	const char* name;
	int hp;
	float att;
	bool die;
};

enum EColor_TYPE : uint16_t
{
	RED, // 0
	GREEN, // 1
	BLUE = 1000, 
	BLACK, // 1001
	WHITE // 1002
};

enum EMotion_TYPE : uint16_t
{
	R_WALK,
	L_WALK,
	R_RUN,
	L_RUN,
};

// 클래스가 들어갔기 때문에 익명의 개념도 추가가 된다.
// ㄴ 단, 해당 방식으로 선언된 열거형은 식별할 수 있는 이름이 존재하지
// 않기 때문에 따로 변수화 시키는 것은 불가
// ㄴ 이러한 규칙은 다른 사용자 정의 자료형에도 적용이 된다.
enum
{
	UNIT_SIZE = 5
};

// 기존 열거형 같은 경우에는 암묵적 형변환이 일어나기에 상관없지만
// enum class 값은 경우에는 타입을 지정해줘야 한다.
// 오류 방지 + 메모리 절약
enum class Motion_Type
{

};

union STData
{
	int m_nDataA;
	int m_nDataB;
	float m_fData;
};

class MainGame02
{
private:
	tagFamily human;
	EMotion_TYPE m_motion;
	STData stData;

public:
	MainGame02();
	~MainGame02();
};

