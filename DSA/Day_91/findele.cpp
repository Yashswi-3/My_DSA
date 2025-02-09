#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr) {
    
    int n = arr.size();
    for(int i=1 ; i<n ; i++){
        bool flag = 0 ;
        for(int j=0 ; j<n ; j++){
            if(arr[j]==i) flag = 1 ;
        }
        if(flag == 0) return i;
    }
    
}

int hashmiss(vector<int>& arr){
    int n = arr.size();
    

}

int main(){

    vector<int> num = {1,3,0} ;

    cout << missingNumber(num) ;

}