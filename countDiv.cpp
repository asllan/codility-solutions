#include <iostream>
#include <cassert>

using namespace std;

int solution(int A, int B, int K) {
    int a = (A % K) ? A - (A % K) + K : A;
    int b = (B % K) ? B - (B % K) : B;
    return (b >= a) ? (b - a) / K + 1 : 0;
}

void test_solution() {
    assert(solution(6, 11, 2) == 3);
    assert(solution(0, 0, 11) == 1);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
