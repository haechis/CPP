#pragma warning(disable: 4996)
#include<iostream>
#include <cstdio> // stdio.h 를 include하는 것

using namespace std;

int main()
{
	// %d: 형식문자열, format string
	printf("%d\n", 10);
	printf("%7.2f\n", 422.32);
	
	printf("%u\n", -1); // unsigned integer의 최대값

	// % 출력
	printf("%%n \n");

	freopen("output.txt","w",stdout); // stdout을 output.txt 파일로 연결해서 'w'rinte 하는 것
	printf("Hello Wordl");
}
