// Visual Studio에서는 '프로젝트에서 제외' 사용하여 컴파일 하였음.

#include<iostream>

int main() {
	int A = 0, B = 0;

	std::cin >> A >> B;

	std::fixed;
	std::cout.precision(12);


	std::cout << long double(A) / long double(B);

	return 0;
}