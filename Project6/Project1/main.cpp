// 부동 소수점.
// 부동 소수점은 컴퓨터 과학에서 사용되는 숫자 표현 방식 중 하나입니다. 부동 소수점은 실수를 표현하는 방법으로, 소수점을 고정된 위치에 두는 것이 아니라 소수점의 위치를 가수(mantissa)에 따라 조절하는 방식입니다. 이 방식을 사용하면 매우 큰 수나 매우 작은 수를 표현할 수 있습니다. 
// double , cloat으로 주로 사용.
#include <iostream>

using namespace std;
int main() 
{
	// 부동소수점은 실수를 표현
	// float: 32 bit , 지수부: 8, 가수부:23
	// double: 64 bit, 지수부: 11, 가수부: 52
	// long double: 64~128 bit
	float num0 = 1;
	double num1 = 1;
	long double num2 = 1;
	cout << sizeof(num0) << endl;
	cout << sizeof(num1) << endl;
	cout << sizeof(num2) << endl;
	// c++에서 실수는 double이 디폴트임.
	// float이나 long double 이용해서 형변환 하는꼴.
	cout << sizeof(1.0f) << endl;
	cout << sizeof(1.0) << endl;
	cout << sizeof(1.0L) << endl; // Long double
	//하지만 Integer와 마찬가지로 개발환경에 따라 달라짐.


	// 부동소수점 예시
	// 1. -118.625 일 경우
	//  -> 이진수, - (1110110.101)
	// -> -1.110110101 * 10e6(2)
	// 여기서, 
	// 부호 | 가수부 | 지수부 로 구분 됨.
	// 가수부의 경우, 0000 0000이 127을 나타냄. 
	// (가수부가 10의 음수 제곱일 경우를 대비해서)
	// 그래서, 10의 "6" 제곱의 경우, 127 + 6 = 133 이며,
	// 133 to binary = 1000 0101임.
	// 부호: 1 (음수)
	// 가수부: 1000 0101 (127 + 6)
	// 지수부: 110110101

	unsigned int a;
	float b = -118.625;
	memcpy(&a, &b, sizeof(b)); // b의 값을 a로 카피 한다. 메모리 상의 값을 직접 복사
	cout << a << endl; //a의 값을 binary 로 변환하면, 위에서 구한 값이 됩니다. 
	cout << b << endl;

	// 주의해야 할 점!! (굉장히 조심해야 함.)
	float num_A = 0.1f;
	float num_B = 0.02f * 5.0f;

	cout << "\n주의" << endl;
	cout << num_A << endl;
	cout << num_B << endl;

	if (num_A == num_B)
		cout << "Equal" << endl;
	else
		cout << "No Equal" << endl;

	cout.precision(64);
	cout << "\n정밀도 확인" << endl;
	cout << num_A << endl;
	cout << num_B << endl;

	if (num_A == num_B)
		cout << "Equal" << endl;
	else
		cout << "No Equal" << endl;

	// 10진수 0.1이나 0.02는 2진수로 표현할 수 없음.
	// 가장 근점한 숫자로 표현함.

	if (num_A == 0.1)
		cout << "Equal, 0.1f == 0.1" << endl;
	if (num_A == 0.1L)
		cout << "euqal, 0.1f == o.1L (long double)" << endl;
	// 부동 소수점은 사용을 지양하는 것이 좋다.
	// 보통 epsilon 사용하는 경우도 있음.
	// epsilon 사용하더라도, 오차가 누적되서 오류가 바생하는 경우
	float testA = 1.0f;
	float testB = 0.0f;
	for (int i = 0; i < 1000; i++) 
	{
		testB = testB + 0.001;
	}
	if (testA == testB) 
		cout << "equal, 1.0f = 0.001 * 1000" << endl;

	// 부동소수점 사용 시, 더하고 뺀 걸 인지 못하는 경우
	// 참고, 1.0의 메모리 구성: 0011 1111 1000 0000 0000 0000 0000 0000 = 1.0(2)
	// 1에서 더할 수 있는 가장 작은값: 0011 1111 1000 0000 0000 0000 0000 000"1"
	
	// 표현 가능한 가장 작은 값.
	// 127-23 (가수부 23자리를 빼주는거): 104의 binary -> 1101000
	// 00"11 0100 0"000 0000 0000 0000 0000 0000
	// = 1.0(2) * 10e(-24)(b)
	

	// 최대값을 구해보자.
	unsigned int flt_max = 0b01111111111111111111111111111111;
	float flx_max_tmp;
	memcpy(&flx_max_tmp, &flt_max, sizeof(flt_max));
	cout << flx_max_tmp << endl; //값이 이상함. 
	// 지수부가 다 1이면 Not A Number 임.
	// 지수부에서 1을 빼야함.
	unsigned int flt_max2 = 0b01111111011111111111111111111111;
	float flx_max_tmp2;
	memcpy(&flx_max_tmp2, &flt_max2, sizeof(flt_max2));
	cout << flx_max_tmp2 << endl; // 최대값

	// 지수부가 다 1이고, 가수부가 다 0이면 무한대
	unsigned int flt_max3 = 0b01111111100000000000000000000000;
	float flx_max_tmp3;
	memcpy(&flx_max_tmp3, &flt_max3, sizeof(flt_max3));
	cout << flx_max_tmp3 << endl; // 최대값

	// Minimum (Normalized 최소값)
	// Float Min: 0000 0000 1000 0000 0000 0000 0000 0000 (가수부에 최소값)
	// 10e(-126)(2)

	// Float True min
	// Float Min: 0000 0000 0000 0000 0000 0000 0000 0001 (지수부에 최소값)
	// 10e(-126(2) * 10(-23)(2) = 10e(-149)(2)
}