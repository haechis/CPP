#include<iostream>
#include<limits>

using namespace std;

int main()
{
	// ������.
	char ch = 'a';
	// char ch = "a"; -> �ȵ�. " " ���� ���� ���� ���ڿ���.
	cout << ch << endl;

	// ch�� ���������δ� 1byte ������. (0~ 255)
	char ch0 = 'a';
	char ch1 = 97;

	cout << "ch0: " << ch0 << endl;
	cout << "ch1: " << ch1 << endl;

	cout << "int ch0: " << int(ch0) << endl;
	cout << "int ch1: " << int(ch1) << endl;

	cout << char(97) << endl;

	cout << sizeof(ch0) << endl;


	// ASCII �ڵ�: 7bit�� ǥ�� ������ ����ǥ
	// ���� ����ǥ�� ��°����� ����ǥ�� ���� ��.
	cout << numeric_limits<uint8_t>::max() << endl; // �ִ밪�� 255
	// uint8_t : Ÿ���� unsigned char ��.
	// ASCII �ڵ� 255�� ����ϴ� ��,, -> ASCII �ڵ�ǥ�� 7��Ʈ�� �ִ��̸�, ASCII �ڵ�ǥ���� ������ 126������ ����.
	cout << (int)numeric_limits<uint8_t>::max() << endl; // �ִ밪�� 255

	// Escape sequence
	cout << "Hello World\n"; // ������ \n��� escape sequence . ASCII �ڵ�ǥ �����ϸ� ��.
	cout << "Hello World\t s";
	cout << endl;
	// ū����ǥ�� ������ ���� ǥ�� ����
	cout << " \"Hello World\"" << endl;

	// '\x����'��, ������ 16������ �ش��ϴ� ASCII ����
	cout << "\x61" << endl;

	// 8������ x�� ����
	cout << "\141" << endl;



}