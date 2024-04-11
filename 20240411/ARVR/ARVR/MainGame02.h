#pragma once
#include <iostream>

using namespace std;

#pragma region ����� ���� �ڷ���
/*

*/
#pragma endregion

// ����ü ���� ���

// Family�� �������� ����.
struct tagFamily // �߻�ȭ �� ��
{
	const char* name;
	int age;
	int height;
	float weight;
	bool wedding;
};

// Player�� ������ü�� �߻�ȭ�� �� �Ǵ��� ��ߵ�
struct tagPlayer // �߻�ȭ �� ��
{
	int hp;
	int mp;
	int att;
	int def;
	float speed;
};

struct tagUnit // �߻�ȭ ��
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

// Ŭ������ ���� ������ �͸��� ���䵵 �߰��� �ȴ�.
// �� ��, �ش� ������� ����� �������� �ĺ��� �� �ִ� �̸��� ��������
// �ʱ� ������ ���� ����ȭ ��Ű�� ���� �Ұ�
// �� �̷��� ��Ģ�� �ٸ� ����� ���� �ڷ������� ������ �ȴ�.
enum
{
	UNIT_SIZE = 5
};

// ���� ������ ���� ��쿡�� �Ϲ��� ����ȯ�� �Ͼ�⿡ ���������
// enum class ���� ��쿡�� Ÿ���� ��������� �Ѵ�.
// ���� ���� + �޸� ����
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

