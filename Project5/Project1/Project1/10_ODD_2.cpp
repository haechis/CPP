// ��ü���� ���α׷��� - Stack �̿�.
#include <iostream>

// 2. ����ü �̿��Ͽ� Stack ����

struct Stack {
int buff[10]; // �ʱ�ȭ ���� ���� ����
int idx;
};

void push(Stack *s, int v)
{
	s -> buff[(s->idx)++] = v; // idx��° buff�� v�� �ְ� idx �ϳ� ����
}

int pop(Stack* s)
{
	return s->buff[--(s->idx)]; // idx��° buff ���Ҹ� pop�ϰ� s�� idx ����
}

int main()
{
	Stack s1, s2; // stack ����
	s1.idx = 0;
	s2.idx = 0;
	push(&s1, 10);
	push(&s1, 20);

	std::cout << pop(&s1) << std::endl;
	std::cout << pop(&s1) << std::endl;
}