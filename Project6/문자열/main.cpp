#pragma warning(disable: 4996)

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[] = "abc";
	cout << str << endl;
	for (int i = 0; i < sizeof(str); i++)
		cout << str[i];
	cout << endl;
	cout << "Size: " << sizeof(str) << endl; // size�� 4�� ���´�.

	cout << "����ȯ �Ͽ� ���" << endl; // size�� 4�� ���´�.

	for (int i = 0; i < sizeof(str); i++)
		cout << int(str[i]);
	cout << endl;

	cout << "strlen: " << strlen(str) << endl; // size�� 3 ���´�.

	// str�� ��������  null ���ڰ� �ִ�.

	str[1] = 0;
	cout << "Sizeof: " << sizeof(str) << endl; // size�� �״�� 4�� ���´�.
	cout << "strlen: " << strlen(str) << endl; // strlen�� null�� �������� ũ�Ⱑ ������ ��. �׷��� 1�� ���´�. 

	str[3] = 'd';
	cout << "str: " << str << endl; // �쿬�� ���ڿ� �� null���ڰ� ���ö����� ����Ѵ�.

	//** �߿��� ����, ���ڿ��� ���� null ���� �̴�. (null ���ڷ� ������.)

	char str0[] = "hello";
	char str1[] = "hello";
	// ������ ��

	cout << "���ڿ� ������ ��" << endl;
	if (str0 == str1)// str0�� str1�� �ּҰ��� ���ͼ� false��.
		cout << "true" << endl; 

	int result = strcmp(str0, str1); // string compare
	cout << "str compare: (������ 0)  "<<result << endl;

	char str2[100];
	char str3[] = "hellO";

	// strcpy(str0, str3); // �׳� �ϸ� �����̽��� �ȵǼ� #pragma warning(disable: 4996) �������.
	// cout << "str copy: " << str2 << endl; //�ٵ� �ȵǳ� ����?


	char str4[] = "Hello";
	char str5[] = "wrold";

	// strcat(str4, str5);
	// cout << "strcat: " << str5 << endl;

	char str60[] = "12";
	int num = atoi(str60);
	cout << "a to integer :" << num << endl;


	// ���ڿ� �Է�
	char str7[6];
	// cin >> str7; // �׳� cin�ϸ� ������.
	cin.getline(str7, 6); // �� ���ڿ� ũ�� ��ŭ ����.
	cout << str7;


}