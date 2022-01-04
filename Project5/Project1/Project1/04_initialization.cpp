// �Ϲ� ���� ����
int n1 = 0;
int n2(0);

// �迭�� ����ü �ʱ�ȭ
int x[3] = { 1,2,3 };

struct Point { int x; int y; };
Point P = { 1,2 };

// C++11 ����, �߰�ȣ{}�� ����� �ϰ��� �ʱ�ȭ(Uniform Initialization) ��� ����
// 1. ��ȣ�� ����� �ʱ�ȭ Copy initialization
int n1 = { 0 };
int x1[3] = { 1,2,3 };
Point p1 = { 1,2 };

// 2. ��ȣ ���� �ʱ�ȭ Direct initialization
int n2{ 0 };
int x2[3]{ 1,2,3 };
Point p2{ 1,2 };


// �ϰ��� �ʱ�ȭ�� ���� ������ �ս� ����
int n1 = 3.14; // ok. ������ 3���� ���, ������ ������ �� �� ����
int n2 = { 3.14 }; // error. ������ �ս��� �߻��ϴ� �ʱ�ȭ�� X

char c1 = 300; // ok. ������ overflow �߻�
char c2 = { 300 }; // error. 300�� 1����Ʈ�� ���� �� ����