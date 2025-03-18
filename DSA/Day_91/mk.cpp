#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int maxLen = 0, mask = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            while ((mask & nums[right]) != 0) {
                mask ^= nums[left];   // Remove the leftmost element
                left++;
            }
            
            mask |= nums[right];      // Add the current number
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 3, 8, 48, 10};
    cout << sol.longestNiceSubarray(nums1) << endl;  

    vector<int> nums2 = {3, 1, 5, 11, 13};
    cout << sol.longestNiceSubarray(nums2) << endl;  

    vector<int> nums3 = {1, 2, 4, 8, 16};
    cout << sol.longestNiceSubarray(nums3) << endl;  
}
