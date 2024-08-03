#include<iostream>
using namespace std;

void waveformArray( int arr[][3] ){

    cout << "The modified array is : " << endl ; 
    
    for(int i = 0 ; i < 3 ; i++){
        
        if(i&1){
            for(int j = 0 ; j < 3 ; j++){
                cout << arr[i][j] << " " ;
            }
        }
        else {
            for(int j = 2 ; j <= 0 ; j--){
                cout << arr[i][j] << " " ;
            }
        }

    }

} 

int main(){

    int arr[3][3] ;

    cout << "Enter the array ; " << endl ;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Your array is : " << endl ;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }

    waveformArray( arr ) ;


}