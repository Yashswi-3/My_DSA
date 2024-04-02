#include<iostream>
#include<cmath>
using namespace std ;

int main() {

    int num ; 
    cout << "Enter num : " ;
    cin >> num ;
    bool isPow = true ;
    
    for(int i=0 ; i < num ; i++){
        if (pow(2,i)==num){
            isPow = true ;
            break;
        }
        else {
            isPow = false ;
        }
    }

    if (isPow){
        cout << "True" ;
    }
    else {
        cout << "False" ;
    }

}