#pragma warning(disable: 4996)
#include<iostream>
#include <cstdio> // stdio.h �� include�ϴ� ��

using namespace std;

int main()
{
	// %d: ���Ĺ��ڿ�, format string
	printf("%d\n", 10);
	printf("%7.2f\n", 422.32);
	
	printf("%u\n", -1); // unsigned integer�� �ִ밪

	// % ���
	printf("%%n \n");

	freopen("output.txt","w",stdout); // stdout�� output.txt ���Ϸ� �����ؼ� 'w'rinte �ϴ� ��
	printf("Hello Wordl");
}
