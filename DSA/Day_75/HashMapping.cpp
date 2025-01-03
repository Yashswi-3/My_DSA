#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(n, 0); 
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 1 && arr[i] <= n) {
                freq[arr[i] - 1]++; 
            }
        }

        return freq;
    }
};

int main() {
    Solution solution;

    vector<int> arr1 = {2, 3, 2, 3, 5};
    vector<int> result1 = solution.frequencyCount(arr1);
    cout << "Frequencies for Test Case 1: ";
    for (int freq : result1) {
        cout << freq << " ";
    }
    cout << endl;

    vector<int> arr2 = {3, 3, 3, 3};
    vector<int> result2 = solution.frequencyCount(arr2);
    cout << "Frequencies for Test Case 2: ";
    for (int freq : result2) {
        cout << freq << " ";
    }
    cout << endl;

    vector<int> arr3 = {1};
    vector<int> result3 = solution.frequencyCount(arr3);
    cout << "Frequencies for Test Case 3: ";
    for (int freq : result3) {
        cout << freq << " ";
    }
    cout << endl;

    vector<int> arr4 = {1, 2, 2, 3, 3, 3};
    vector<int> result4 = solution.frequencyCount(arr4);
    cout << "Frequencies for Test Case 4: ";
    for (int freq : result4) {
        cout << freq << " ";
    }
    cout << endl;

    return 0;
}
