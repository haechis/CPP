#include <stdio.h>
#include <cstdio>

int main()
{
	printf("hello\n");
	// std::printf("hello\n"); // -> error!
	// #include <cstdio> �� �ϸ� ����!

	std::printf("hello\n");
	// C++������ C���� �޸�, 
	// ��� ���Ͽ��� ������ �̸� �տ� 'c'�� ���̰�
	// '.h'�� �����Ѵ�.

	// ��)
	//<stdio.h> -> <cstdio>
	// <cstdlib> ��� <cstring>
}