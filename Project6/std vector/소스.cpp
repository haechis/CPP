#include<iostream>
#include<array>

#include<vector>
using namespace std;

int main()
{

	// array  선언하는 방법
	array<int, 5> arr{ 1,2,3 };

	vector<int> vec(10); 
	for (int i = 0; i < vec.size() ; i++)
	{
		cout << vec[i] << endl;
	}

	// 사이즈 몰라도 가능
	int s;
	cout << "integer 입력하세요" << endl;
	cin >> s;
	vector<int> vec2(s); // 동적으로 할당이 가능!
	vector<int> vec_test1(5, 2); // 5개를 모두 2로 채운다.
	vec_test1.resize(3); // 자를 수 있으며,
	vec_test1.resize(10, 32); // 키울 수도 있고, 키우면서 값 할당도 가능

	vec_test1.push_back(33); // 값을 push 가능
	vec_test1.pop_back(); // 값을 뺄 수도 있음.

	cout << vec_test1.front() << endl;
	cout << vec_test1.back() << endl;
	//성능이 중요할 땐, 정적할당인 array가 좀 더 유리함.!
}