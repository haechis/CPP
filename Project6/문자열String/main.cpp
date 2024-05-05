#include<iostream>
#include<string> // string 사용하려면 string header를 include 해야 함.

using namespace std;

int main()
{

	// std::string으로 사용 가능!

	string str = "abcd";
	cout << "String 출력" << endl;
	cout << str << endl;
	cout << str[0] << endl;
	
	string strCin;
	cout << "string 입력하시오.\n";
	cin >> strCin; // 유연하게 입력을 받을 수 있음.
	cout << strCin << endl;

	string str0("abc");
	string str1("abc");

	if (str0 == str1)
		cout << " 문저열 끼리 비교가 매우 직관적임." << endl;

	str0 = str0 + str1; // 문자열 합치기도 매우 간단함. // str0 +=str1

	int result = strcmp(str0.c_str(), str1.c_str());
	cout << result << endl; // 0 나옴.

	cout << "string 의 size 출력" << endl;
	cout << str0.size() << endl;
	cout << str1.length() << endl;

	// 변환 함수 to_string().
	cout << "string으로 변환: to_string() 변환 함수 사용" << endl;
	string str2 = to_string(123);
	string str3 = to_string(123.4);
	string str4 = to_string(true);
	cout << str2 << str3<<str4<< endl;

	// string을 int로 변환
	cout << "string을 int등으로 형변환" << endl;
	int num = stoi("1");
	cout << num << endl;


	// getline 활용
	string String_Getline_cin;
	
	cout << "string 입력하시오." << endl;
	// 띄어쓰기도 잘 입력이 됨.
	std::getline(cin, String_Getline_cin);

	
	


	








}