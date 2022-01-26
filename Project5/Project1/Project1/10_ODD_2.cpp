// 객체지향 프로그래밍 - Stack 이용.
#include <iostream>

// 2. 구조체 이용하여 Stack 설계

struct Stack {
int buff[10]; // 초기화 없이 변수 선언
int idx;
};

void push(Stack *s, int v)
{
	s -> buff[(s->idx)++] = v; // idx번째 buff에 v를 넣고 idx 하나 증가
}

int pop(Stack* s)
{
	return s->buff[--(s->idx)]; // idx번째 buff 원소를 pop하고 s의 idx 감소
}

int main()
{
	Stack s1, s2; // stack 선언
	s1.idx = 0;
	s2.idx = 0;
	push(&s1, 10);
	push(&s1, 20);

	std::cout << pop(&s1) << std::endl;
	std::cout << pop(&s1) << std::endl;
}