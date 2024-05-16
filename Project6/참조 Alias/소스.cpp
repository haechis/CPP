#include<iostream>

using namespace std;

int main()
{
	int num0 = 10;
	int& num1 = num0; // num1은 num0을 레퍼런싱
	int* num2 = &num0; // 포인터 선언 방법

	cout << num0 << " " << num1 << endl; // num1도 10이 나옴.
	cout << "*num2: " << *num2 << endl; //
	cout << "포인터는 역참조로 변수에 접근: *num2" << endl;

	// 여기서 변수를 바꿔보자.
	num0 = 20;
	cout << num0 << " " << num1 << endl; // num1도 10이 나옴.
	cout << "*num2: " << *num2 << endl; // 다 20이 나옴.

	num1 = 30;
	cout << "3번째" << endl;
	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl;

	*num2 = 40;
	cout << "4번째" << endl;
	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl;

	// num1ㅇ은 항상 초기화가 필요함. 참조하는 대상이 있어야 함.
	// 참조를 사용하면 변수처럼 사용이 가능해서 육안으로 보기 편할 수 있음.



}