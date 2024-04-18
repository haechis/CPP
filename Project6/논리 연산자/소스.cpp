// 세 가지 연산자가 있음.

#include <iostream>

using namespace std;

int main()
{
	// 1) &&
	cout << (true && true) << endl; // true
	cout << (true && false) << endl; // false
	cout << (false && true) << endl; // false
	cout << (false && false) << endl; // false
	
	int num0 = 10, num1(10);
	int num2 = 20, num3(30);
	if (num0 == num1 && num2 != num3)
		cout << "다 true" << endl;

}