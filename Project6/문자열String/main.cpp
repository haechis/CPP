#include<iostream>
#include<string> // string ����Ϸ��� string header�� include �ؾ� ��.

using namespace std;

int main()
{

	// std::string���� ��� ����!

	string str = "abcd";
	cout << "String ���" << endl;
	cout << str << endl;
	cout << str[0] << endl;
	
	string strCin;
	cout << "string �Է��Ͻÿ�.\n";
	cin >> strCin; // �����ϰ� �Է��� ���� �� ����.
	cout << strCin << endl;

	string str0("abc");
	string str1("abc");

	if (str0 == str1)
		cout << " ������ ���� �񱳰� �ſ� ��������." << endl;

	str0 = str0 + str1; // ���ڿ� ��ġ�⵵ �ſ� ������. // str0 +=str1

	int result = strcmp(str0.c_str(), str1.c_str());
	cout << result << endl; // 0 ����.

	cout << "string �� size ���" << endl;
	cout << str0.size() << endl;
	cout << str1.length() << endl;

	// ��ȯ �Լ� to_string().
	cout << "string���� ��ȯ: to_string() ��ȯ �Լ� ���" << endl;
	string str2 = to_string(123);
	string str3 = to_string(123.4);
	string str4 = to_string(true);
	cout << str2 << str3<<str4<< endl;

	// string�� int�� ��ȯ
	cout << "string�� int������ ����ȯ" << endl;
	int num = stoi("1");
	cout << num << endl;


	// getline Ȱ��
	string String_Getline_cin;
	
	cout << "string �Է��Ͻÿ�." << endl;
	// ���⵵ �� �Է��� ��.
	std::getline(cin, String_Getline_cin);

	
	


	








}