#pragma once
#include "Player_03.h"
#include "Portion.h"

class MainGame_03
{
private:
	Player_03* _Player; // �����ͷ� �����ؼ� ������ private ���ٵ� �ִ� ����? (1)
	//Player_03 _Player; //�̰ɷ� �����ϰ� �����ڿ��� ������ü ����� �� �� ��? (2)

	Portion* _Portion;

public:
	MainGame_03();
	~MainGame_03();

};

