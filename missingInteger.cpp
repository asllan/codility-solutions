#include <vector>
#include <iostream>
#include <cassert>
#include <climits>

using namespace std;

int solution(vector<int> &A) {
    vector<bool> hasValue(A.size(), false); 
    for (int n : A) {
        if (0 < n && n < A.size() + 1)
            hasValue[n - 1] = true;
    }
    for (int i = 0; i < hasValue.size(); ++i) {
        if (!hasValue[i])
            return i + 1;
    }
    return hasValue.size() + 1;
}

void test_solution() {
    vector<int> A = { 1, 3, 6, 4, 1, 2 };
    assert(solution(A) == 5);
    A = { 1 };
    assert(solution(A) == 2);
    A = { -1, -10 };
    assert(solution(A) == 1);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
