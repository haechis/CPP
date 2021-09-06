#include <string>
#include <vector>

using namespace std;


vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int k;
    for (int i = 1; i < n+1; i++) {
        k = x * i;
        long long p;
        p = k;

        answer.push_back(p);

    }

    return answer;
}

int main() {
    vector<long long> answer = solution(3, 5);
    
    return 0;
}

