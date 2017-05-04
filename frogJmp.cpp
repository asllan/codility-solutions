#include <iostream>
#include <cassert>

using namespace std;

int solution(int X, int Y, int D) {
    int quotient = (Y - X) / D;
    if ((Y - X) % D)
        quotient++;
    return quotient;
}

void test_solution() {
    assert(solution(10, 85, 30) == 3);
    assert(solution(10, 85, 90) == 1);
    assert(solution(10, 10, 30) == 0);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
