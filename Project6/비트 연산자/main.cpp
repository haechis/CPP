#include <iostream>

using namespace std;

int main()
{
	// 비트 연산자에는 여섯가지가 있다.
	// (1) ~, (2) &, (3) |, (4) ^, (5) >>, (6) <<

	// (1) ~ : Not 연산자, 
	// 0을 1로, 1을 0으로 바꿔주는 연산자
	int num = 0;
	cout << ~num << endl;
	// 위는,
	// 00000000000000000000000000000000 = 0
	// ~(00000000000000000000000000000000) = (11111111111111111111111111111111)
	// 11111111111111111111111111111111 -> twos complement -> 00000000000000000000000000000000 + 1
	// = 00000000000000000000000000000001 ==> 2의 보수를 취한값이 1이므로, 
	// ==> -1
	// 즉, ~0 = -1

	unsigned int num2 = 0;
	cout << ~num2 << endl;
	// ~(00000000000000000000000000000000) = 11111111111111111111111111111111 = 2^(32) - 1

	
	// (2) &
	// 1 & 1 == 1
	// 1 & 0 == 0
	// 0 & 1 == 0
	// 0 & 0 == 0
	cout << "\n& 연산자" << endl;
	int num2_0 = 5;
	int num2_1 = 10;
	int result = num2_0 & num2_1;
	cout << result << endl;
	// 00000101 & 00001010 == 00000000
	cout << (5 & 11) << endl; // 00000101 & 00001011

	// (4) |: Or 연산자
	// ture || true == true
	// true || false == true
	// false || true == true
	// false || false == false
	// 1 || 1 == 1
	// 1 || 0 == 1
	// 0 || 1 == 1
	// 0 || 0 == 0

	uint32_t attendanceBook = 0u;
	// attendanceBook = 00000000000000000000000000000000
	// 하루 출석했다고 하면
	// 0000000000000001
	// 셋째날 출석하려면
	// 0000000000000001 + 0000000000000100 = 0000000000000101

	if (!(attendanceBook & (int)pow(2, 0)))// 첫쨰날에 출석을 안했으면
	{
		attendanceBook += (int)pow(2, 0); // 첫째날 출석으로 바꿔라
	}
	cout << attendanceBook << endl;
	
	// 다른 방법은.
	attendanceBook = 0u; // 변수 다시 선언
	attendanceBook |= (int)pow(2, 0); // 첫째날과 비교해서, 첫쨰날을 1로 만들어줌.
	cout << attendanceBook << endl;

	// 첫째날과 셋째날로 테스트
	attendanceBook = 0u; // 변수 다시 선언
	attendanceBook |= ((int)pow(2, 0)+ (int)pow(2,0+3-1)); // 첫째날, 셋째날을 1로
	cout << attendanceBook << endl; // 0101 = 5
	// 첫쨰날 출석이었어도 같은 결과를 낼 수 있음!
	attendanceBook = 1u; // 변수 다시 선언
	attendanceBook |= ((int)pow(2, 0) + (int)pow(2, 0 + 3 - 1)); // 셋쨰날을 1로 만들어줌.
	cout << attendanceBook << endl; // 0101 = 5

	// 이제는 결석은 어떻게 할까?
	// 00000000000000000000000000000101
	
	// 00000000000000000000000000000001 이거랑
	// 11111111111111111111111111111011 이거를 &

	attendanceBook = 5u;
	attendanceBook &= ~(int)pow(2, 2); // 11111111111111111111111111111011
	cout << attendanceBook << endl;

	// (4) XOR 연산: ^ , 다르면 1, 같으면 0
	// 1 ^ 1 == 0
	// 1 ^ 0 == 1
	// 0 ^ 1 == 1
	// 0 ^ 0 == 0
	int num_test5_0 = 5;
	int num_test5_1 = 10;
	// num_test5_0 = 00000101
	// num_test5_1 = 00001010
	cout << (num_test5_0 ^ num_test5_1) << endl; // 00001111 = 15

	attendanceBook = 0u;
	attendanceBook |= (int)pow(2, 0);
	cout << attendanceBook << endl;

	attendanceBook ^= (int)pow(2, 0);
	cout << attendanceBook << endl;

	attendanceBook ^= (int)pow(2, 0);
	cout << attendanceBook << endl;

	int a(1), b(3), c(2), d(1), e(2);
	cout << (a ^ b ^ c ^ d ^ e) << endl; // a^d -> 0, b^e -> 0, 3^0 -> 3

	// (5),(6) Shift 연산자
	// <<, >>
	cout << "\n Shift 연산자\n";
	cout << (1 << 3) << endl; // 00000001 ->00001000 , 숫자를 세 개 왼쪽으로 보냄. 

	// 값을 자르는 것을 조심해야 함.
	cout << (1 << 0) << endl;
	cout << (1 << 1) << endl;
	cout << (1 << 2) << endl;
	cout << (1 << 3) << endl;

	cout << (11 << 1) << endl;
	cout << (12 << 1) << endl; // 00001100 // 00011000 8 16
	// 10000001 같은 경우 10000001 << 1 하면 00000010 됨,,
	attendanceBook = 0u;
	cout << (attendanceBook |=(1<< 2));

	cout << (16 >> 1) << endl; // 8
	cout << (8 >> 1) << endl; // 4
	cout << (4 >> 1) << endl; // 2
	cout << (2 >> 1) << endl; // 1
	cout << (1 >> 1) << endl; // 0

	cout << (14 >> 1) << endl; // 7
	cout << (15 >> 1) << endl; // 7

}