#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    if (A.size() == 0)
        return 0;
    sort(A.begin(), A.end());
    int prev = A[0];
    int rc = 1;
    for (int i = 1; i < A.size(); i++) {
        if (prev < A[i]) {
            rc++;
            prev = A[i];
        }
    }
    return rc;
}

void test_solution() {
    vector<int> A = { 2, 1, 1, 2, 3, 1 };
    assert(solution(A) == 3);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
