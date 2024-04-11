#pragma once
#include "Player_03.h"
#include "Portion.h"

class MainGame_03
{
private:
	Player_03* _Player; // 포인터로 선언해서 이점에 private 접근도 있는 거임? (1)
	//Player_03 _Player; //이걸로 선언하고 생성자에서 동적객체 만들면 왜 안 됨? (2)

	Portion* _Portion;

public:
	MainGame_03();
	~MainGame_03();

};

