#include<iostream>

using namespace std;

union Union
{
	// Union 내 i,f,d 는 같은 주소를 공유하므로,
	// i,f,d의 메모리 주소는 같음.
	int i;
	float f;
	double d;
};

int main() {
	// 포인터(Pointer): 메모리 주소를 가리키는 변수
	 
	int num = 147;
	
	int* pointer = &num; // &num: num의 주소를 가리킴. (&: 단항연산자 사용 시 주소를 가리킴)

	cout << num << endl;
	cout << "num의 주소: "<< pointer << endl;

	// 주소값을 이용하여 주소에 있는 값을 가져와보자.

	//
	cout << "포인터로 변수에 접근 (역참조) : " << *pointer << endl;

	// 역참조 이용해서, 주소에 있는 값을 바꿀 수도 있음.
	*pointer = 100;
	cout << num << endl;
	cout << "주소는 그대로임"<< pointer << endl; //주소는 그대로임

	int* pNum0 = &num;
	int* pNum1 = &num;
	int* pNum2 = pNum0;

	cout << num << endl; // 예상: 100
	cout << pNum0 << endl; // 예상: num의 주소 
	cout << pNum1 << endl; // 예상: num의 주소
	cout << pNum2 << endl; // 예상: num의 주소

	cout << num << endl; // 예상: 100
	cout << *pNum0 << endl; // 예상: 100
	cout << *pNum1 << endl; // 예상: 100
	cout << *pNum2 << endl << endl; // 예상: 100

	int* pNum3 = 0;
	cout << pNum3 << endl;
	// cout << *pNum3 << endl; // 잘못된 참조로 인해 오류 발생 가능, 우연히 16진수 유효한 주소를 사용할 수 있음, 주의해야 함.

	// int 로 선언하는 이유는, 가리키는 주소에 저장된 값을 어떻게 취급할 것인지 결정하기 위함!
	// 예) -> Union 
	Union u;
	// int* ip = &u; // 안됨.
	int* ip = (int*)&u.i;
	float* fp = (float*)&u;
	double* dp = (double*)&u;

	u.i = 1;
	u.f = 1.f;
	u.d = 1.;

	cout << *ip << endl;
	cout << *fp << endl;
	cout << *dp << endl;

	cout << &u.i << endl;
	cout << &u.f << endl;
	cout << &u.d << endl;


	// 포인터에 상수 넣기
	const int numC = 10;
	// numC = 1 // 변경 못함.
	int numC_test = 10;
	const int* pNumC = &numC_test;

	// *pNumC = 1; 포인터 역참조를 이용해서, const int 변수르값을 변경 못함!

	int* const pN = &num; // pN 못바꿈.


}