#include<iostream>
using namespace std ;

int sum(int arr[], int size){

    int sum = 0 ;
    for (int i=0 ; i < size ; i++  ){
        sum = sum + arr[i] ;
    }
    return sum ;
}

int main() {

    int num ;
    cout << "Enter the size of array : " ;
    cin >> num ;

    int arr[num] ;
    cout << "Enter the elements of array : " << endl ;

    for (int i=0 ; i<num ; i++){
        cin >> arr[i] ;
    }

    cout << "The sum of all elements is : " << sum(arr, num) ;


}