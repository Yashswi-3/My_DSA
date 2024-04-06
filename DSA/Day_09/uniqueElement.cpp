#include<iostream>
using namespace std ;

bool findUnique( int arr[] , int size ){
    int count = 0 ;
    for(int i=0 ; i < size ; i++ ){
        int temp = arr[i];
        for(int j=0 ; j < size ; j++){
            if ( temp == arr[j] ){
                count++ ;
            }
        }
        if (count >= 2){
        return true ;
        }
        else{
            return false ;
        }
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

    // int arr1[3] = {1,2,3} ;

     if(findUnique(arr , s)){
        cout << "Repeated numbers!" ; 
     }  
     else{
        cout << "No Repeated numbers!" ;
     }


}