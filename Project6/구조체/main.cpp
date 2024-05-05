#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	struct EyeSight {
		float left; //4byte
		float right; //4byte
	};

	struct Person
	{
		// 총 28byte
		float height; //4byte
		float weight; //4byte
		char name[10]; //10byte
		short grade; //2byte

		EyeSight eyesight; //8byte

	};
	Person man1;
	man1.height = 174.2;
	man1.weight = 67.8;

	man1.grade = 1;
	// man1.name = "David";
	strcpy_s(man1.name, 10, "David");


	cout << man1.height << endl;
	cout << man1.weight << endl;
	cout << man1.name << endl;
	cout << man1.grade << endl;

	// 초기화 가능.
	Person man2 = { 180, 70, "Lee",1 ,{1.2f, 1.0f} };
	
	cout << man2.height << endl;
	cout << man2.weight << endl;
	cout << man2.name << endl;
	cout << man2.grade << endl;
	cout << man2.eyesight.left << endl;
	cout << man2.eyesight.right << endl;
	
	// struct는 메모리를 통째로 카피하므로 아래가 가능함.
	Person man3 = man2;
	cout << man3.height << endl;
	cout << man3.weight << endl;
	cout << man3.name << endl;
	cout << man3.grade << endl;
	cout << man3.eyesight.left << endl;
	cout << man3.eyesight.right << endl;


	Person persons[5];
	persons[0].grade = 1;
	cout << persons[0].grade << endl;


	// reference로 선언
	Person &personTest = persons[1];
	personTest.grade = 5;
	cout << personTest.grade << endl;
	cout << persons[1].grade << endl;

	//struct의 size
	// struct의 특성상 가장큰 변수형으로 데이터를 할당함.
	// 지금의 경우 float(4byte) 기준으로 크기를 구성함. (4의 배수)
	// 보이는 그대로 메모리 레이아웃이 잡히지는 않음을 주의해야 함.
	cout << "Sturct 사이즈: " << sizeof(Person) << endl;

}