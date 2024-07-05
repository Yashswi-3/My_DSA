#include<iostream>
using namespace std ;

int uniqueArray(int arr[] , int size){
    int ans = 0 ;
    for(int i=0 ; i<size ; i++){
        ans = ans ^ arr[i] ;
    }
    for(int i=0 ; i<size ; i++){
        ans = ans ^ i ;
    }
    return ans ;
}

int main(){
    int num ;
    cout << "Enter the size of array : " ;
    cin >> num ;

    int arr[num] ;
    cout << "Enter the elements of array : " << endl ;

    for (int i=0 ; i<num ; i++){
        cin >> arr[i] ;
    }
    cout<< "The unique element is : " << uniqueArray(arr , num) ;
}