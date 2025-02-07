#include<bits/stdc++.h>
using namespace std ;

bool scr(vector<int> arr, int k){
    int s = 0 ; 
    int e = arr.size()-1 ;
        
        for(int i=0 ; i<arr.size() ; i++){

            int mid = s + (e-s)/2 ;
            
            if (k == arr[mid]) return true ;
            
            if (k < arr[mid]) e = mid-1 ;
            
            if (k > arr[mid]) s = mid+1 ;
            
        }
        
        return false ;
}

int main () {

    vector<int> arr = {1,2,3,4,5,5,6} ;
    int k = 5 ;

    cout << scr(arr, k) ;

}