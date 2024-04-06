#include<iostream>
using namespace std ;

void SwapingNum( int arr[] , int size ){

    for(int i=0 ; i < size ; i++){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout << arr[i];
    }
}

int main() {
    int arr[4] = {1,2,3,4} ;

    SwapingNum(arr , 4) ;
}