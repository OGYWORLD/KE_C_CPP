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


struct STData
{
	int m_nValue;

	std::string m_oString;


};

class MainGame_06
{
private:
	// 1.
	//vector<MainGame_06*> _mg; // ���͸� ��������� ���� �̻����� ���
	std::vector<int> _vNumber; // ������ ����
	std::vector<int>::iterator _viNumber; // ������ ���� �ݺ���
	std::vector<int>::reverse_iterator _vriNumber;

public:
	void printVector();
	inline void LinePrint() { cout << "=================" << endl; }

	// 2. 
	void sampleVector(std::vector<int> ValueList);
	void sampleSTVector(std::vector<STData> ValueList);
	void practiceVector(void);



	MainGame_06();
	~MainGame_06();
};

