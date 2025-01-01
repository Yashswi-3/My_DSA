#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findFloor(vector<int>& arr, int k) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;  
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] <= k) {
                ans = mid;       
                low = mid + 1;   
            } else {
                high = mid - 1; 
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    int k = 5;

    int result = solution.findFloor(arr, k);
    cout << "Index of the floor: " << result << endl;

    return 0;
}
