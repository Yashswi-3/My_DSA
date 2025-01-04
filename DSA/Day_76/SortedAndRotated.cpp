#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            
            if (count > 1) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution ob;

    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};
    vector<int> nums3 = {1, 2, 3};

    cout << (ob.check(nums1) ? "true" : "false") << endl; // Output: true
    cout << (ob.check(nums2) ? "true" : "false") << endl; // Output: false
    cout << (ob.check(nums3) ? "true" : "false") << endl; // Output: true

    return 0;
}
