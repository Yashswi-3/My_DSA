#include<bits/stdc++.h>
using namespace std;

int maxcout(vector<int> arr){

    int n = arr.size() ;
    int cnt=0 , max=0 ;

    for(int i=0 ; i<n ; i++){
        if(arr[i]==1){
            cnt++ ;
        }
        if (arr[i]==0) cnt = 0 ;
        if(cnt>max) max = cnt ;
    }

    return max ;

}



int main(){

    vector<int> arr = {1,1,1,0,0,0,1,1} ;

    cout << maxcout(arr) << endl ;

}