#include<iostream>
using namespace std; 

void reversarr(int arr[],int size){
    int k = 0;
    int j = 1;
    while(k<size-1){
        swap(arr[k],arr[j]) ;
        k+=2;
        j+=2;
    }
    cout<< "array : ";
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;
    reversarr(arr,10);
}