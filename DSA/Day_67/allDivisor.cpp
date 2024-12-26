#include<iostream>
using namespace std;

int allDivisor(int x) {
    for(int i=1 ; i<=x ; i++){
        if(x%i==0) cout << i << endl ;
    }
}

int main(){
    int num ;
    cin >> num ;
    cout <<allDivisor(num) ;
}