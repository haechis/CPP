// 객체지향 프로그래밍 - Stack 이용.
#include <iostream>

// 1. 전역변수와 함수를 사용한 Stack.
int buff[10] = { 0 }; // buff 원소 모두 0으로 초기화.
int idx = 0;

void push(int v)
{
	buff[idx++] = v;
}

int pop()
{
	return buff[--idx];
}

int main()
{
	push(10); // buff[0] = 10
	push(20); // buff[1] = 20

	std::cout << pop() << std::endl; // 20
	std::cout << pop() << std::endl; // 10
}