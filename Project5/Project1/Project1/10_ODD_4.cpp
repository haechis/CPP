#include<iostream>
using namespace std;
class Stack
{
private:
	int buff[10];
	int idx;
public:
	// ������ - �Լ� �̸��� Ŭ���� �̸��� �����ϰ� ���� Ÿ���� ǥ������ �ʴ´�.
	// ������ Ư¡
	// (1) �Լ� �̸��� Ŭ���� �̸��� �����ϴ�.
	// (2) ���ϰ��� ���� ���� Ÿ�� ��ü�� ǥ������ �ʴ´�.
	// (3) ���ڴ� ������ �ǰ� ��� �ȴ�.
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