#include<iostream>
#include<limits>

using namespace std;

int main()
{
	// 문자형.
	char ch = 'a';
	// char ch = "a"; -> 안됨. " " 내에 들어가는 것은 문자열임.
	cout << ch << endl;

	// ch는 내부적으로는 1byte 정수임. (0~ 255)
	char ch0 = 'a';
	char ch1 = 97;

	cout << "ch0: " << ch0 << endl;
	cout << "ch1: " << ch1 << endl;

	cout << "int ch0: " << int(ch0) << endl;
	cout << "int ch1: " << int(ch1) << endl;

	cout << char(97) << endl;

	cout << sizeof(ch0) << endl;


	// ASCII 코드: 7bit로 표현 가능한 문자표
	// 제어 문자표와 출력가능한 문자표로 구성 됨.
	cout << numeric_limits<uint8_t>::max() << endl; // 최대값은 255
	// uint8_t : 타입이 unsigned char 임.
	// ASCII 코드 255를 출력하는 것,, -> ASCII 코드표는 7비트가 최대이며, ASCII 코드표에는 실제로 126번까지 있음.
	cout << (int)numeric_limits<uint8_t>::max() << endl; // 최대값은 255

	// Escape sequence
	cout << "Hello World\n"; // 개행은 \n라는 escape sequence . ASCII 코드표 참조하면 됨.
	cout << "Hello World\t s";
	cout << endl;
	// 큰따옴표는 다음과 같이 표현 가능
	cout << " \"Hello World\"" << endl;

	// '\x숫자'는, 숫자의 16진수에 해당하는 ASCII 문자
	cout << "\x61" << endl;

	// 8진수는 x를 제외
	cout << "\141" << endl;



}