#include<iostream>
#include<vector>
using namespace std;

void printingarray(vector<vector<int>> arr , int mrow, int mcol){

    cout << "The changed array : " << endl ; 

    for( int row = 0 ; row < mrow ; row++){
        for(int col = 0 ; col < mcol ; col++){
            cout << arr[row][col] << " " ;
        }
        cout << endl ;
    }

}

int main(){

    int mrow, mcol ;

    cout << "Enter the number of Rows : " << endl ; 
    cin >> mrow ;

    cout << "Enter the number of Columns : " << endl ; 
    cin >> mcol ;

    vector<vector<int>> ar(mrow , vector<int>(mcol)) ;


    cout << "Enter the elemnts : " << endl ;

    for(int i = 0 ; i < mrow ; i++ ){
        for (int j = 0 ; j < mcol ; j++){
            cin >> ar[i][j] ;
        }
    }

    cout << "The Array is : " << endl ;

    for(int i = 0 ; i < mrow ; i++ ){
        for (int j = 0 ; j < mcol ; j++ ){
            cout << ar[i][j] << " " ;
        }
        cout << endl ; 
    }

    printingarray( ar , mrow , mcol) ;

}