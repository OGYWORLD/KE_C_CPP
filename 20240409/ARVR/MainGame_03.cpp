#include "MainGame_03.h"

MainGame_03::MainGame_03()
{
	_Player = new Player_03;
	_Player->setHP(100); // private ��������� �����ϰ� �ִ� -> �����Ͷ���?(1)

	cout << "�÷��̾� ���� ü��: " << _Player->getHP() << endl << endl;

	//_Player p; �̰� �� �� ��(2)

	cout << "���� ����(1��), ���� ����(2��) " << endl;

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
			cout << "������� �����Դϴ�." << endl;
		}

		cout << endl;
		cout << "���� ���� �� ü��: ";
		cout << _Player->getHP() << endl;
	}

	/*
	- �ǽ�
	1. ���� ������ �غ����� -> ��Ʈ �������� ó��
	2. ��� ���� ����� ������ -> �ѹ��� ��� ó��
	3. �÷��̾ ü���� 0���Ϸ� �������� ������ ����ó�� �ϵ���
	4. ü�� ��� ���� ����� ������ -> �������� ü�� ȸ��(ü�� ȸ�� ����� ���� �� ü���� 7%)

	*/

	_Portion = new Portion;

	// 0: ����, 1: ���, 2: ü�����
	int InputPortion;
	cout << "������ �������ּ���\n(�������: 0, ��繰�� �Ա�: 1, ü����� ���ุ���: 2): ";
	cin >> InputPortion;

	if (InputPortion == 0) // ����
	{
		int InputDamPortion;
		while (1)
		{
			cout << "������ �����մϴ�.\n������ ������ �ۼ�Ʈ�� �Է��Ͻÿ�: )";
			cin >> InputDamPortion;

			if (InputDamPortion < 1 || InputDamPortion > 100)
			{
				cout << "���������� �ۼ�Ʈ�Դϴ�. �ٽ� �Է����ּ���.\n\n";
			}
			else
			{
				break;
			}
		}

		cout << "������� ����\n";

		InputDamPortion = InputDamPortion / 10;

		for (int i = 0; i < 10; i++, InputDamPortion--)
		{
			if (InputDamPortion > 0)
			{
				cout << "��";
			}
			else
			{
				cout << "��";
			}
		}

		

		if (_Player->isPlayerDead(_Player->getHP()))
		{
			cout << "Player�� �׾����ϴ�." << endl;
		}
	}
	else if (InputPortion == 1) // ���
	{
		_Player->setHP(0);
		cout << "Player�� ü���� " << _Player->getHP() << "�Դϴ�." << endl;

		if (_Player->isPlayerDead(_Player->getHP()))
		{
			cout << "Player�� �׾����ϴ�." << endl;
		}
	}
	else if (InputPortion == 2) // ü�����
	{
		int PlusHP = (float)_Player->getHP() * 0.07;
		_Player->setHP(_Player->getHP() + PlusHP);

		cout << "Player�� ü���� " << _Player->getHP() << "�Դϴ�." << endl;
	}
	else // ���������� ����
	{
		cout << "���������� �����Դϴ�." << endl;
	}


}

MainGame_03::~MainGame_03()
{
	delete _Player;
}
