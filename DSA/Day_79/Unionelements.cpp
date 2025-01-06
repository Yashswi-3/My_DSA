#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        vector<int> result;
        int i = 0, j = 0;

        // Traverse both arrays
        while (i < a.size() && j < b.size()) {
            // If current element of a is smaller
            if (a[i] < b[j]) {
                // Add a[i] to the result
                if (result.empty() || result.back() != a[i]) {
                    result.push_back(a[i]);
                }
                i++;
            }
            // If current element of b is smaller
            else if (a[i] > b[j]) {
                // Add b[j] to the result
                if (result.empty() || result.back() != b[j]) {
                    result.push_back(b[j]);
                }
                j++;
            }
            // If both elements are the same
            else {
                // Add either a[i] or b[j] to the result
                if (result.empty() || result.back() != a[i]) {
                    result.push_back(a[i]);
                }
                i++;
                j++;
            }
        }

        // Add remaining elements from array a
        while (i < a.size()) {
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;
        }

        // Add remaining elements from array b
        while (j < b.size()) {
            if (result.empty() || result.back() != b[j]) {
                result.push_back(b[j]);
            }
            j++;
        }

        return result;
    }
};

int main() {
    Solution ob;

    // Test cases
    vector<int> a1 = {1, 2, 3, 4, 5};
    vector<int> b1 = {1, 2, 3, 6, 7};

    vector<int> a2 = {2, 2, 3, 4, 5};
    vector<int> b2 = {1, 1, 2, 3, 4};

    vector<int> a3 = {1, 1, 1, 1, 1};
    vector<int> b3 = {2, 2, 2, 2, 2};

    // Print the union for all test cases
    vector<int> res1 = ob.findUnion(a1, b1);
    vector<int> res2 = ob.findUnion(a2, b2);
    vector<int> res3 = ob.findUnion(a3, b3);

    cout << "Union 1: ";
    for (int num : res1) cout << num << " ";
    cout << endl;

    cout << "Union 2: ";
    for (int num : res2) cout << num << " ";
    cout << endl;

    cout << "Union 3: ";
    for (int num : res3) cout << num << " ";
    cout << endl;

    return 0;
}
