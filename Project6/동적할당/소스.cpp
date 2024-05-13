#include<iostream>

using namespace std;

/*
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
	// -> 메모리 누수.
	int* pNum0 = new int(123);
	int* pNum1 = pNum0;

	cout << *pNum0 << endl; // 123
	delete pNum0;

	cout << *pNum0 << endl; // ?
	//  출력이 안됨. 
	cout << *pNum1 << endl; // 이것도 쓰레기값이 나옴.
	// pNum1이 똑같은 주소를 참조하므로,

	delete pNum0; // 또 지울수있음. 유효하지 않은 포인터를 지우는 것, -> 굉장히 주의해야 함.!!




}
*/

/*
int main()
{
	int* pNum;
	{
		int n = 10;
		pNum = &n;
	}
	// n은 이미 {} 안에서 해제가 되었음.
	// 블록 밖에서 포인터를 사용하면 위험할 수 있음.
	cout << *pNum << endl;
}
*/
struct Person
{
	float weight;
	float height;
};


int main()
{
	// 동적 배열
	const int s = 10;
	int arr[s] = { 1,2,3 };

	// 이런 건 안됐음.
	/*
	int s;
	cin >> s;
	int arr[s] = { 1,2,3 }
	*/

	// 동적할당을 사용하면 가능함!
	int num;
	cout << "숫자 입력하시오" << endl;
	cin >> num;
	int* arr0 = new int[num];
	arr0[0] = 1;
	cout << arr0[0] << endl;

	delete[] arr0;

	// 구조체
	Person* person = new Person{ 74.1f, 180.2f };
	cout << person->weight << endl;
	cout << (*person).height << endl; // 표현 방법 두 개임.

	// person 여러명 만들려면 이렇게도 가능함.
	Person* per = new Person[10];
	for (int i = 0; i < 10; i++)
	{
		per[i].height = i * 10;
		cout << per[i].height << endl;
		// cout << per[i]->weight << endl;
	}
	
	delete[] per;
	delete person;
	

}