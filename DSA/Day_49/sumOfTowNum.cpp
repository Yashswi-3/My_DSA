#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(nums[i]+nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    return res ;
                }
            }
        }
        return res ;
    }

int main() {

    int n ;

    cout << "Target : " ;
    cin >> n ;

    vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> hel = twoSum( num , n) ;

    for(int i = 0 ; i < 2 ; i++){
        cout << hel[i] << " " ;
    }

}