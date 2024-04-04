#include<iostream>
using namespace std;

int fib (int n) {
    int a = 0, b = 1 ;
    for (int i=0 ; i<n-2 ; i++){
        int temp = a ;
        a = b ;
        b = temp + b ;
    }
    return b;
}

int main() {
    
    int num ;
    cout << "Enter num : " ;
    cin >> num ; 

    cout << fib(num) ;

}