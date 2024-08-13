#include<iostream>
#include<vector>
using namespace std;

int print2largest(vector<int> &arr) {
        // Code Here
        int f=1 , s=0 , temp=0 ;
        int n = arr.size() ;
        
        for(int i=0 ; i<n ; i++){
            if(arr[i]>s){
                temp=s ;
                s=arr[i];
            }
            if(s>f){
                f=s ;
                s = temp ;
            }
        }
        return s ;
    }

int main() {

    vector<int> arr = {1,2,3,4,5,6} ;

    cout << print2largest(arr) ;

}