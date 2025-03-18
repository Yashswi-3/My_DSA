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
