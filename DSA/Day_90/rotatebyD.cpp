#include<bits/stdc++.h>
using namespace std;

void rot(int arr[], int n, int d){

    d = d % n ;

    int temp[d] ;

    for(int i=0 ; i<d ; i++){
        temp[i] = arr[i] ;
    }
    
    for(int i=d ; i<n ; i++){
        arr[i-d] = arr[i] ;
    }

    for(int i=n-d ; i<n ; i++){
        arr[i] = temp[i-(n-d)] ;
    }

}


void optrot(int arr[], int n , int d){

    reverse(arr , arr+d) ;

    reverse(arr + d , arr + n);

    reverse(arr , arr+n) ;

}

int main(){

    int n ,d ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i]  ;
    }
    cout << " num to rotate : " ;
    cin >> d ; 

    // rot(arr, n, d);

    optrot(arr, n , d) ;

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }

}