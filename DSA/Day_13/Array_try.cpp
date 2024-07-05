#include<iostream>
using  namespace std ;

void printarray(int arr[],int size){
    cout << "The array is : " ;
    for(int i = 0 ; i<size ; i ++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

int maxint(int arr[], int size){
    int temp = 0 ;
    for(int i=0; i<size ; i++){
        if(temp < arr[i] ){
            temp = max(temp,arr[i]) ;
        }
    }
    return temp ;
}

int minint(int arr[], int size){
    int temp = 10000000 ;
    for(int i=0; i<size ; i++){
        if(temp > arr[i] ){
            temp = min(temp,arr[i]) ;
        }
    }
    return temp ;
}


int main(){
    int size ;
    cout << "Enter the size of array : ";
    cin >> size ;
    
    int arr[size] ;
    cout << "Enter the array : " << endl ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;
    }

    printarray(arr,size);
    
    cout << "The max element in array is : " << maxint(arr,size)<<endl; 
    cout << "The min element in array is : " << minint(arr,size)<<endl; 
    
    
}
