#include <iostream>
using namespace std;

class Solution {
public:
    long long coloredCells(int n) {
        return (long long)n * n + (long long)(n - 1) * (n - 1);
    }
};

int main() {
    Solution sol;
    
    // Test cases
    int testCases[] = {1, 2, 3, 4, 5, 10};
    
    for( int n : testCases){
        cout << "For " << n << " unclolered tiles : " << sol.coloredCells(n) << endl  ; 
    }

    return 0;
}
