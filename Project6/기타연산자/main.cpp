#include<iostream>

using namespace std;

// ���� ������ / ���� ������

int num2 = 10;

int main()
{
	int num(10);
	int abs(num);
	if (abs < 0)
	{
		abs = -abs;
	}
	cout << abs << endl;

	// ���׿����� ���
	int abs2 = num < 10 ? -num : num;
	cout << "���׿�����" << endl;
	// (A) ? (B) : (C) , (A)�� true�� B�� return �ϰ�, false�� C�� return �Ѵ�.
	// ** (B)�� (C)�� return ���� ���ƾ� ��.

	// ����2 - ���׿�����
	num = 0;
	num == 0 ? (cout << "num == 0") : (cout << "num !=0");
	cout << (num == 0 ? "num == 0" : "num !=0"); // �̰� �Ǵ� ������ ���׿����� �� ���ϰ��� �����Ƿ�

	num = 0;
	cout << sizeof(num) << endl;
	cout << sizeof(int) << endl;

	int num2 = 0;
	cout << "����/���� ����" << endl;
	cout << num2 << endl; //�������� ����
	cout << ::num2 << endl;//�������� ����
}