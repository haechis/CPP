#include<iostream>

using namespace std;

int main()
{
	int n; // 지역 변수

	{
		int num; // 블록 안에 있는 지역 변수는
	}

	// 블록 밖에서 사용 못함
	// num

	for (int i = 0; i < 3; i++)
	{
		static int num=0; //static을 붙이면, 메모리 핟랑과 해제가 정적임. 
		// 프로그램이 시작될 때 할당되고, 종료될 때 해제된다.
		// 그래서 num 정보가 그대로 인 것임.
		++num;
		cout << endl;
	}

	// new 이용하여, 동적 메모리할당
	// 특정 영역에 메모리 할당하고, 그 메모리의 주소를 리턴한다.
	// 항상 포인터로 정의해야 함.
	int* pNum = new int;
	*pNum = 1;
	delete pNum; // 항상 사용하고 나서는 해제를 해야함.
	// 그렇지 않으면 메모리가 계속 늘어남!

}