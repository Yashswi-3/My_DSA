#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;  // Edge case: empty array
    
    int i = 0;  // Slow pointer
    
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {  // If new unique element found
            i++;  // Move slow pointer
            nums[i] = nums[j];  // Update nums[i] with new unique value
        }
    }
    
    return i + 1;  // Number of unique elements
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    
    int k = removeDuplicates(nums);
    
    cout << "Unique Count: " << k << endl;
    cout << "Modified Array: ";
    
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}
