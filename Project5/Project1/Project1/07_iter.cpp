#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// ranged for 구문
	for (int n : x)
		std::cout << n << std::endl;
	
	std::cout<<std::endl;
	// ranged for 구문 -> auto 사용 가능
	for (auto n : x)
		std::cout << n << std::endl;
}