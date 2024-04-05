#include<iostream>
using namespace std; 

bool find( int arr[] , int size , int key){
    for(int i=0; i < size ; i++){
        if( arr[i] == key ){
            return true ;
        }
    }
    return false ;
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

    int key ;
    cout << "Enter the element you want to find : " ;
    cin >> key ;

    if(find( arr , s , key)){
        cout << "The element found in the array!" ;
    }
    else{
        cout << "Element NOT found!" ;
    }


}