#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;  

            if (nums[mid] == target) {
                return mid; 
            } else if (nums[mid] < target) {
                low = mid + 1;  
            } else {
                high = mid - 1;  
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    cout << "Index of " << target1 << " in nums1: " << solution.search(nums1, target1) << endl;

    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    cout << "Index of " << target2 << " in nums2: " << solution.search(nums2, target2) << endl;

    vector<int> nums3 = {1, 3, 5, 7, 9};
    int target3 = 6;
    cout << "Index of " << target3 << " in nums3: " << solution.search(nums3, target3) << endl;

    vector<int> nums4 = {10};
    int target4 = 10;
    cout << "Index of " << target4 << " in nums4: " << solution.search(nums4, target4) << endl;

    vector<int> nums5 = {};
    int target5 = 5;
    cout << "Index of " << target5 << " in nums5: " << solution.search(nums5, target5) << endl;

    return 0;
}
