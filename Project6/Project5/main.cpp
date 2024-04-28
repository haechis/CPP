#include <iostream>

using namespace std;

int main()
{
	/*
	do // 무한루프
	{
		cout << 1 << endl;
	} while (true);
	*/

	// goto 문은 일반적으로 추천하지 않음.
	// 사용시 주의해야 함.
/*
go: // 무한루프
		cout << 1 << endl;
		goto go;
		*/
	int num = 5;
	do
	{
		if (num % 3 == 0)
			break;
		if (num % 5 == 0)
			break;
		cout << "Can not be divided by 3 and 5" << endl;
	} while (false);
	cout << "Break down" << endl;

	if (num % 3 == 0)
		goto go;
	if (num % 5 == 0)
		goto go;
	cout << "Can't divide 3 and 5" << endl;

go:
	cout << "abcdefg" << endl;


	cout << " 팩토리얼 계산을 위해 정수 n을 입력하시오 (예: 5)\n";
	cin >> num;

	int total = 1;

multiply:
	total *= num;
	if (--num >= 1)
		goto multiply;

	cout << total << endl;


	char ch = 'a';

go_char: 
	cout << ch;
	if (++ch <= 'z')
		goto go_char;


	// 피보나치 수열
	// 0 1 1 2 3 5 8 13 21
	// a(0) = 0, a(1) = 1
	// a(n) = a(n-2) + a(n-1)
	cout << "\n피보나치 수열을 위해 정수 n을 입력하시오\n";
	cin >> num;

	if (num <= 1)
		cout << num << endl;
	else
	{
		int prevValue = 0;
		int currValue = 1;
	add:
		int nextValue = prevValue + currValue;
		prevValue = currValue;
		currValue = nextValue;
		if (--num - 1)
			goto add;
		cout << currValue << endl;

	}




}