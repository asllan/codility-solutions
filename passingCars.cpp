#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

int solution(vector<int> &A) {
    int passing = 0;
    int eastCars = 0;
    for (int n : A) {
        if (n == 0) {
            eastCars++;
        } else {
            passing += eastCars;
            if (passing > 1000000000)
                return -1;
        }
    }
    return passing;
}

void test_solution() {
    vector<int> A = {0, 1, 0, 1, 1};
    assert(solution(A) == 5);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}
