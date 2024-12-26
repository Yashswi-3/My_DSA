#include<iostream>
using namespace std;

bool checkPal(int num){
    int dup=num ;
    long long rev=0;
    while(num>0){
        int temp = num%10 ;
        rev = rev*10 + temp;
        num = num / 10 ;
    }
    if(rev == dup) return true;
    else return false ;
}

int main(){
    int n ;
    cin >> n ;
    cout << checkPal(n) ;
}