#pragma warning(disable: 4996)
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int nums[] = { 1,2,3,4,5 };

	cout << "�迭 ����ϸ�, �ּҰ� ����" << endl;
	cout << nums << endl;

	int* pNums = nums;
	cout << pNums << endl;

	cout << sizeof(nums) / sizeof(int) << endl;
	
	// ������ ũ�⸦ ����ϹǷ�, int�� ũ���� 4�� ������ ����.
	cout << sizeof(pNums) << endl;


	cout << nums << endl;
	cout << &nums << endl;
	cout << &nums[0] << endl;
	// �迭�� �̸��� �迭�� 0��° ������ �ּҸ� �����Ѵ�.
	// �迭�� 0��° �ּ� �� �ƴ϶�, �����ʹ� ù��° ��ʼ��� �ּҰ��� Ÿ���� ���´�.

	// &nums�� Ÿ���� int�� 5���� Ÿ���̶�,
	// int* pNums = &nums ; // �̰��� ������ ���� ����.

	// �Ʒ����� ����ϸ� �� ��!
    // ���� �����̸�, �迭�� 0��° �ּҸ� �����Ѵ�.
	cout << nums << endl;
	cout << &nums[0] << endl;

	// �����Ϳ� �迭�� ������ Ȱ�� ����
	cout << pNums[0] << endl;
	cout << pNums[1] << endl;
	cout << pNums[2] << endl;

	// ������ �ּҸ� ����غ���
	cout << pNums << endl;
	cout << pNums + 1 << endl; // ������ Ÿ���� ������ ��ŭ ����.
	cout << pNums + 2 << endl;

	cout << *pNums << endl;
	cout << *(pNums + 1) << endl; // ������ Ÿ���� int�� ������ ����.
	cout << *(pNums + 2) << endl;

	cout << *nums << endl;
	cout << *(nums + 1) << endl; //����������, nums�� integer �������� �ּҰ��� ��ȯ�ϰ�, 1(integer, 4byte) ��ŭ �ּҸ� �� �� ���� ���� ����
	cout << *(nums + 2) << endl;


	// < �����Ϳ� ���ڿ�>
	char str0[100] = "abcd";
	char* str1 = str0;

	cout << str0 << endl;
	cout << str1 << endl;

	// �����ͷ� ���ڿ� ��ȯ �� const�� �ؾ� ��. (�� �ٲٰ�)
	const char* str2 = "hello";
	

	// ���ڿ� ����� Ÿ���� ����
	cout << typeid("hello").name() << endl; // hello �ټ� ���ڵڿ� null�� ������ 6�� ����.

	cout << strlen(str2) << endl;
	strcpy(str0, str2);

	cout << str0 << endl;
	cout << strcmp(str0, str2) << endl;
}