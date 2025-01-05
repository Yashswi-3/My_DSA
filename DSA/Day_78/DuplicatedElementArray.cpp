#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0; // If the array is empty, return 0

        int uniqueIndex = 0; // Pointer to place unique elements

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[uniqueIndex]) {
                uniqueIndex++; // Move the unique pointer
                nums[uniqueIndex] = nums[i]; // Update the value at uniqueIndex
            }
        }

        return uniqueIndex + 1; // The count of unique elements
    }
};

int main() {
    Solution ob;

    // Example inputs
    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    // Test case 1
    int k1 = ob.removeDuplicates(nums1);
    cout << "k = " << k1 << ", nums = [";
    for (int i = 0; i < k1; ++i) cout << nums1[i] << (i < k1 - 1 ? ", " : "");
    cout << "]" << endl;

    // Test case 2
    int k2 = ob.removeDuplicates(nums2);
    cout << "k = " << k2 << ", nums = [";
    for (int i = 0; i < k2; ++i) cout << nums2[i] << (i < k2 - 1 ? ", " : "");
    cout << "]" << endl;

    return 0;
}
