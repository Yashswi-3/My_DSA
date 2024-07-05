#include<iostream>
using namespace std ;

void unique(int arr[], int size){
    int temp = 0 ;
    for(int i=0 ; i<size ; i++){
        temp = temp ^ arr[i] ;
    }
    cout << temp ; 
}

int main() {
    int arr[7] = {1,1,2,2,4,4,3};
    unique(arr , 7) ;
}