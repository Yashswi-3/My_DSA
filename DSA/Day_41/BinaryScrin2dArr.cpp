#include<iostream>
using namespace std;

bool ispresent(int arr[][4] , int x , int n , int m ){
    
    for(int i =0 ; i < 3 ; i++ ){
        for(int j = 0 ; j < 4 ; j++ ){
            if (arr[i][j] == x ){
                return 1 ;
            }
        }
    }
    return 0 ;

}

int main() {

    int arr[3][4] ; 

    cout << "Enter the array : " << endl ; 

    for (int row=0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            cin >> arr[row][col] ;
        }
    } 

    cout << endl << "The input array is : " << endl ;

    for (int i=0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl ; 
    } 

    int x ;
    cout<<"Enter the target : " ;
    cin >> x ;

    if(ispresent(arr, x , 3, 4 )){
        cout<<"Target is present." ;
    }
    else {
        cout << " Not Found !" ;
    }

}