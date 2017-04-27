#include <cassert>
#include <iostream>

using namespace std;

// given a positive integer N, returns the length of its longest binary gap. 
// The function should return 0 if N doesn't contain a binary gap.
int solution(int N) {
    int max = 0;
    int length = -1;
    while (N) {
        if (N & 1) {
            if (max < length) {
                max = length;
            }
            length = 0;
        } else if (length != -1) {
            length++;
        }
        N >>= 1;
    }
    return max;
}

void test_solution() {
    assert(solution(9) == 2);
    assert(solution(529) == 4);
    assert(solution(20) == 1);
    assert(solution(15) == 0);
    cout << "passed test_solution" << endl;
}

int main() {
    // test_solution();
    int number;
    cin >> number;
    cout << solution(number) << endl;
}
