#include<iostream>
using namespace std;

int main(){

    // int num, row = 1 ; ;
    // cout << "Enter num : ";
    // cin >> num ;
    // // char letter = 65 ;
    // while(row <= num){
    //     int col = 1 ;
    //     while(col <= num){
    //         cout << char('A' + row - 1) << " " ;
    //         col += 1 ;
    //     }
    //     cout << endl ;
    //     row += 1 ;
    //     // letter += 1 ;
    // }


    // int num, row = 1 ; ;
    // cout << "Enter num : ";
    // cin >> num ;
    // // char letter = 65 ;
    // while(row <= num){
    //     int col = 1 ;
    //     while(col <= num){
    //         cout << char('A' + col - 1) << " " ;
    //         col += 1 ;
    //     }
    //     cout << endl ;
    //     row += 1 ;
    //     // letter += 1 ;
    // }


    // int num, row = 1 ; ;
    // cout << "Enter num : ";
    // cin >> num ;
    // char letter = 65 ;
    // while(row <= num){
    //     int col = 1 ;
    //     while(col <= num){
    //         cout << letter << " " ;
    //         col += 1 ;
    //         letter += 1 ;
    //     }
    //     cout << endl ;
    //     row += 1 ;
    // }


    // int num, row = 1 ; ;
    // cout << "Enter num : ";
    // cin >> num ;
    // while(row <= num){
    //     int col = 1 ;
    //     while(col <= num){
    //         cout << (row+col-1) << " " ;
    //         col += 1 ;
    //     }
    //     cout << endl ;
    //     row += 1 ;
    // }


    // int num, row = 1 ;
    // cout << "Enter num : ";
    // cin >> num ;
    // char letter = 'A'+num-row ;
    // while(row <= num){
    //     char letter = 'A'+num-row ;
    //     int col = 1 ;
    //     while(col <= row){
    //         cout << letter << " " ;
    //         col += 1 ;
    //         letter += 1 ;
    //     }
    //     cout << endl ;
    //     row += 1 ;
    // }


    // int num, row = 1 ;
    // cout << "Enter num : ";
    // cin >> num ;
    
    // while(row <= num){
        
    //     int space = num - row ;
    //     while (space){
    //         cout << " ";
    //         space = space - 1 ;
    //     }

    //     int col = 1 ;
    //     while (col <= row){
    //         cout << "*";
    //         col += 1;
    //     }
    //     cout << endl ;
    //     row += 1 ;
    // }




    int num , row = 1 ;
    cout << "Enter num : ";
    cin >> num ; 

    while ( row <= num ) {

        // space print first
        int space = num - row ;
        while ( space ) {
            cout << " ";
            space = space - 1 ;
        }

        // left numbers
        int col = 1 ;
        while ( col <= row ) {
            cout << col ;
            col += 1 ;
        }

        // right numbers
        int col1 = row - 1 ;
        while ( col1 ) {
            cout << col1  ;
            col1 -= 1;
        }

        cout << endl ;
        row += 1 ;

    }

}
