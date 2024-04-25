#include<iostream>

using namespace std;

// 삼항 연산자 / 조건 연산자

int num2 = 10;

int main()
{
	int num(10);
	int abs(num);
	if (abs < 0)
	{
		abs = -abs;
	}
	cout << abs << endl;

	// 삼항연산자 사용
	int abs2 = num < 10 ? -num : num;
	cout << "삼항연산자" << endl;
	// (A) ? (B) : (C) , (A)가 true면 B를 return 하고, false면 C를 return 한다.
	// ** (B)와 (C)의 return 값이 같아야 함.

	// 예제2 - 삼항연산자
	num = 0;
	num == 0 ? (cout << "num == 0") : (cout << "num !=0");
	cout << (num == 0 ? "num == 0" : "num !=0"); // 이게 되는 이유는 삼항연산자 내 리턴값이 같으므로

	num = 0;
	cout << sizeof(num) << endl;
	cout << sizeof(int) << endl;

	int num2 = 0;
	cout << "전역/지역 변수" << endl;
	cout << num2 << endl; //지역변수 리턴
	cout << ::num2 << endl;//전역변수 리턴
}