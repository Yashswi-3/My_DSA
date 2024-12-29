#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long factorial = 1;
        long long i = 1;
        
        while (factorial <= n) {
            result.push_back(factorial);
            i++;
            factorial *= i;  
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    long long n = 6;
    vector<long long> res = sol.factorialNumbers(n);
    
    for (long long num : res) {
        cout << num << " ";
    }
    return 0;
}
