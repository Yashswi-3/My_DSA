#include<iostream>
#include<vector>
using namespace std ;

void selSort( vector<int> arr ){

    int n = arr.size()   , minval;
    for ( int i = 0 ; i < n-1 ; i++ ){
        minval = i ;
        for ( int j = i+1 ; j < n ; j++ ) {
            
            if( arr[minval] > arr[j] ){
                minval = j ;
            }

        }
        swap( arr[i], arr[minval] );
    }
    
    for (int i = 0 ; i < n ; i++ ) {
        cout << arr [ i ] << " ";
    }  
}

int main() {
    
    vector<int> v = {1,4,5,6,3,1} ;

    selSort( v ) ;
}