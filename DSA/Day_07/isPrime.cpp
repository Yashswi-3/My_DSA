#include<iostream>
using namespace std ;

bool isPrime(int num){
    for(int i=2; i<num ; i++){
        if(num % i == 0){
            return false ;
        }
    }
    return true ;
}

int main() {

    int num ;
    cout << "Enter num : " ;
    cin >> num ;

    if(isPrime(num)){
        cout << "Number is Prime!" << endl ;
    }
    else {
        cout << "Number is Not Prime!" << endl ;
    }
}