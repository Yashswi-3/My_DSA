#include<iostream>
using namespace std ;

void swaping( int arr[] , int size ){
    int i = 0 ;
    while(i+1 < size){
        swap(arr[i],arr[i+1]);
        i+=2;
    }
}

void printarr( int arr[] , int size ){
    cout << "The swaped array is : ";
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " " ;
    }
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

    swaping(arr , num) ;
    printarr(arr , num) ;

}