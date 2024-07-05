#include<iostream>
using namespace std;

int Binary_Search(int arr[],int size,int key){

    int st = 0;
    int end = size-1 ;

    int mid = st + ((end - st)/2) ;

    while( st <= end ){

        if( arr[mid] == key ){
            return mid ;
        }

        if(arr[mid] < key){
            st = mid+1 ;
        }

        else {
            end = mid - 1 ;
        }

        mid = st + ((end - st)/2) ;

    }    

    return -1 ;

}

int main(){
    
    int key = 29 ;

    int even[6] = {1,2,3,3,4,29} ;

    int res = Binary_Search( even , 6 , 2 ) ;

    cout << res ;
}