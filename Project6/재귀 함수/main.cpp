#include<iostream>

using namespace std;

void count(int n)
{
	// 재귀호출 작성 시 탈출 조건이 필수임. 
	// 그렇지 않으면 스택오버플로우 발생할 수 있음.
	if (n < 0)
		return;
	cout << n << endl;
	count(n - 1);
}


int fact(int n)
{
	if (n == 1)
		return 1;
	int n0 = fact(n - 1);
	return n * n0;
}

int fib(int n)
{
	if (n < 2)
		return 1;
	int n2 = 0;
	n2 = fib(n-1) + fib(n - 2);
	return n2;
}

struct Node
{
	int value;
	Node* left;
	Node* right;
};

void visit_PreOrder(Node* root)
{
	if (root == nullptr)
		return;
	cout << root->value << endl;
	visit_PreOrder(root->left);
	visit_PreOrder(root->right);
}

void visit_PostOrder(Node* root)
{
	if (root == nullptr)
		return;
	visit_PostOrder(root->left);
	visit_PostOrder(root->right);
	cout << root->value << endl;

}


int main()
{
	count(10);

	cout << "팩토리얼 예제" << endl;
	int factN = 0;
	factN = fact(5);
	cout << factN << endl;
	cout << "\n피보나치 수열 예제" << endl;
	//피보나치: 
	// a(0) = 1, a(1) = 1,
	// a(n) = a(n-1) + a(n-2).
	cout << fib(5) << endl; // 1 1 2 3 5 8

	Node node0{ 0 };
	Node node1{ 1 };
	Node node2{ 2 };
	Node node3{ 3 };
	Node node4{ 4 };
	Node node5{ 5 };
	Node node6{ 6 };
	Node node7{ 7 };
	Node node8{ 8 };
	Node node9{ 9 };

	//            n0
	//     n1            n5
	//   n2  n3      n6      n8
	//        n4      n7   n9


	node0.left = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node3.right = &node4;
	node0.right = &node5;
	node5.left = &node6;
	node6.right = &node7;
	node5.right = &node8;
	node8.left = &node9;
	// node를 순회하는 함수를 만듬.
	cout << "Node를 순회하는 함수 (Pre order)" << endl;
	visit_PreOrder(&node0);

	cout << "Node를 순회하는 함수 (Post order)" << endl;
	visit_PostOrder(&node0);
}
