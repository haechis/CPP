#include<iostream>

using namespace std;

int main()
{
	int num0 = 10;
	int& num1 = num0; // num1�� num0�� ���۷���
	int* num2 = &num0; // ������ ���� ���

	cout << num0 << " " << num1 << endl; // num1�� 10�� ����.
	cout << "*num2: " << *num2 << endl; //
	cout << "�����ʹ� �������� ������ ����: *num2" << endl;

	// ���⼭ ������ �ٲ㺸��.
	num0 = 20;
	cout << num0 << " " << num1 << endl; // num1�� 10�� ����.
	cout << "*num2: " << *num2 << endl; // �� 20�� ����.

	num1 = 30;
	cout << "3��°" << endl;
	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl;

	*num2 = 40;
	cout << "4��°" << endl;
	cout << num0 << endl;
	cout << num1 << endl;
	cout << *num2 << endl;

	// num1���� �׻� �ʱ�ȭ�� �ʿ���. �����ϴ� ����� �־�� ��.
	// ������ ����ϸ� ����ó�� ����� �����ؼ� �������� ���� ���� �� ����.



}