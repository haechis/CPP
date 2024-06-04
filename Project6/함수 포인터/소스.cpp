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
	// 함수도 메모리에 있음. 포인터로 가리킬 수 있음.
	// 함수의 주소는 함수에서 해당하는 기계어 코드가 저장되어 있는 메모리 블럭의 시작 주소임.
	
	// 함수를 가리키는 포인터.
	int (*f)(int, int) = &sum; //여기서 f는 포인터 변수명임.
	// () 괄호를 하는 이유는, 하지 않으면,
	// int* f(int, int) -> 포인터를 반환하는 함수 프로토타입이 되어 버림.


	int x = (*f)(1, 2);
	cout << x << endl;
	int y = f(1, 3);
	cout << y << endl;

	int(&ff)(int, int) = sum; 
	int z = ff(2, 3);
	cout << z << endl;


	// 로그인 예제로 확인. (콜백) : 어떤 요청이 왔을 때 함수를 실행
	// 함수 포인터 사용
	bool (*callbacks[])(string, string) {
		onLogin, onRegister, onUpdate, onDelete
	};

	callbacks[(int)RequestType::Login]("david", "1234");
	callbacks[(int)RequestType::Register]("david", "1234");
	callbacks[(int)RequestType::Update]("david", "1234");
	callbacks[(int)RequestType::Delete]("david", "1234");
}