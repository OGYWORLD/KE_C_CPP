#include "MainGame_03.h"

MainGame_03::MainGame_03()
{
	_Player = new Player_03;
	_Player->setHP(100); // private 멤버변수에 접근하고 있다 -> 포인터때문?(1)

	cout << "플레이어 현재 체력: " << _Player->getHP() << endl << endl;

	//_Player p; 이거 왜 안 됨(2)

	cout << "소형 물약(1번), 대형 물약(2번) " << endl;

	int input;
	while (1)
	{
		cin >> input;
		if (input == 1)
		{
			_Player->setHP(_Player->getHP() + 100);
		}
		else if (input == 2)
		{
			_Player->setHP(_Player->getHP() + 500);
		}
		else
		{
			cout << "비상적인 접근입니다." << endl;
		}

		cout << endl;
		cout << "물약 먹은 후 체력: ";
		cout << _Player->getHP() << endl;
	}

	/*
	- 실습
	1. 독약 생성을 해보도록 -> 도트 데미지로 처리
	2. 즉사 물약 만들어 보도록 -> 한번에 사망 처리
	3. 플레이어가 체력이 0이하로 내려가면 음수값 예외처리 하도록
	4. 체력 재생 물약 만들어 보도록 -> 지속적인 체력 회복(체력 회복 배수는 현재 총 체력의 7%)

	*/

	_Portion = new Portion;

	// 0: 독약, 1: 즉사, 2: 체력재생
	int InputPortion;
	cout << "물약을 선택해주세요\n(독약생성: 0, 즉사물약 먹기: 1, 체력재생 물약만들기: 2): ";
	cin >> InputPortion;

	if (InputPortion == 0) // 독약
	{
		int InputDamPortion;
		while (1)
		{
			cout << "독약을 생성합니다.\n독약의 데미지 퍼센트를 입력하시오: )";
			cin >> InputDamPortion;

			if (InputDamPortion < 1 || InputDamPortion > 100)
			{
				cout << "비정상적인 퍼센트입니다. 다시 입력해주세요.\n\n";
			}
			else
			{
				break;
			}
		}

		cout << "만들어진 독약\n";

		InputDamPortion = InputDamPortion / 10;

		for (int i = 0; i < 10; i++, InputDamPortion--)
		{
			if (InputDamPortion > 0)
			{
				cout << "■";
			}
			else
			{
				cout << "□";
			}
		}

		

		if (_Player->isPlayerDead(_Player->getHP()))
		{
			cout << "Player가 죽었습니다." << endl;
		}
	}
	else if (InputPortion == 1) // 즉사
	{
		_Player->setHP(0);
		cout << "Player의 체력은 " << _Player->getHP() << "입니다." << endl;

		if (_Player->isPlayerDead(_Player->getHP()))
		{
			cout << "Player가 죽었습니다." << endl;
		}
	}
	else if (InputPortion == 2) // 체력재생
	{
		int PlusHP = (float)_Player->getHP() * 0.07;
		_Player->setHP(_Player->getHP() + PlusHP);

		cout << "Player의 체력은 " << _Player->getHP() << "입니다." << endl;
	}
	else // 비정상적인 접근
	{
		cout << "비정상적인 접근입니다." << endl;
	}


}

MainGame_03::~MainGame_03()
{
	delete _Player;
}
