// ��ü���� ���α׷��� - Stack �̿�.
#include <iostream>

// 3. �Լ��� struct ���η�

// ����.
// main �Լ����� s1.idx = 10�� ���� ������ �� �� ����.
// �̸� ���� ���� Stack�� ���¸� ��Ÿ���� buff�� idx�� Stack �Լ� ���ο����� ����ϵ��� �����ϴ� ���� ����.

struct Stack {

	// ��� ������
	int buff[10]; // �ʱ�ȭ ���� ���� ����
	int idx;

	// ��� �Լ� �ȿ����� ��� �����Ϳ� ���� �� �� �����Ƿ�
	// �Լ� ���ڷ� Stact�� ���� �ʿ� ����.
	void push(int v) {
		buff[idx++] = v;
	}
	int pop() {
		return buff[--idx];
	}

};

int main()
{
	Stack s1, s2; // stack ����
	s1.idx = 0;
	s2.idx = 0;
	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
	std::cout << s1.pop() << std::endl;
}