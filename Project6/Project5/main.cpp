#include <iostream>

using namespace std;

int main()
{
	/*
	do // ���ѷ���
	{
		cout << 1 << endl;
	} while (true);
	*/

	// goto ���� �Ϲ������� ��õ���� ����.
	// ���� �����ؾ� ��.
/*
go: // ���ѷ���
		cout << 1 << endl;
		goto go;
		*/
	int num = 5;
	do
	{
		if (num % 3 == 0)
			break;
		if (num % 5 == 0)
			break;
		cout << "Can not be divided by 3 and 5" << endl;
	} while (false);
	cout << "Break down" << endl;

	if (num % 3 == 0)
		goto go;
	if (num % 5 == 0)
		goto go;
	cout << "Can't divide 3 and 5" << endl;

go:
	cout << "abcdefg" << endl;


	cout << " ���丮�� ����� ���� ���� n�� �Է��Ͻÿ� (��: 5)\n";
	cin >> num;

	int total = 1;

multiply:
	total *= num;
	if (--num >= 1)
		goto multiply;

	cout << total << endl;


	char ch = 'a';

go_char: 
	cout << ch;
	if (++ch <= 'z')
		goto go_char;


	// �Ǻ���ġ ����
	// 0 1 1 2 3 5 8 13 21
	// a(0) = 0, a(1) = 1
	// a(n) = a(n-2) + a(n-1)
	cout << "\n�Ǻ���ġ ������ ���� ���� n�� �Է��Ͻÿ�\n";
	cin >> num;

	if (num <= 1)
		cout << num << endl;
	else
	{
		int prevValue = 0;
		int currValue = 1;
	add:
		int nextValue = prevValue + currValue;
		prevValue = currValue;
		currValue = nextValue;
		if (--num - 1)
			goto add;
		cout << currValue << endl;

	}




}