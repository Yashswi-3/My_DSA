#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long findTheArrayConcVal(vector<int>& nums) {
    long long tans = 0; // Use long long as the return type specifies
    int s = 0;
    int e = nums.size() - 1;

    while (e >= s) {
        if (s == e) {
            // Only one element left, add it to the result
            tans += nums[s];
            break;
        }

        // Convert the elements to string and concatenate
        string concatVal = to_string(nums[s]) + to_string(nums[e]);
        tans += stoll(concatVal); // Convert concatenated string to long long

        // Move to the next pair of elements
        s++;
        e--;
    }
    return tans;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << findTheArrayConcVal(vec) << endl;
    return 0;
}
