#include "MainGame_04.h"

MainGame_04::MainGame_04()
{
	cout << "여기가 바로 헌터 맵" << endl;
	_terran = new Unit;
	cout << "\n";

	_singleTank = new Tank;
	cout << "\n";

	_BattleCruiser= new BattleCruiser;
	cout << "\n";

	_terran->attack("마린", "저글링");
	cout << "\n";

	_terran->attack(20, 50);
	cout << "\n";

	_terran->attack(true);
	cout << "\n";


	_terran->attack();
	cout << "\n";

	_singleTank->attack();
	cout << "\n";


	_BattleCruiser->attack();
	cout << "\n";


}

MainGame_04::~MainGame_04()
{
	// 테란은 부모를 상속받고있기 때문에 해제해버리면 댕글링 포인터발생
	// 이럴 때 가상소멸자를 사용한다.
	delete _singleTank;
	delete _BattleCruiser;
}
