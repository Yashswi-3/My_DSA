#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0; 
        int right = s.size() - 1; 

        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false; 
            }

            left++;
            right--;
        }

        return true; 
    }
};

int main() {
    Solution solution;
    string s;

    cout << "Enter a string: ";
    getline(cin, s); 

    if (solution.isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
