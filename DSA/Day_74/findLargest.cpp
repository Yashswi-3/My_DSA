#include<iostream>
#include<vector>
using namespace std;

int max(int arr, int x) ;

int main(){

    int x ,max=0 ;

    cin >> x ; 
    int arr[x];

    for(int i=0 ; i<x ; i++){
        cin >> arr[i] ;
    }

    for(int i=0 ; i<x ; i++){
        if(arr[i]>max) max = arr[i] ;
    }

    return max;
}