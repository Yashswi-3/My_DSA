#include<iostream>
using namespace std ;

int firstOcc(int arr[] , int key, int size){
    
    int ans = -1 ,start = 0 ;
    int end = size - 1 ;
    int mid = start + (end - start)/2 ;
    
    while( start <= end ){

        if( arr[mid] == key ){
            ans = mid ;
            end = mid - 1 ;
        }

        else if( arr[mid] < key ){
            start = mid + 1 ;
        }

        else if ( key < arr[mid]) {
            end = mid - 1 ;
        }

        mid = start + (end - start)/2 ;

    }
    
    return ans ;

}

int lastOcc(int arr[] , int key, int size){
    
    int ans = -1 ,start = 0 ;
    int end = size - 1 ;
    int mid = start + (end - start)/2 ;
    
    while( start <= end ){

        if( arr[mid] == key ){
            ans = mid ;
            start = mid + 1 ;
        }

        else if( arr[mid] < key ){
            start = mid + 1 ;
        }

        else if( key < arr[mid] ) {
            end = mid - 1 ;
        }

        mid = start + (end - start)/2 ;

    }
    
    return ans ;

}

int main() {

    int arr[14] = {1,2,3,4,5,6,5} ;

    cout << "The fist occ or 5 is : " << firstOcc( arr , 5 , 7) << endl ;
    cout << "The last occ or 5 is : " << lastOcc( arr , 5 , 7) ;

}