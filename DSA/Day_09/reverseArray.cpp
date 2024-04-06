#include<iostream>
using namespace std; 

void reverseArray(int arr[] , int size){
    int st = 0 ;
    int ed = size - 1 ;
    while( st <= ed ){
        swap( arr[st] , arr[ed] ) ;
        st++;
        ed--;
    }

    cout << "The Reverse array : " ;
    for(int i = 0 ; i < size ; i ++ ){
        cout << arr[i] << " " ; 
    }
}

int main() {

    int s ;
    cout << "Enter the size of array : " ;
    cin >> s ;

    int arr[s] ;

    for (int i=0 ; i < s ; i++ ){
            cout << endl  << "Enter the "<< i << " element : " ;
            cin >> arr[i] ;
    }
        cout << endl ; 
    
    reverseArray( arr , s ) ; 

}