#include<iostream>
using namespace std;

void farray(int arr[], int size){
    int max = INT32_MIN, min = INT32_MAX ;
    for(int i=0 ; i < size ; i++){
        if(arr[i] > max ){
            max = arr[i];
        }
        if(arr[i] < min ){
            min = arr[i] ;
        }
    }
    cout << endl  << "Max element : " << max << endl ;
    cout << endl  << "Min element : " << min << endl ;
}

void printarr(int arr[], int size){

    cout << endl  << "Start of the array : " << endl ;
    for(int i=0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl  << endl << "End of the array !" << endl ;

}



int main(){

   int s ;
   cout << "Enter the size of array : " ;
   cin >> s ;

   int arr[s] ;

   for (int i=0 ; i < s ; i++ ){
        cout << endl  << "Enter the "<< i << " element : " ;
        cin >> arr[i] ;
   }
    cout << endl ; 
    printarr(arr , s) ;
    farray(arr , s) ;

}