#include<iostream>

using namespace std;
int main()
{
	int num0 = 11;   // 10진수
	int num1 = 011;  // 8진수
	int num2 = 0b11; // 2진수 (binary)
	int num3 = 0x11; // 16진수 (Hex)

	cout << num0 << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// int: 일반적으로 32bit
	// 16bit 모델도 존재함
	// signed integer는 minus 표현 가능 , unsigned는 0부터 즉, minus 표현 못함.
	// short int는 16bit (2byte)
	// long long은 64bit 가능
	

	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;

	cout << sizeof(intNum) << endl;      // 4byte
	cout << sizeof(longNum) << endl;     // 4byte
	cout << sizeof(intPointer) << endl;  // 4byte

	// 중요한건 개발환경에 따라 변수의 size가 달라질 수 있음!
	// 이렇게 변수 길이가 중요할 때는 아래와 같이 변수 크기를 정의해야 함.(fixed width integer)
	int8_t int_size_check0 = 0;
	int16_t int_size_check1 = 0;
	int32_t int_size_check2 = 0;

	cout << sizeof(int_size_check0) << endl;  // 1byte
	cout << sizeof(int_size_check1) << endl;  // 2byte
	cout << sizeof(int_size_check2) << endl;  // 4byte

	// Type 변환없이 곧바로 정의하는 방법
	unsigned int a = 11u; // 11뒤에 u(unsigned)를 붙혀서 곧바로 unsigned integer로 선언함.
	long int long b = 0L; // u / L이 없으면 11, 0이 선언이 되고 unsigned 혹은 long으로 변환이되지만, 문자를 통해 곧바로 선언함.
	long long c = 0LL;
	unsigned long long d = 0LLu; //혹은 0uLL
	
	
	cout << "자료의 크기" << endl;
		
	// 8bit maximum = 255 = 2^(8) - 1 (b) 1111 1111
	// 16bit maximum = 65535 = 2^(16) - 1, (b) 1111 1111 1111 1111
	cout << (int)numeric_limits<uint8_t>::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;


	// < Singed > 
	// 음수의 경우 => 2의 보수를 활용 tows complement
	// 양수에서 2의 보수를 취한 값이 음수가 됨.

	cout << "자료의 크기: Signed" << endl;
	// 8 bit maximum = 127 = 2^(7) - 1 , (b) 0111 1111
	// 16bit maximum = 32767 = 2^(15) - 1, (b) 0111 1111 1111 1111
	cout << (int)numeric_limits<int8_t>::max() << endl;
	cout << numeric_limits<int16_t>::max() << endl;

	// 최소값!
	// 8 bit minimum = -128 , (b) 1000 0000 => 2의 보수 => (0111 1111) + 1 => 1000 0000 ==> -128
	// 16 bit minimum = -32768
	cout << "자료의 크기: Signed minimum" << endl;

	cout << (int)numeric_limits<int8_t>::min() << endl;
	cout << numeric_limits<int16_t>::min() << endl;


	// Overflow
	uint32_t num32 = numeric_limits<uint32_t>::max();
	uint32_t num32_1= num32 + 1;
	cout << "Overflow test" << endl;
	cout << num32 << endl;
	cout << num32_1 << endl;

	// Underflow
	uint32_t num32_min = numeric_limits<uint32_t>::min();
	uint32_t num32_min_1 = num32_min - 1;
	cout << "Underflow test" << endl;
	cout << num32_min << endl;
	cout << num32_min_1 << endl;


	return 0;
}