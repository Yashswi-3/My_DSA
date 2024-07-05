#include<iostream>
using namespace std ;

int firstOcc(int arr[], int n, int key) {

    int s = 0 , e = n-1 ;
    int mid = s +(e-s)/2 ;
    int ans ;

    while ( s <= e ){
        
        if( arr[mid] == key ){
            ans = mid ;
            e = mid - 1 ;
        }
        else if ( key > arr[mid] ){
            s = mid + 1 ;
        }
        else if ( key < arr[mid] ){
            e = mid - 1 ;
        }
        mid = s + (e-s)/2 ;
    }
    return ans ;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0 , e = n-1 ;
    int mid = s +(e-s)/2 ;
    int ans ;

    while ( s <= e ){
        
        if( arr[mid] == key ){
            ans = mid ;
            s = mid + 1 ;
        }
        else if ( key > arr[mid] ){
            s = mid + 1 ;
        }
        else if ( key < arr[mid] ){
            e = mid - 1 ;
        }
        mid = s + (e-s)/2 ;
    }
    return ans ;
}

int main(){

    int even[9] = {1,2,4,4,4,5,6,8,4} ;

    cout << "The first occ of 4 is at : " << firstOcc( even , 9 , 4 ) << endl ;
    cout << "The last occ of 4 is at : " << lastOcc( even , 9 , 4 ) << endl ;

    return 0 ;
}