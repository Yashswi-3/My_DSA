#include<iostream>
using namespace std;

int main() {

    cout << "Enter n : " ;
    int n ;
    cin >> n ;

    if ( n&1 ){
        cout << "ODD !" ;
    }
    else {
        cout << "EVEN !" ;
    }

}