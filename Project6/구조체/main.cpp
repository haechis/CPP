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
		// �� 28byte
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

	// �ʱ�ȭ ����.
	Person man2 = { 180, 70, "Lee",1 ,{1.2f, 1.0f} };
	
	cout << man2.height << endl;
	cout << man2.weight << endl;
	cout << man2.name << endl;
	cout << man2.grade << endl;
	cout << man2.eyesight.left << endl;
	cout << man2.eyesight.right << endl;
	
	// struct�� �޸𸮸� ��°�� ī���ϹǷ� �Ʒ��� ������.
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


	// reference�� ����
	Person &personTest = persons[1];
	personTest.grade = 5;
	cout << personTest.grade << endl;
	cout << persons[1].grade << endl;

	//struct�� size
	// struct�� Ư���� ����ū ���������� �����͸� �Ҵ���.
	// ������ ��� float(4byte) �������� ũ�⸦ ������. (4�� ���)
	// ���̴� �״�� �޸� ���̾ƿ��� �������� ������ �����ؾ� ��.
	cout << "Sturct ������: " << sizeof(Person) << endl;

}