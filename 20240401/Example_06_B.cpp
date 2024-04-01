#include <iostream>
#include <time.h>
#include <random>

using namespace std;


void main()
{
	// 랜덤 시드 초기화
	srand(time(NULL));

	int damage = (rand() % 10) + 1;

	cout << "대미지: " << damage << endl;

	for (int i = 0; i < 10; i++)
	{
		printf("%d \t", rand());
	}

	// 셔플
	// 게임에서 셔플은 데이터를 섞는 행위
	// <algorithm> 헤더파일이 존재한다. -> 추천하지 않음
	int num[10];
	int dest, sour, temp; // 시작점 도착점 임시값

	for (int i = 0; i < 10; i++)
	{
		num[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl << endl;
	}

	for (int i = 0; i < 100000; i++)
	{
		dest = rand() % 10;	// dest 값에 0~9까지의 정수값을 무작위로 대입
		sour = rand() % 10; // sour 값에 0~9까지의 정수값을 무작위로 대입

		temp = num[dest];
		num[dest] = num[sour];
		num[sour] = temp;
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] = " << num[i] << endl;
	}

	//star_marker@naver.com


}