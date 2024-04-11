#include "MainGame02.h"

#define EXAMPLE_TYPE_STRUCT			1
#define EXAMPLE_TYPE_ENUM			2
#define EXAMPLE_TYPE_UNION			3
#define EXAMPLE_TYPE_CLASS			4

#define EXAMPLE_TYPE		EXAMPLE_TYPE_STRUCT

MainGame02::MainGame02()
{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

	// C++������ struct Ű���尡 �����ص� ����.
	// ���� �̴� C ��Ÿ��
	struct tagFamily Family;
	
	// C++
	// ���� ȣȯ�� �� �ȴ�.
	tagFamily Family;

	human.name = "���";
	human.age = 18;
	human.height = 230;

	human.wedding = false;
	human.weight = 45;

	cout << "�̸�: " << human.name << "\n";
	cout << "����: " << human.age << "\n";
	cout << "Ű: " << human.height << "\n";
	cout << "��ȥ: " << human.wedding << "\n";
	cout << "����: " << human.weight << endl;

	cout << "\n";

	// ����꼺�� ����

	// ����� ������ ��� ����ü ������ �����ڿ� �Ѵ�.
	// �θ�Ŭ���� ȣ�� ��, �����ڰ� ȣ��Ǳ� ����
	tagPlayer player;
	player.hp = 100;
	player.mp = 50;
	player.att = 10;
	player.def = 5;
	player.speed = 10.5f;

	cout << "\n";

	tagUnit marin;
	marin.name = "����";
	marin.hp = 100;
	marin.att = 5.5f;
	cout << boolalpha; // 0, 1�� T, F�� ��ȯ
	marin.die = false;


	tagUnit zergling = {"���۸�", 50, 50.f, true};

	tagPlayer arrPlayer[4] =
	{
		 {100, 100, 100, 100, 100},
		 {90, 90, 90, 90, 90},
		 {80, 80, 80, 80, 80},
		 {70, 70, 70, 70, 70}
	};

	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << "��° �÷��̾�" << endl;
		cout << "ü��: " << arrPlayer->hp << endl;
		cout << "==========" << endl;
	}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM
	
	// �ſ� ����! => �̸� �浹(namespace, class)
	// ��ü�������� ��Ģ�� ����
	cout << "��: " << BLACK << endl;

	m_motion = L_WALK;

	// �����Ҵ��϶��� while�� �ƴϸ� switch
	switch (m_motion)
	{
	case R_WALK:
		cout << "������ �ȱ�" << endl;
		break;
	case L_WALK:
		cout << "���� �ȱ�" << endl;
		break;
	case R_RUN:
		cout << "������ �ٱ�" << endl;
		break;
	case L_RUN:
		cout << "���� �ٱ�" << endl;
		break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "���������� �ٰ� �ִ�." << endl;
		}
	}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION
/*
����ü vs ����ü -> �������
*/
stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== ����ü ==" << endl;

cout << "���� ������: " << stData.m_nDataA << endl;
cout << "���� ������: " << stData.m_nDataB << endl;
cout << "�Ǽ� ������: " << stData.m_fData << endl;


#else
// Ŭ������ �⺻������ ��ø�� �����ϴ�.
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
		printf("�ð��� %d:%d:%d �Դϴ�.\n", hour, min, sec);
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
