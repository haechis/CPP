// Visual Studio������ '������Ʈ���� ����' ����Ͽ� ������ �Ͽ���.

#include<iostream>

int main() {
	int A = 0, B = 0;

	std::cin >> A >> B;

	std::fixed;
	std::cout.precision(12);


	std::cout << long double(A) / long double(B);

	return 0;
}