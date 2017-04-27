#include <vector>
#include <map>
#include <cassert>
#include <iostream>

using namespace std;

int solution(vector<int> A) {
    map<int, int> mymap;
    for (int n : A) {
        auto it = mymap.find(n);
        if (it == mymap.end())
            mymap[n] = 1;
        else 
            mymap.erase(it);
    }
    return mymap.begin()->first;
}

void test_solution() {
    assert(solution({9, 3, 9, 3, 9, 7, 9}) == 7);
    assert(solution({2, 2, 3, 3, 4}) == 4);
    assert(solution({4}) == 4);
    assert(solution({8, 2, 4, 4, 2}) == 8);
    cout << "passed test_solution" << endl;
}

int main() {
    test_solution();
}