#include<iostream>
#include<array>

#include<vector>
using namespace std;

int main()
{

	// array  �����ϴ� ���
	array<int, 5> arr{ 1,2,3 };

	vector<int> vec(10); 
	for (int i = 0; i < vec.size() ; i++)
	{
		cout << vec[i] << endl;
	}

	// ������ ���� ����
	int s;
	cout << "integer �Է��ϼ���" << endl;
	cin >> s;
	vector<int> vec2(s); // �������� �Ҵ��� ����!
	vector<int> vec_test1(5, 2); // 5���� ��� 2�� ä���.
	vec_test1.resize(3); // �ڸ� �� ������,
	vec_test1.resize(10, 32); // Ű�� ���� �ְ�, Ű��鼭 �� �Ҵ絵 ����

	vec_test1.push_back(33); // ���� push ����
	vec_test1.pop_back(); // ���� �� ���� ����.

	cout << vec_test1.front() << endl;
	cout << vec_test1.back() << endl;
	//������ �߿��� ��, �����Ҵ��� array�� �� �� ������.!
}