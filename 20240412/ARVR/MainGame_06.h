#pragma once

using namespace std;

#pragma region 알고리즘 + 자료구조
// 노션정리
#pragma endregion

#pragma region STL vector + iterator
// 노션정리
#pragma endregion

#pragma region Sequnce List 순차 리스트
// 노션정리
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
	//vector<MainGame_06*> _mg; // 벡터를 사용했을때 가장 이상적인 방법
	std::vector<int> _vNumber; // 정수형 벡터
	std::vector<int>::iterator _viNumber; // 정수형 벡터 반복자
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

