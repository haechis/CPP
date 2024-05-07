#include<iostream>
#include<array>

using namespace std;

// C++ ��Ÿ���� array.

int main()
{
	// ���� ���
	array<int, 5> arr0;
	
	cout << arr0[1] << endl; // �����Ⱚ.

	array<int, 5> arr2{};
	cout << arr2[0] << endl; // 0���� �ʱ�ȭ

	array<int, 5> arr3{ 1,2,3 }; // �������� 0���� �ʱ�ȭ

	array<int, 5> arr{ 1,2,3 };
	// cout << arr[-1] << endl;
	// cout << arr[10] << endl;
	cout << arr.at(0) << endl;
	cout << arr.at(1) << endl;

	// ������ ����� ���� ��Ȯ�ϰ� �˷���
	//cout << arr.at(-1) << endl; 

	// ����� �� ���� ���� �� ����.
	cout << arr.size() << endl;

	int arrArray[] = { 1,2,3 };
	cout << sizeof(arrArray) / sizeof(int) << endl;

	cout << arr.front() << " " << arr[0] << endl;
	cout << arr.back() << " " << arr[arr.size() - 1] << endl;

	// ���̴� ������ �����ؾ���.
	array<int, 5> ar0{ 1,2,3,4,5 };
	array<int, 5> ar1{ 5,4,3,2,1 };

	for (int i = 0; i < ar0.size(); i++)
		cout << ar0[i];
	cout << endl;

	for (int i = 0; i < ar1.size(); i++)
		cout << ar1[i];
	cout << endl;

	// Swap ���� ����
	ar0.swap(ar1);
	for (int i = 0; i < ar0.size(); i++)
		cout << ar0[i];
	cout << endl;

	for (int i = 0; i < ar1.size(); i++)
		cout << ar1[i];
	cout << endl;

	// Assign ���� ���� (���� ������ �迭����)
	ar0 = ar1;
	for (int i = 0; i < ar0.size(); i++)
		cout << ar0[i];
	cout << endl;

	for (int i = 0; i < ar1.size(); i++)
		cout << ar1[i];
	cout << endl;

	// ���� ������ �迭���� ũ�⿬�굵 ������.


}