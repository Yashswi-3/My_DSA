#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }

    int hash[n] = {0};

    for(int i=0 ; i<n ; i++){
        hash[arr[i]] += 1 ;
    }

    int a ; 
    cin >> a ;
    while (a--)
    {
        int num ; 
        cin >> num ;

        cout << hash[num] << endl ;
    }
    

}