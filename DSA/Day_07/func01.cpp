#include<iostream>
using namespace std;

bool isEven (long long int num){
    if(num & 1){
        return false ;
    }
    return true;
}

int main() {
    long long int num ;
    cout << "Enter num : ";
    cin >> num ; 

    if (isEven(num)){
        cout<< "Even";
    }
    else{
        cout << "Odd" ;
    }   
}