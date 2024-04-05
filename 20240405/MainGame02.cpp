#include "MainGame02.h"

#define EXAMPLE_TYPE_STRUCT			1
#define EXAMPLE_TYPE_ENUM			2
#define EXAMPLE_TYPE_UNION			3
#define EXAMPLE_TYPE_CLASS			4

#define EXAMPLE_TYPE		EXAMPLE_TYPE_STRUCT

MainGame02::MainGame02()
{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

	// C++에서는 struct 키워드가 생략해도 들어간다.
	// 따라서 이는 C 스타일
	struct tagFamily Family;
	
	// C++
	// 위와 호환이 안 된다.
	tagFamily Family;

	human.name = "사라";
	human.age = 18;
	human.height = 230;

	human.wedding = false;
	human.weight = 45;

	cout << "이름: " << human.name << "\n";
	cout << "나이: " << human.age << "\n";
	cout << "키: " << human.height << "\n";
	cout << "결혼: " << human.wedding << "\n";
	cout << "무게: " << human.weight << endl;

	cout << "\n";

	// 재생산성이 좋다

	// 상속을 전제한 경우 구조체 선언을 생성자에 한다.
	// 부모클래스 호출 시, 생성자가 호출되기 때문
	tagPlayer player;
	player.hp = 100;
	player.mp = 50;
	player.att = 10;
	player.def = 5;
	player.speed = 10.5f;

	cout << "\n";

	tagUnit marin;
	marin.name = "마린";
	marin.hp = 100;
	marin.att = 5.5f;
	cout << boolalpha; // 0, 1을 T, F로 변환
	marin.die = false;


	tagUnit zergling = {"저글링", 50, 50.f, true};

	tagPlayer arrPlayer[4] =
	{
		 {100, 100, 100, 100, 100},
		 {90, 90, 90, 90, 90},
		 {80, 80, 80, 80, 80},
		 {70, 70, 70, 70, 70}
	};

	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << "번째 플레이어" << endl;
		cout << "체력: " << arrPlayer->hp << endl;
		cout << "==========" << endl;
	}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM
	
	// 매우 위험! => 이름 충돌(namespace, class)
	// 객체보존성의 규칙이 깨짐
	cout << "블랙: " << BLACK << endl;

	m_motion = L_WALK;

	// 동적할당일때는 while문 아니면 switch
	switch (m_motion)
	{
	case R_WALK:
		cout << "오른쪽 걷기" << endl;
		break;
	case L_WALK:
		cout << "왼쪽 걷기" << endl;
		break;
	case R_RUN:
		cout << "오른쪽 뛰기" << endl;
		break;
	case L_RUN:
		cout << "왼쪽 뛰기" << endl;
		break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "오른쪽으로 뛰고 있다." << endl;
		}
	}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION
/*
구조체 vs 공용체 -> 노션정리
*/
stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== 공용체 ==" << endl;

cout << "정수 데이터: " << stData.m_nDataA << endl;
cout << "정수 데이터: " << stData.m_nDataB << endl;
cout << "실수 데이터: " << stData.m_fData << endl;


#else
// 클래스도 기본적으로 중첩이 가능하다.
class Time
{
private:
	int hour, min, sec;

public:
	void setTime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void outTime()
	{
		printf("시간은 %d:%d:%d 입니다.\n", hour, min, sec);
	}
};

Time Now;
Now.setTime(19, 41, 40);
Now.outTime();

#endif // EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

}

MainGame02::~MainGame02()
{
}
