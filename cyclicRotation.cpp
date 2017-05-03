#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    vector<int> B;
    int length = A.size();
    for (int i = 0; i < length; i++) {
        int index = (length >= K) ? (length - K + i) : (length - (K % length) + i);
        B.push_back(A[index % length]);
    }
    return B;
}

void test_solution() {
    vector<int> A = {3, 8, 9, 7, 6};
    vector<int> B = {9, 7, 6, 3, 8};
    assert(solution(A, 3) == B);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
