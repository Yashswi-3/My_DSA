#include<iostream>
using namespace std ;

int unique(int arr[] , int size){
    int count = 0 ;
    // for(int i=0 ; i<size ; i++){
    //     for(int j=0 ; j<size ; j++){
    //         if ( arr[i] == arr[j] ){
    //             count++;
    //         }
    //     }
    //     if(count == 1) {
    //             return arr[i] ;
    //     }
    // }

    for(int i=0 ; i<size ; i++){
        count = count^arr[i]  ;
    }
    
    return count ;


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

    cout<< "Unique element is  : " << unique(arr , num) ;

}