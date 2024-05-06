#include<iostream>

using namespace std;

/*
enum Color
{
	// enum ���� ���� �����.!!
	Red, Green, Blue
	// Red = 0, Green = 1, Blue = 2 �� ����.
};

struct ColorStruct
{
	int red;
	int green;
	int blue;
};

enum ColorEnum
{
	Red2, Green2, Blue2, Alpha2, SIZE
};


int main()
{
	// 0: Red, 1: Green, 2: Blue
	int colors[3] = { 255, 128, 64 };

	const int red = 0;
	const int green = 1;
	const int blue = 2;

	// constant ���� ����Ͽ� ��Ȯ�ϰ� Ȯ�� ����
	cout << "Red: " << colors[red] << endl;
	cout << "Green: " << colors[green] << endl;
	cout << "Blue: " << colors[blue] << endl;

	// enum ����Ͽ� ��Ȯ�ϰ� Ȯ�� ����
	cout << "Red: " << colors[Red] << endl;
	cout << "Green: " << colors[Green] << endl;
	cout << "Blue: " << colors[Blue] << endl;
	int avg0 = (colors[Red] + colors[Green] + colors[Blue]) / 3;
	cout << "���: "<<avg0 << endl;

	//����� �� �� �Ϲ�ȭ�Ͽ� ���� ���� ����.
	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		total += colors[i];
	}
	cout << "���: " << total / 3 << endl;

	// ����ü Ȱ�뵵 ������.
	ColorStruct cs = { 255, 128, 64 };
	int avg = (cs.red + cs.green + cs.blue) / 3;
	cout << "���: " << avg << endl;

	// enum�� ������ ���� Ȱ���� ������.
	int Tot = 0;
	int newColors[SIZE] = { 255, 128, 64 }; // alpha�� �ʱ�ȭ���� �ʾƼ� 0��.
	for (int i = 0; i < SIZE; i++)
	{
		Tot += newColors[i];
	}
	cout << "���: " << Tot / 3 << endl;


	

}
*/


// *bit-wise �����ڿ� ����غ��ô�.
enum TextAttribute
{
	// 2�� �������� ����
	Bold = 1,
	Underline = 2,
	Italic = 4,
	Strikethrough = 8
};

// ������ �ִ� �������� ����, enum ���� const�� ���� enum���� ����� �� �ְ� �Ǿ���.
// scoped enumerate
enum struct TextA
{
	Bold = 1
};
enum struct Circle
{
	Bold = 1
};

/*
int main()
{
	int textAttrs = 0; // �ؽ�Ʈ�� �Ӽ��� ����
	textAttrs |= Bold; // or ������ Ȱ���Ͽ�, �ؽ�Ʈ �Ӽ��� bold�� �����Ͽ���.
	textAttrs |= Underline; // or ������ Ȱ���Ͽ�, �ؽ�Ʈ �Ӽ��� ���� �߰�
	if (textAttrs & Underline)
		cout << "�ؽ�Ʈ �Ӽ��� Underline �Ǿ� ����." << endl;
	if (!(textAttrs & Italic))
		cout << "�ؽ�Ʈ �Ӽ��� Italic ����." << endl;

	cout << "�ؽ�Ʈ �Ӽ� ���" ;
	cout << textAttrs << endl; // 0011

	// ������ ���� ���� ���� ������ ��� ����
	textAttrs |= TextAttribute::Bold;


	// Scoped enumerate�� ����ȯ ����
	int sum = int(TextA::Bold) + int(Circle::Bold);

}
*/

enum struct Color
{
	Red, Green, Blue, SIZE
};
enum Color_Test : int64_t
{
	Red = 1000000000
};

int main()
{
	// �Ʒ��� ���� �����ϰ� ��������, �� �����ϰ� ��Ȯ�ϰ� ����� ���� ��.
	int colors[(int)Color::SIZE] = { 255,128,64 }; // �̷��� ��� ��!
	colors[(int)Color::Red];

	cout << Red << endl;
}