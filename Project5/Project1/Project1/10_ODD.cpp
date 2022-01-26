// ��ü���� ���α׷��� - Stack �̿�.
#include <iostream>

// 1. ���������� �Լ��� ����� Stack.
int buff[10] = { 0 }; // buff ���� ��� 0���� �ʱ�ȭ.
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