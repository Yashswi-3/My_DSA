#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }

    int arr1[n] = {0};

    for(int i=0 ; i<n ; i++){
        arr1[arr[i]] += 1 ;
    }

    int a ; 
    cin >> a ;
    while (a--)
    {
        int num ; 
        cin >> num ;

        cout << arr1[num] << endl ;
    }
    

}