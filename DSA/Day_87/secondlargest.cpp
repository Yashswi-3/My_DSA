#include<bits/stdc++.h>
using namespace std;

int secondlarg(vector<int> arr){

    int n = arr.size();

    int max = INT_MIN ;
    int smax = INT_MIN ;

    for(int i=0 ; i<n ; i++){
        if (arr[i]>max) {
            smax = max ;
            max = arr[i] ;
        }
        if( arr[i]>smax && arr[i]<max ){
            smax = arr[i] ;
        }
        

    }

    if(smax == INT_MIN) return -1;
    return smax ;
     
}

int secondHighest(string s) {
        char sm, mx;
        int max = INT_MIN ;
        int smax = INT_MIN ;

        for ( char i : s) {
            if (isdigit(i)){
                int digit = i - '0';  // Convert char to int
                if (digit > max){
                    smax = max ;
                    max = digit ;
                }
                if( digit>smax && digit<max ){
                    smax = digit ;
                }
            }
        }
        if(smax == INT_MIN) return -1;
        return smax ;
}

int main(){

    // vector<int> arr = {1,1,1,1};
    // cout << secondlarg(arr) << endl ;

    string s = "asjdh123" ;
    cout << secondHighest(s) << endl ;

}