#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

int solution(vector<int> &A) {
    int length = A.size();
    vector<bool> hasValue(length + 1, false); 
    
    for (int i = 0; i < length; i++) {
        int value = A[i];
        // boundary check
        if (value < 1 || length < value)
            return 0;
        // check if a value is duplicated
        if (hasValue[value])
            return 0;
        hasValue[value] = true;
    }
    for (int i = 1; i < hasValue.size(); i++) {
        // check if a value is missing
        if (!hasValue[i]) {
            return 0;
        }
    }
    return 1;
}

void test_solution() {
    vector<int> A = { 4, 1, 3, 2 };
    assert(solution(A) == 1);
    A = { 4, 1, 3 };
    assert(solution(A) == 0);
    A = { 1 };
    assert(solution(A) == 1);
    A = { 100000 };
    assert(solution(A) == 0);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
