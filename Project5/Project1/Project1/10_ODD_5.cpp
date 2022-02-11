#include<iostream>

using namespace std;

class Stack {
private:
	int* buff;
	int idx;
public:
	Stack(int sz = 10) {
		idx = 0;
		buff = new int[sz]; // 생성자로 전달한 integer 인자 만큼 , 배열 크기 설정하여 배열 생성
	}
	~Stack() { // 소멸자 : 객체가 피괴될 때 호출.
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