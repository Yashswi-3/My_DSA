#include<iostream>
#include<vector>
#include <string>
using namespace std ; 

long long findTheArrayConcVal(vector<int>& nums) {
        int s = 0 ;
        int e = nums.size() - 1 ;
        string tans = 0 ;
        long long ans ;
        
        while (e >= s){
            if (s == e) {
            // Only one element left, add it to the result
            tans += nums[s];
            break;
        }
            
            tans = to_string(nums[s]) + to_string(nums[e]) ;
            ans += stoll(tans);

            s++ ;
            e-- ;
            
        }
        return ans ;
}

int main() {

    vector<int> vec = {1, 2, 3, 4, 5};

    cout << findTheArrayConcVal(vec) ;

}