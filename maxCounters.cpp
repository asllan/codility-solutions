#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    int maxCounter = 0;
    int curMax = 0;
    vector<int> counters(N, 0);
    for (int n : A) {
        if (1 <= n && n <= N) {
            if (counters[n - 1] < maxCounter) 
                counters[n - 1] = maxCounter;
            ++counters[n - 1];
            if (curMax < counters[n - 1])
                curMax = counters[n - 1];
        } else if (n == N + 1)
            maxCounter = curMax;
    }
    for (int& n : counters)
        if (n < maxCounter)
            n = maxCounter;
    return counters;
}

void test_solution() {
    vector<int> A = { 3, 4, 4, 6, 1, 4, 4 };
    vector<int> B = { 3, 2, 2, 4, 2 };
    assert(solution(5, A) == B);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
