#include <vector>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int freq[501] = {0}; // Fixed-size frequency array

        // Count occurrences
        for (int num : nums) {
            freq[num]++;
        }

        // Check if all counts are even
        for (int i = 1; i <= 500; i++) {
            if (freq[i] % 2 != 0) return false;
        }

        return true;
    }
};
