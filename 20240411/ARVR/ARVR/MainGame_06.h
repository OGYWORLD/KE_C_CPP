#pragma once

using namespace std;

#pragma region �˰��� + �ڷᱸ��
// �������
#pragma endregion

#pragma region STL vector + iterator
// �������
#pragma endregion

#pragma region Sequnce List ���� ����Ʈ
// �������
#pragma endregion


class MainGame_06
{
private:
	//vector<MainGame_06*> _mg; // ���͸� ��������� ���� �̻����� ���
	std::vector<int> _vNumber; // ������ ����
	std::vector<int>::iterator _viNumber; // ������ ���� �ݺ���

public:
	void printVector();
	inline void LinePrint() { cout << "=================" << endl; }


	MainGame_06();
	~MainGame_06();
};

