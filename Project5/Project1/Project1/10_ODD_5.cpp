#include<iostream>

using namespace std;

class Stack {
private:
	int* buff;
	int idx;
public:
	Stack(int sz = 10) {
		idx = 0;
		buff = new int[sz]; // �����ڷ� ������ integer ���� ��ŭ , �迭 ũ�� �����Ͽ� �迭 ����
	}
	~Stack() { // �Ҹ��� : ��ü�� �Ǳ��� �� ȣ��.
		delete[] buff;
	}
	void push(int x) {
		buff[idx++] = x;
	}
	int pop() {
		buff[--idx];
	}
};

int main() {
	Stack s1(100);

	s1.push(10);
	s1.push(20);
}