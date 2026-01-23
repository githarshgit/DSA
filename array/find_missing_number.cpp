// brute-force method

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    // Check each number from 0 to n
    for (int i = 0; i <= n; i++) {
        bool found = false;

        // Search i in the array
        for (int j = 0; j < n; j++) {
            if (nums[j] == i) {
                found = true;
                break;
            }
        }

        // If not found, it's the missing number
        if (!found) {
            return i;
        }
    }

    return -1; // safety return
}

int main() {
    vector<int> nums = {3, 0, 1};

    int result = missingNumber(nums);
    cout << "Missing Number: " << result << endl;

    return 0;
}