#include<iostream>
using namespace std ;

int findroot ( int x ) {

    int s = 1 , e = x ;
    int mid = s + (e-s)/2 ;
    int ans = -1 ;

    while ( s <= e ){

        int squ = mid * mid ;

        if ( squ == x ) {
            return mid ;
        }
        else if ( squ < x ) {
            ans = mid ;
            s = mid + 1 ;
        }
        else {
            e = mid - 1 ;
        }
        mid = s + (e-s)/2 ;

    }
    return ans ;


}

int main(){

    int x ;
    cout << "Enter the x : ";
    cin >> x ;

    cout << "Square Root is : " << findroot( x ) ;
 
}