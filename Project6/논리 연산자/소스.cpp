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

	// 연산자 우선순위를 명시화 하기 위해 괄호를 적극 활용 하였다.
	if ( (num0 == num1) && (num2 != num3))
		cout << "다 true" << endl;


	// 2) ||
	cout << (true || true) << endl; // ture
	cout << (true || false) << endl; // true
	cout << (false || true) << endl;  // true
	cout << (false || false) << endl; // false

	if ((num0 == num1) || (num2 == num3))
		cout << "OR" << endl;


	// 3) !
	if (!(num0 != num1))
		cout << "!" << endl;

	// result가 boolean이 아닌경우
	cout.setf(ios_base::boolalpha);
	cout << !10 << endl;
	cout << !(2 && 1) << endl;

}