#include<iostream>
using namespace std;

int sum(int x, int y)
{
	return x + y;
}

enum struct RequestType
{
	Login, Register, Update, Delete
};

bool onRegister(string id, string password)
{
	cout << "onRegister" << endl;
	cout << id << endl;
	cout << password << endl;
	return true;
}

bool onUpdate(string id, string password)
{
	cout << "onUpdate" << endl;
	cout << id << endl;
	cout << password << endl;
	return true;
}
bool onDelete(string id, string password)
{
	cout << "onDelete" << endl;
	cout << id << endl;
	cout << password << endl;
	return true;
}
bool onLogin(string id, string password)
{
	cout << "onLogin" << endl;
	cout << id << endl;
	cout << password << endl;
	return true;
}

int main()
{
	// �Լ��� �޸𸮿� ����. �����ͷ� ����ų �� ����.
	// �Լ��� �ּҴ� �Լ����� �ش��ϴ� ���� �ڵ尡 ����Ǿ� �ִ� �޸� ���� ���� �ּ���.
	
	// �Լ��� ����Ű�� ������.
	int (*f)(int, int) = &sum; //���⼭ f�� ������ ��������.
	// () ��ȣ�� �ϴ� ������, ���� ������,
	// int* f(int, int) -> �����͸� ��ȯ�ϴ� �Լ� ������Ÿ���� �Ǿ� ����.


	int x = (*f)(1, 2);
	cout << x << endl;
	int y = f(1, 3);
	cout << y << endl;

	int(&ff)(int, int) = sum; 
	int z = ff(2, 3);
	cout << z << endl;


	// �α��� ������ Ȯ��. (�ݹ�) : � ��û�� ���� �� �Լ��� ����
	// �Լ� ������ ���
	bool (*callbacks[])(string, string) {
		onLogin, onRegister, onUpdate, onDelete
	};

	callbacks[(int)RequestType::Login]("david", "1234");
	callbacks[(int)RequestType::Register]("david", "1234");
	callbacks[(int)RequestType::Update]("david", "1234");
	callbacks[(int)RequestType::Delete]("david", "1234");
}