#include <vector>
#include <iostream>
#include <cassert>
#include <climits>

using namespace std;

int solution(vector<int> &A) {
    // calculate sum
    int sum = 0;
    for (int n : A) 
        sum += n;
    
    int partialSum = 0;
    int diff = 0;
    int min = INT_MAX;
    for (int i = 0; i < A.size() - 1; i++) {
        // calculate 1st partial sum
        partialSum += A[i];
        // calculate the difference
        diff = sum - 2 * partialSum;
        if (diff < 0)
            diff *= -1;
        // save the minimum difference    
        if (diff < min)
            min = diff;
    }
    return min;
}

void test_solution() {
    vector<int> A = { 3, 1, 2, 4, 3 };
    assert(solution(A) == 1);
    A = { -1000, 1000 };
    assert(solution(A) == 2000);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
