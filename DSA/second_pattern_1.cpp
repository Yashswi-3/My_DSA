#include<iostream>
using namespace std;

int main(){
    // int num ,i = 0 ,j=0; 
    // cout << "Enter num : ";
    // cin >> num ;
    // while( i < num ){
    //     while( j<num ){
    //         cout << "* " ;
    //         j+=1;
    //     }
    //     i+=1;
    //     j=0;
    //     cout<<endl;
    // }


    // int num ,i = 1 ; 
    // cout << "Enter num : ";
    // cin >> num ;
    // while( i <= num ){
    //     int  j=1 ; 
    //     while( j<=num ){
    //         cout << i ;
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }



    
    // int num ,i = 1 , k=1 ; 
    // cout << "Enter num : ";
    // cin >> num ;
    // while( i <= num ){
    //     int  j=1 ; 
    //     while( j<=num ){
    //         cout << k <<" " ;
    //         j+=1;
    //         k+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    // int num ,row = 1 ; 
    // cout<< "Enter Num : " ;
    // cin >> num ;
    // while ( row <= num ){
    //     int col = 0 ;
    //     while( col < row ){
    //         cout << ( row + col ) << " ";
    //         col += 1 ;
    //     }
    //     cout << endl ;
    //     row += 1 ;
    // }


    int num, row=1;
    cout << "Enter num : ";
    cin >> num ;

    while (row <= num){
        int col = 0;
        while (col < row){
            cout <<(row - col) <<" ";
            col += 1;
        }
        cout << endl ;
        row += 1;
    }





}