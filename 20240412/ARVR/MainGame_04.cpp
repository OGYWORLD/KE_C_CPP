#include "MainGame_04.h"

MainGame_04::MainGame_04()
{
	cout << "���Ⱑ �ٷ� ���� ��" << endl;
	_terran = new Unit;
	cout << "\n";

	_singleTank = new Tank;
	cout << "\n";

	_BattleCruiser= new BattleCruiser;
	cout << "\n";

	_terran->attack("����", "���۸�");
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
	// �׶��� �θ� ��ӹް��ֱ� ������ �����ع����� ��۸� �����͹߻�
	// �̷� �� ����Ҹ��ڸ� ����Ѵ�.
	delete _singleTank;
	delete _BattleCruiser;
}
