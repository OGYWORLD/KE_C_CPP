#include <iostream>
#include <time.h>
#include <random>


using namespace std;

void main()
{
	// 디바이스 객체 생성 (무겁다)
	random_device oRandomDevice; // prefix - Object

	// 시드 설정 (난수 생성 엔진 초기화)
	mt19937_64 rnd(oRandomDevice);
	// 똑같은 랜덤값이 등장할 수 있지만 그건 디바이스 초기화 이후 재등장하는 것이기 때문에
	// 값은 고유하다고 할 수 있다.

	int RandomMin = 1;
	int RandomMax = 10;

	// 범위 설정 (정수 - int)
	uniform_int_distribution<int> range(RandomMin, RandomMax);

	// 범위 설정 (실수 - real)
	uniform_real_distribution<float> range(RandomMin, RandomMax);

	// 정규분포로 확률뽑기
	normal_distribution<double> range(RandomMin, RandomMax);

	cout << '\n';

	int RandomValue = range(rnd);

	cout << "추출값: " << RandomValue << endl;

	// time과 랜덤 디바이스의 차이
	int numberA = (oRandomDevice() % 10) + 1;
	int numberB = (oRandomDevice() % 10) + 1;

	int numberA = (rand() % 10) + 1;
	int numberB = (rand() % 10) + 1;








}