#include <iostream>
#include <vector>
#include <limits.h> 
using namespace std;

class Solution {
public:
    int secondLargest(const vector<int>& arr) {
        int largest = INT_MIN; 
        int secondLargest = INT_MIN; 

        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num < largest) {
                secondLargest = num; 
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};

int main() {
    Solution ob;
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int ans = ob.secondLargest(arr);

    cout << ans << endl;

    return 0;
}
