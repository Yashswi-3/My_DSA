#include<bits/stdc++.h>
using namespace std;

void movezero(int arr[] , int n){
    int j = 0 ;
    
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=0){
            if ( i == 0 ) continue;
            else  {
                arr[i-1] = arr[i] ;
            }
        }
    }
    for(int i=j ; j<n ; j++){
        arr[i] = 0 ;
    }

}


int main(){

    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i]  ;
    }

    movezero(arr, n);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }

}