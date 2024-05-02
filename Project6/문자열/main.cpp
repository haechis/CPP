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
	cout << "Size: " << sizeof(str) << endl; // size가 4가 나온다.

	cout << "형변환 하여 출력" << endl; // size가 4가 나온다.

	for (int i = 0; i < sizeof(str); i++)
		cout << int(str[i]);
	cout << endl;

	cout << "strlen: " << strlen(str) << endl; // size가 3 나온다.

	// str은 마지막에  null 문자가 있다.

	str[1] = 0;
	cout << "Sizeof: " << sizeof(str) << endl; // size가 그대로 4가 나온다.
	cout << "strlen: " << strlen(str) << endl; // strlen이 null을 만난순간 크기가 끝인줄 암. 그래서 1이 나온다. 

	str[3] = 'd';
	cout << "str: " << str << endl; // 우연히 문자열 중 null문자가 나올때까지 출력한다.

	//** 중요한 것은, 문자열의 끝은 null 문자 이다. (null 문자로 끝난다.)

	char str0[] = "hello";
	char str1[] = "hello";
	// 같은지 비교

	cout << "문자열 같은지 비교" << endl;
	if (str0 == str1)// str0와 str1의 주소값이 나와서 false임.
		cout << "true" << endl; 

	int result = strcmp(str0, str1); // string compare
	cout << "str compare: (같으면 0)  "<<result << endl;

	char str2[100];
	char str3[] = "hellO";

	// strcpy(str0, str3); // 그냥 하면 보안이슈가 안되서 #pragma warning(disable: 4996) 해줘야함.
	// cout << "str copy: " << str2 << endl; //근데 안되네 뭐임?


	char str4[] = "Hello";
	char str5[] = "wrold";

	// strcat(str4, str5);
	// cout << "strcat: " << str5 << endl;

	char str60[] = "12";
	int num = atoi(str60);
	cout << "a to integer :" << num << endl;


	// 문자열 입력
	char str7[6];
	// cin >> str7; // 그냥 cin하면 위험함.
	cin.getline(str7, 6); // 딱 문자열 크기 만큼 받음.
	cout << str7;


}