#include<iostream>

using namespace std;

/*
enum Color
{
	// enum 내의 값은 상수임.!!
	Red, Green, Blue
	// Red = 0, Green = 1, Blue = 2 와 같음.
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

	// constant 변수 사용하여 명확하게 확인 가능
	cout << "Red: " << colors[red] << endl;
	cout << "Green: " << colors[green] << endl;
	cout << "Blue: " << colors[blue] << endl;

	// enum 사용하여 명확하게 확인 가능
	cout << "Red: " << colors[Red] << endl;
	cout << "Green: " << colors[Green] << endl;
	cout << "Blue: " << colors[Blue] << endl;
	int avg0 = (colors[Red] + colors[Green] + colors[Blue]) / 3;
	cout << "평균: "<<avg0 << endl;

	//평균을 좀 더 일반화하여 구할 수도 있음.
	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		total += colors[i];
	}
	cout << "평균: " << total / 3 << endl;

	// 구조체 활용도 가능함.
	ColorStruct cs = { 255, 128, 64 };
	int avg = (cs.red + cs.green + cs.blue) / 3;
	cout << "평균: " << avg << endl;

	// enum은 다음과 같이 활용이 가능함.
	int Tot = 0;
	int newColors[SIZE] = { 255, 128, 64 }; // alpha는 초기화하지 않아서 0임.
	for (int i = 0; i < SIZE; i++)
	{
		Tot += newColors[i];
	}
	cout << "평균: " << Tot / 3 << endl;


	

}
*/


// *bit-wise 연산자에 사용해봅시다.
enum TextAttribute
{
	// 2의 제곱수로 설정
	Bold = 1,
	Underline = 2,
	Italic = 4,
	Strikethrough = 8
};

// 범위가 있는 열거형을 통해, enum 내의 const를 여러 enum에서 사용할 수 있게 되었음.
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
	int textAttrs = 0; // 텍스트의 속성을 저장
	textAttrs |= Bold; // or 연산자 활용하여, 텍스트 속성을 bold로 설정하였음.
	textAttrs |= Underline; // or 연산자 활용하여, 텍스트 속성에 밑줄 추가
	if (textAttrs & Underline)
		cout << "텍스트 속성에 Underline 되어 있음." << endl;
	if (!(textAttrs & Italic))
		cout << "텍스트 속성에 Italic 없음." << endl;

	cout << "텍스트 속성 출력" ;
	cout << textAttrs << endl; // 0011

	// 다음과 같이 범위 지정 연산자 사용 가능
	textAttrs |= TextAttribute::Bold;


	// Scoped enumerate는 형변환 가능
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
	// 아래와 같이 불편하게 보이지만, 더 안전하고 명확하게 사용이 가능 함.
	int colors[(int)Color::SIZE] = { 255,128,64 }; // 이렇게 써야 함!
	colors[(int)Color::Red];

	cout << Red << endl;
}