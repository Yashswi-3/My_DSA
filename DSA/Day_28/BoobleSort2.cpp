#include<iostream>
#include<vector>
using namespace std ;

void bubbleSort( vector<int> v ) {

    int n = v.size() - 1 ;
    for( int i=0 ; i < n-1  ; i++ ){
        bool Swap = false ;
        for( int j = 0 ; j < n-i ; j++ ){
            if ( v[j] > v[j+1] ){
                swap(v[j], v[j+1]) ;
                Swap = true ;                
            }
        }
        if ( Swap == false ){
            break ;
        }
    }

    for( int i = 0 ; i < n ; i++ ) {
        cout << v[i] << " " ;
    }

}


int main() {

    vector<int> v = {21,626,199,67,146,85,141} ;

    bubbleSort( v ) ;

}