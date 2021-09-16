/* 네트워크란 컴퓨터 상호 간에 정보를 교환할 수 있도록 연결된 형태를 의미합니다.
예를 들어, 컴퓨터 A와 컴퓨터 B가 직접적으로 연결되어있고,
컴퓨터 B와 컴퓨터 C가 직접적으로 연결되어 있을 때 컴퓨터 A와 컴퓨터 C도 간접적으로 연결되어 정보를 교환할 수 있습니다.
따라서 컴퓨터 A, B, C는 모두 같은 네트워크 상에 있다고 할 수 있습니다.

컴퓨터의 개수 n,
연결에 대한 정보가 담긴 2차원 배열 computers가 매개변수로 주어질 때,
네트워크의 개수를 return 하도록 solution 함수를 작성하시오.*/


/*
컴퓨터의 개수 n은 1 이상 200 이하인 자연수입니다.
각 컴퓨터는 0부터 n-1인 정수로 표현합니다.
i번 컴퓨터와 j번 컴퓨터가 연결되어 있으면 computers[i][j]를 1로 표현합니다.
computer[i][i]는 항상 1입니다.
*/


/* 3	[[1, 1, 0], [1, 1, 0], [0, 0, 1]]	2 */


#include<iostream>
#include<vector>
using namespace std;

/*
void dfs(int n, vector<vector<int>>& computers) {
    if (n >= computers.size()) { // 길이 체크
        return;
    }
    if (computers[n][n] == 1) { // 대각원소가 0이면, 네트워크 끝
        computers[n][n] = 0; // 대각원소가 1이면 0으로 바꿈
        for (int i = 0; i < computers.size(); i++) {
            if (computers[n][i] == 1) // 연결된 노드 검색 -> dfs로 가서 연결 끊어줌 -> 다시 연결된 노드 검색 -> 반복
                dfs(i, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (computers[i][i] == 1) { // 대각원소 검색(이미 방문한 노드는 0임)
            answer++;
            dfs(i, computers);
        }
    }
    return answer;
}
*/

void dfs(vector<vector<int>>& pc, int i) {
    if (pc.size() <= i)
        return;

    if (pc[i][i] == 0) {
        return;
    }
    else {
        pc[i][i] = 0;
        for (int j = 0; j < pc.size(); j++) {
            if (pc[i][j] == 1) {
                dfs(pc, j);
            }

        }
    }
    return;
}

int solution(int n, vector<vector<int>> pc) {
    int ans = 0;

    for (int i = 0; i < pc.size(); i++) {

        if (pc[i][i] == 1) { // 대각선의 원소가 1인경우, 네트워크 시작 -> 
                             // 연결된 네트워크를 dfs이용하여 찾고, 
                             // 찾으면서 연결된 index의 대각원소를 0으로
            ++ans;
            dfs(pc, i);
        }
    }


    return ans;

}

