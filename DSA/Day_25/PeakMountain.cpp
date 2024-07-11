#include<iostream>
using namespace std;

int peakele(int arr[], int n){

    int s = 0 , e = n - 1 ;
    int mid = s + (e - s)/2 ;

    while( s < e ){
        if ( arr[mid] < arr[mid+1] ){
            s = mid + 1 ;
        }
        else {
            e = mid ;
        }
         mid = s + (e - s)/2 ;
    }
    return s ;

}


int main(){

    int arr[3] = {1,2,1} ;
    cout << peakele( arr , 3) ;

}