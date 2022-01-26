#include <iostream>

int square(int a) 
{
	return a*a;
}

double square(double a)
{
	return a*a;
}



int main(){
	// 가능.
	square(3);
	square(3.5);
}


template<typename T>
T square(T a) {
	return a * a;
}

// 템플릿 생성
// 소스 코드를 컴파일 할 때 어떤 타입의 함수가 필요한지 조사하여 실제 함수 생성
template<typename T>
T square(T a) {
	return a * a;
}

square(3); // 3은 int이므로 square 템플릿의 T를 int로 변환 생성