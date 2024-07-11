#include<iostream>
using namespace std ;

int firstOcc(int arr[] , int n , int key){
    int start = 0 ;
    int end = n - 1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1 ;

    while ( start <= end ) {

        if ( arr[mid] == key ) {
            ans = mid ;
            end = mid - 1;
        }
        else if( key > arr[mid] ) {
            start = mid + 1 ;
        }
        else if( key < arr[mid] ) {
            end = mid - 1 ;
        }
        mid = start + (end-start)/2 ;
    }
    return ans ;
}

int lastOcc(int arr[], int n , int key){
    int start = 0 ;
    int end = n -1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1 ;

    while ( start <= end ){

        if ( arr[mid] == key ) {
            ans = mid ;
            start = mid + 1;
        }
        else if( key > arr[mid] ){
            start = mid + 1 ;
        }
        else if( key < arr[mid] ){
            end = mid - 1 ;
        }
        mid = start + (end-start)/2 ;
    }
    return ans ;
}

int main(){

    int size ;
    int key ;
    cout << "Enter the size of array : " << endl ;
    cin >> size ;
    int arr [size] ;

    cout << "Enter the array => " << endl ;
    for( int i=0 ; i < size ; i ++ ) {
        cin >> arr[i] ; 
    }

    cout << "The array is : " << endl ;

    for( int i=0 ; i < size ; i++ ) {
        cout << arr[i] << " " ;
    }

    cout << endl ;
    cout << "Enter the Key you want to search : " << endl ;
    cin >> key ;

    cout << endl ;

    cout << "THe first occ " << firstOcc(arr , size , key) << endl ;
    cout << "THe last occ " << lastOcc(arr , size , key) << endl ;

}