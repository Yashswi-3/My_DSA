#include<iostream>
using namespace std;

int Binary_Scr(int arr[], int size, int key){

    int start = 0 ;
    int end = size - 1 ;

    int mid = start + (end - start)/2 ;

    while( start <= end ){

        if( arr[mid] == key ){
            return mid ;
        }

        if ( arr[mid] < key ){
            start = mid + 1 ;
        }

        else {
            end = mid - 1 ;
        }

        mid = start + (end - start)/2 ;

    }

    return -1 ;

}

int main() {

    int key , size ;

    cout << "Enter the size of array : " ;
    cin >> size ;

    int arr[size] ;

    cout << "Enter the elements of array => "<< endl ;

    for (int i=0 ; i < size ; i++){
        cin >> arr[i] ;
    }

    cout<< "Enter the key : ";
    cin >> key ;

    int res = Binary_Scr(arr , size , key) ;

    cout << "The index at the elemetn is present : " << res ; 

}