/* ��Ʈ��ũ�� ��ǻ�� ��ȣ ���� ������ ��ȯ�� �� �ֵ��� ����� ���¸� �ǹ��մϴ�.
���� ���, ��ǻ�� A�� ��ǻ�� B�� ���������� ����Ǿ��ְ�,
��ǻ�� B�� ��ǻ�� C�� ���������� ����Ǿ� ���� �� ��ǻ�� A�� ��ǻ�� C�� ���������� ����Ǿ� ������ ��ȯ�� �� �ֽ��ϴ�.
���� ��ǻ�� A, B, C�� ��� ���� ��Ʈ��ũ �� �ִٰ� �� �� �ֽ��ϴ�.

��ǻ���� ���� n,
���ῡ ���� ������ ��� 2���� �迭 computers�� �Ű������� �־��� ��,
��Ʈ��ũ�� ������ return �ϵ��� solution �Լ��� �ۼ��Ͻÿ�.*/


/*
��ǻ���� ���� n�� 1 �̻� 200 ������ �ڿ����Դϴ�.
�� ��ǻ�ʹ� 0���� n-1�� ������ ǥ���մϴ�.
i�� ��ǻ�Ϳ� j�� ��ǻ�Ͱ� ����Ǿ� ������ computers[i][j]�� 1�� ǥ���մϴ�.
computer[i][i]�� �׻� 1�Դϴ�.
*/


/* 3	[[1, 1, 0], [1, 1, 0], [0, 0, 1]]	2 */


#include<iostream>
#include<vector>
using namespace std;

/*
void dfs(int n, vector<vector<int>>& computers) {
    if (n >= computers.size()) { // ���� üũ
        return;
    }
    if (computers[n][n] == 1) { // �밢���Ұ� 0�̸�, ��Ʈ��ũ ��
        computers[n][n] = 0; // �밢���Ұ� 1�̸� 0���� �ٲ�
        for (int i = 0; i < computers.size(); i++) {
            if (computers[n][i] == 1) // ����� ��� �˻� -> dfs�� ���� ���� ������ -> �ٽ� ����� ��� �˻� -> �ݺ�
                dfs(i, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (computers[i][i] == 1) { // �밢���� �˻�(�̹� �湮�� ���� 0��)
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

        if (pc[i][i] == 1) { // �밢���� ���Ұ� 1�ΰ��, ��Ʈ��ũ ���� -> 
                             // ����� ��Ʈ��ũ�� dfs�̿��Ͽ� ã��, 
                             // ã���鼭 ����� index�� �밢���Ҹ� 0����
            ++ans;
            dfs(pc, i);
        }
    }


    return ans;

}

