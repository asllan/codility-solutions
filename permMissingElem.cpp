#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

int solution(vector<int> &A) {
    int rc = -1;
    int length = A.size();
    vector<bool> hasValue(length + 2, false); 

    for (int i = 0; i < length; i++) {
        hasValue[A[i]] = true;
    }
    for (int i = 1; i < length + 2; i++) {
        if (!hasValue[i]) {
            rc = i;  
            break;
        }
    }
    return rc;
}

void test_solution() {
    vector<int> A = {2, 3, 1, 5};
    assert(solution(A) == 4);
    A = {2};
    assert(solution(A) == 1);
    A = {1, 3};
    assert(solution(A) == 2);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
