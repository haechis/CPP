/*
n개의 음이 아닌 정수가 있습니다. 
이 수를 적절히 더하거나 빼서 타겟 넘버를 만들려고 합니다. 
예를 들어 [1, 1, 1, 1, 1]로 숫자 3을 만들려면 다음 다섯 방법을 쓸 수 있습니다.

-1+1+1+1+1 = 3
+1-1+1+1+1 = 3
+1+1-1+1+1 = 3
+1+1+1-1+1 = 3
+1+1+1+1-1 = 3

사용할 수 있는 숫자가 담긴 배열 numbers, 
타겟 넘버 target이 매개변수로 주어질 때 숫자를 적절히 더하고 빼서 
타겟 넘버를 만드는 방법의 수를 return 하도록 solution 함수를 작성해주세요.

주어지는 숫자의 개수는 2개 이상 20개 이하입니다.
각 숫자는 1 이상 50 이하인 자연수입니다.
타겟 넘버는 1 이상 1000 이하인 자연수입니다.

입출력 예
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