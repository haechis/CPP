// 객체지향 프로그래밍 - Stack 이용.
#include <iostream>

// 3. 함수를 struct 내부로

// 단점.
// main 함수에서 s1.idx = 10과 같은 오류를 낼 수 있음.
// 이를 막기 위해 Stack의 상태를 나타내는 buff와 idx는 Stack 함수 내부에서만 사용하도록 설정하는 것이 좋다.

struct Stack {

	// 멤버 데이터
	int buff[10]; // 초기화 없이 변수 선언
	int idx;

	// 멤버 함수 안에서는 멤버 데이터에 점근 할 수 있으므로
	// 함수 인자로 Stact을 받을 필요 없다.
	void push(int v) {
		buff[idx++] = v;
	}
	int pop() {
		return buff[--idx];
	}

};

int main()
{
	Stack s1, s2; // stack 선언
	s1.idx = 0;
	s2.idx = 0;
	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
	std::cout << s1.pop() << std::endl;
}