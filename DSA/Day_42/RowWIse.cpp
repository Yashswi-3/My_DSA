#include<iostream>
using namespace std;

void rowWiseSum(int arr[][4], int m, int n){

    int sum = 0 ;
    for(int i = 0 ; i < 3 ; i++ ){
        for(int j=0 ; j < 4 ; j++) {
            sum += arr[i][j] ;
        }
        cout << "Sun of row "<< i << "is : " << sum << endl ;
        sum = 0 ;
    }
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

    rowWiseSum( arr, 3 , 4) ;

}