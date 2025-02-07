#include<bits/stdc++.h>
using namespace std;

int maxcout(vector<int> arr){

    int n = arr.size() ;
    int cnt=0 , max=0 ;

    for(int i=0 ; i<n ; i++){
        if(arr[i]==arr[i+1]){
            cnt++ ;
        }
        if(cnt>max) max = cnt ;
    }

    return max+1 ;

}

int mcout(vector<int> arr){
    int n=arr.size();
    int m=0;
    int hash[n]={0};
    for(int i=0 ; i<n ; i++){
        hash[arr[i]]++;
    }
    for(int i=0 ; i<n ; i++){
        if(hash[i]>m) m = hash[i];
    }
    return m;
}

int main(){

    vector<int> arr = {1,2,7,7,3,4,5,7,7,7,8} ;

    cout << maxcout(arr) << endl ;
    cout << mcout(arr) << endl ;

}