#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

int solution(int X, vector<int> &A) {
    vector<bool> hasValue(X, false); 
    int totalValues = 0;
    
    for (int i = 0; i < A.size(); i++) {
        int value = A[i];
        // boundary check
        if (value < 1 || X < value)
            return -1;
        if (!hasValue[value - 1]) {
            hasValue[value - 1] = true;
            totalValues++;
            if (totalValues == X)
                return i;
        }
    }
    return -1;
}

void test_solution() {
    vector<int> A = { 1, 3, 1, 4, 2, 3, 5, 4 };
    assert(solution(5, A) == 6);
    A = { 1, 3, 1, 4, 2, 3, 4 };
    assert(solution(5, A) == -1);
    A = { 1, 1, 1 };
    assert(solution(5, A) == -1);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
