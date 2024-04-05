#include<iostream>
using namespace std; 

int sum( int arr[] , int size ){
    int sum = 0 ;
    for (int i=0 ; i < size ; i++ ){
        sum = sum + arr[i];
    }
    return sum;
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

    cout << "The sum of array is : " << sum(arr , s) ;

}