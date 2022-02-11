#include<iostream>
using namespace std;
class Stack
{
private:
	int buff[10];
	int idx;
public:
	// 생성자 - 함수 이름이 클래스 이름과 동일하고 리턴 타입을 표기하지 않는다.
	// 생성자 특징
	// (1) 함수 이름이 클래스 이름과 동일하다.
	// (2) 리턴값이 없고 리턴 타입 자체를 표기하지 않는다.
	// (3) 인자는 있으도 되고 없어도 된다.
	Stack() {
		idx= 0;
	}
	void push(int v) {
		buff[idx++] = v;
	}
	int pop() {
		return buff[--idx];
	}
};

int main(){
Stack s1;
s1.push(10);
s1.push(2);
cout << s1.pop() << endl;
}