#include<iostream>

using namespace std;

int main() {
	// Union : 메모리 효율적으로 사용할 떄 쓰면됨.
	// 먼저, Union 안쓰는경우
	struct Product
	{
		int idType;
		int idInteger;
		int idChars[10];
	};

	// idChars 필요가 없는데, 메모리 손실이 일어남.
	Product product = { 0,12 };
	if (product.idType == 0)
		cout << product.idInteger << endl;
	else
		cout << product.idChars << endl;

	// Union 쓰는 경우

	union ID
	{
		int integer;
		char chars[10];
	};

	struct Product1
	{
		int idType;
		ID id;
	};
	
	Product1 product1 = { 0, {.chars = "chars"} }; //버전확인 필요
	if (product1.idType == 0)
		cout << product1.id.integer << endl;
	else
		cout << product1.id.chars << endl;

	cout << "SiZE" << endl;
	cout << sizeof(product) << endl << sizeof(product1) << endl;
	cout << sizeof(ID) << endl;

	


	

}