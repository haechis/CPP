#include <iostream>

using namespace std;

int main()
{
	cout << 1 + 2 << endl;
	// ������ �켱������ ���� ���� ���� ��.
	cout << 40 - 32 / 2 << " == " << 24;

	// �Ҵ� ������
	int i = 0;


	// �Ҵ� �����ڸ� �����ʿ������� ���� ��.
	int a, b, c;
	a = b = c = 10;

	int k(1); // c++ ��Ÿ���� ���� ����

	int num = 0;
	cout << ++num << endl; // ������ 1 ����

	int num2 = 0;
	cout << num2++<<endl; // ���� ������ , ������ϰ� ������ ��.

	// ������ ������
	int num3 = 10;
	cout << num3 % 3 << endl;

	int num4 = 10;
	num4 += 5; //num4 = 15
	cout << num4 << endl;


	// �ϳ��� ������ �ϳ��� �Ŀ��� �� �� �̻� ������ ���� �ſ� �����ؾ� ��.
	// undefined behavior��, �����ϸ��� �ٸ� ����� ����.
	num = 10;
	cout << ++num + num++ << endl; // 22
	cout << num << endl; // 12

	num = 10;
	printf("%d %d\n", ++num, num++); // 
	printf("%d \n", num);


}