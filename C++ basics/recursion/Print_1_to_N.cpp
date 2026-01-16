#include <iostream>
using namespace std;

class Solution {
public:
    // Recursive function to print numbers from i to n
    void printRange(int n, int i) {
        // Base case: stop recursion when current index exceeds n
        if (i > n) return;

        // Print current number followed by a space
        cout << i << " ";

        // Recursive call to print the next number
        printRange(n, i + 1);
    }
};

int main() {
    int n = 10;
    Solution sol;

    // Start printing from 1 to n
    sol.printRange(n, 1);

    return 0;
}
