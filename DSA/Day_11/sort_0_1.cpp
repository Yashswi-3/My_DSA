#include<iostream>
using namespace std ;

void sort01( int arr[] , int size){
    int res[size] ;
    for(int i=0 ; i<size ; i++){
        if(arr[i]&1){
            res[size-i] = 1;
        }
        else{
            res[i] = 0 ;
        }
    }
    for(int i=0; i < size ; i++){
        cout << res[i] << " " ;
    }
}


int main() {
    int arr[5] = {0,1,0,0,1} ;
    sort01(arr , 5);
    
