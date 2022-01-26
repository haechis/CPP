#include<iostream>

void Call_by_Value(int n) {
	n++;
}
void Call_by_Ref(int& n) {
	n++;
}

int main()
{
	int n = 0; // integer의 메모리는 4byte

	// 1. reference 타입
	// 새로운 메모리 할당의 개념이 아님.
	// 기존 n의 메모리에 새로운 이름 r을 부여 한다.
	int& r = n; 

	r = 10;
	
	//2. r과 n은 결국 같은 메모리이므로 결국 n = 0이 된다.
	std::cout << n << std::endl; 
	
	// 3. r은 n의 alias(별칭)을 만드는 것과 같은 의미이고,
	// n과 r의 주소는 같은 것임을 확인이 가능하다.
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;

	// 4. reference는 반드시 초기값이 있어야 한다.
	// int& r2; // error!
	

	// 5. call by value.
	int n1 = 10;
	Call_by_Value(n);
	std::cout << n1 << std::endl;

	// 6. call by reference.
	// 구조체 등 변수 타입의 메모리가 큰 경우 call by reference를 사용하면
	// 함수 내부에서 복사본을 만들지 않아도 되므로 메모리 측면에서 유리하다!
	int n2 = 10;
	Call_by_Ref(n2);
	std::cout << n2 << std::endl;


}