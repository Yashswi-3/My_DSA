#include<iostream>
using namespace std ;

void revarray(int arr[],int size){
    int start=0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout << "Reversed array is : ";
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }    
}

int main(){
    int arr[5]={1,2,3,4,5};
    revarray(arr,5) ;
}