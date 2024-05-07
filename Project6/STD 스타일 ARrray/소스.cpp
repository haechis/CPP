#include<iostream>
#include<array>

using namespace std;

// C++ 스타일의 array.

int main()
{
	// 선언 방법
	array<int, 5> arr0;
	
	cout << arr0[1] << endl; // 쓰레기값.

	array<int, 5> arr2{};
	cout << arr2[0] << endl; // 0으로 초기화

	array<int, 5> arr3{ 1,2,3 }; // 나머지는 0으로 초기화

	array<int, 5> arr{ 1,2,3 };
	// cout << arr[-1] << endl;
	// cout << arr[10] << endl;
	cout << arr.at(0) << endl;
	cout << arr.at(1) << endl;

	// 범위를 벗어나는 것을 명확하게 알려줌
	//cout << arr.at(-1) << endl; 

	// 사이즈를 더 쉽게 구할 수 있음.
	cout << arr.size() << endl;

	int arrArray[] = { 1,2,3 };
	cout << sizeof(arrArray) / sizeof(int) << endl;

	cout << arr.front() << " " << arr[0] << endl;
	cout << arr.back() << " " << arr[arr.size() - 1] << endl;

	// 길이는 무조건 지정해야함.
	array<int, 5> ar0{ 1,2,3,4,5 };
	array<int, 5> ar1{ 5,4,3,2,1 };

	for (int i = 0; i < ar0.size(); i++)
		cout << ar0[i];
	cout << endl;

	for (int i = 0; i < ar1.size(); i++)
		cout << ar1[i];
	cout << endl;

	// Swap 쉽게 가능
	ar0.swap(ar1);
	for (int i = 0; i < ar0.size(); i++)
		cout << ar0[i];
	cout << endl;

	for (int i = 0; i < ar1.size(); i++)
		cout << ar1[i];
	cout << endl;

	// Assign 쉽게 가능 (같은 길이의 배열끼리)
	ar0 = ar1;
	for (int i = 0; i < ar0.size(); i++)
		cout << ar0[i];
	cout << endl;

	for (int i = 0; i < ar1.size(); i++)
		cout << ar1[i];
	cout << endl;

	// 같은 길이의 배열끼리 크기연산도 가능함.


}