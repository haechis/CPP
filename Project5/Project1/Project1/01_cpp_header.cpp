#include <stdio.h>
#include <cstdio>

int main()
{
	printf("hello\n");
	// std::printf("hello\n"); // -> error!
	// #include <cstdio> 를 하면 가능!

	std::printf("hello\n");
	// C++에서는 C언어와 달리, 
	// 헤더 파일에서 파일의 이름 앞에 'c'를 붙이고
	// '.h'를 제거한다.

	// 예)
	//<stdio.h> -> <cstdio>
	// <cstdlib> 대신 <cstring>
}