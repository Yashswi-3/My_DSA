#include<iostream>
#include<vector>
using namespace std ;

void InsSort( vector<int> v ){

    int n = v.size() - 1 ;
    for ( int i = 1 ; i < n - 1 ; i ++ ){
        int temp = v[i] ; 
        int j = i - 1 ;
        for (  ; j >= 0 ; j-- ){
            if ( temp < v[j] ) {
                v[j+1] = v [j] ;
            }
            else {
                break ;
            }
        }
        v[j+1] = temp ;
    }

    for( int i = 0 ; i < n ; i++ ){
        cout << v[i] << " " ;
    }

}

int main() {

    vector<int> v = {34,223,5,2,334,3} ;

    InsSort ( v ) ;

}