#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int operations = 0;

        // Iterate over the array
        for (int i = 0; i <= n - 3; i++) {
            if (nums[i] == 0) {
                // Flip current group of 3
                nums[i] = 1 - nums[i];
                nums[i + 1] = 1 - nums[i + 1];
                nums[i + 2] = 1 - nums[i + 2];
                operations++;
            }
        }

        // Check if the entire array contains only 1s
        for (int num : nums) {
            if (num == 0) return -1;
        }

        return operations;
    }
};


int main() {
    Solution sol;

    vector<int> nums1 = {0, 1, 1, 1, 0, 0};
    cout << sol.minOperations(nums1) << endl;  // Output: 3

    vector<int> nums2 = {0, 1, 1, 1};
    cout << sol.minOperations(nums2) << endl;  // Output: -1

    vector<int> nums3 = {1, 0, 0, 0, 1, 1, 0, 0, 0};
    cout << sol.minOperations(nums3) << endl;  // Output: 3

    vector<int> nums4 = {1, 1, 1, 1};
    cout << sol.minOperations(nums4) << endl;  // Output: 0 (already all 1s)

    vector<int> nums5 = {0, 0, 0, 0, 0, 0};
    cout << sol.minOperations(nums5) << endl;  // Output: 2
}
