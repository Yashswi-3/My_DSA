#include<iostream>
using namespace std; 

void reverse( int arr , int size ){

   int start= 0 ;
   int end = size -1 ;

   while(start<=end){
        swap(arr[start], arr[end]);
        start ++ ;
        end -- ;
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



}