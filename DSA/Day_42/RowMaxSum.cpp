#include<iostream>
using namespace std ;

int RowWiseSum(int arr[][3]){

    int max = 0 ;
    int maxrow = 0 ;
    for(int row = 0 ; row < 3 ; row++){
        int sum = 0 ;
        for(int col = 0 ; col < 3 ; col++){
            sum += arr[row][col];
        }
        if( max < sum ){
            max = sum ;
            maxrow = row ;
        }
    }

    return maxrow ;
}

int main() {

    int arr[3][3];

    cout << "Enter the array : " << endl ;
    
    for(int row = 0 ; row<3 ; row++ ){
        for(int col = 0 ; col < 3 ; col++ ){
            cin>> arr[row][col];
        }
    }

    cout << "Printing the array : " << endl ;

    for(int row = 0 ; row<3 ; row++ ){
        for(int col = 0 ; col < 3 ; col++ ){
            cout << arr[row][col] << " " ;
        }
        cout << endl ;
    }

    cout << "The row with lasgest sum is : " << RowWiseSum(arr) ;

    return 0;
}