#include<iostream>
using namespace std;

bool isPrime(int n){
    for ( int i = 2 ; i < n ; i++ ){
        if( n % i == 0 ){
            return 1 ;
        }
    }
    return 0 ;
}

int main() {

    cout << "ENter n ; " ;
    int n ; 
    cin >> n ; 

    if(isPrime(n)){
        cout << "Not Prime !" << endl ;
    }
    else{
        cout << "Prime !" << endl ;
    }

}