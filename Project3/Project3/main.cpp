/*
n���� ���� �ƴ� ������ �ֽ��ϴ�. 
�� ���� ������ ���ϰų� ���� Ÿ�� �ѹ��� ������� �մϴ�. 
���� ��� [1, 1, 1, 1, 1]�� ���� 3�� ������� ���� �ټ� ����� �� �� �ֽ��ϴ�.

-1+1+1+1+1 = 3
+1-1+1+1+1 = 3
+1+1-1+1+1 = 3
+1+1+1-1+1 = 3
+1+1+1+1-1 = 3

����� �� �ִ� ���ڰ� ��� �迭 numbers, 
Ÿ�� �ѹ� target�� �Ű������� �־��� �� ���ڸ� ������ ���ϰ� ���� 
Ÿ�� �ѹ��� ����� ����� ���� return �ϵ��� solution �Լ��� �ۼ����ּ���.

�־����� ������ ������ 2�� �̻� 20�� �����Դϴ�.
�� ���ڴ� 1 �̻� 50 ������ �ڿ����Դϴ�.
Ÿ�� �ѹ��� 1 �̻� 1000 ������ �ڿ����Դϴ�.

����� ��
numbers	         target	 return
[1, 1, 1, 1, 1]	   3	    5


*/

#include <iostream>
#include <vector>

using namespace std;

int ans = 0;
int t;
int k = 0;
void dfs(vector<int>& numbers, int n, int sum)
{
	 
	if (n == numbers.size()) {
		if (sum == t)
		{
			++ans;
			return;
		}
		else
		return;
	}
	
		dfs(numbers, n + 1, sum + numbers[n]);
		dfs(numbers, n + 1, sum - numbers[n]);
	
}


int solution(vector<int> numbers, int target) {

	t = target;
	dfs(numbers, 0, 0); // array, n-th, sum
	return ans;
}


int solution2(vector<int> numbers, int target) { //BFS
	int ans2 = 0;
	vector<int> arr_bfs;
	arr_bfs.push_back(0);
	
	vector<int> tmp;
	for (int i = 0; i < numbers.size(); i++) {
		tmp.clear();
		for (int j = 0; j < arr_bfs.size(); j++) {
			tmp.push_back(arr_bfs[j] + numbers[i]);
			tmp.push_back(arr_bfs[j] - numbers[i]);
		}
		arr_bfs = tmp;
	}

	for (int i = 0; i < arr_bfs.size(); i++) {
		if (arr_bfs[i] == target)
			++ans2;
	}

	return ans2;
}

int main() {
	vector<int> numbers = {1, 1, 1, 1, 1};
	int target = 3;

	int ret = solution(numbers, target); //DFS
	cout << ret << endl;

	int ret2 = solution2(numbers, target); //BFS
	cout << ret2 << endl;
	
	return 0;
}