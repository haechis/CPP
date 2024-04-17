#include <iostream>

using namespace std;

int main()
{
	cout << 1 + 2 << endl;
	// 연산자 우선순위에 따라 연산 수행 함.
	cout << 40 - 32 / 2 << " == " << 24;

	// 할당 연산자
	int i = 0;


	// 할당 연산자를 오른쪽에서부터 실행 함.
	int a, b, c;
	a = b = c = 10;

	int k(1); // c++ 스타일의 변수 선언

	int num = 0;
	cout << ++num << endl; // 변수를 1 증가

	int num2 = 0;
	cout << num2++<<endl; // 후위 연산자 , 출력을하고 연산을 함.

	// 나머지 연산자
	int num3 = 10;
	cout << num3 % 3 << endl;

	int num4 = 10;
	num4 += 5; //num4 = 15
	cout << num4 << endl;


	// 하나의 변수를 하나의 식에서 두 번 이상 변경할 때는 매우 주의해야 함.
	// undefined behavior라서, 컴파일마다 다른 결과가 나옴.
	num = 10;
	cout << ++num + num++ << endl; // 22
	cout << num << endl; // 12

	num = 10;
	printf("%d %d\n", ++num, num++); // 
	printf("%d \n", num);


}