#include<iostream>

using namespace std;

int main() {
	// Union : �޸� ȿ�������� ����� �� �����.
	// ����, Union �Ⱦ��°��
	struct Product
	{
		int idType;
		int idInteger;
		int idChars[10];
	};

	// idChars �ʿ䰡 ���µ�, �޸� �ս��� �Ͼ.
	Product product = { 0,12 };
	if (product.idType == 0)
		cout << product.idInteger << endl;
	else
		cout << product.idChars << endl;

	// Union ���� ���

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
	
	Product1 product1 = { 0, {.chars = "chars"} }; //����Ȯ�� �ʿ�
	if (product1.idType == 0)
		cout << product1.id.integer << endl;
	else
		cout << product1.id.chars << endl;

	cout << "SiZE" << endl;
	cout << sizeof(product) << endl << sizeof(product1) << endl;
	cout << sizeof(ID) << endl;

	


	

}