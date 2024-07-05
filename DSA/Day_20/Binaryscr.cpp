#include<iostream>
using namespace std ;

int findkey( int arr[] , int n , int k ){

    int s = 0 , e = n - 1 ;
    int mid = s + (e - s)/2 ;
    
    while (s <= e ){

        if (arr[mid] == k){
            return mid ;
        }

        if (arr[mid] > k) {
            e = mid - 1;
        }

        else {
            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }


}

int main() {

    int arr[8] = {1,2,3,4,5,6,7,8};
    int k = 4 ;

    cout << findkey( arr, 8 , 8 );


}