#include<iostream>
#include<algorithm>
using namespace std;

    // int GCD(int n1, int n2){
    //     int min = 0, gcd=0 ;
    //     if(n1<n2) min = n1;
    //     else min = n2 ;
    //     for(int i=1 ; i<=min ;i++){
    //         if(n1%i==0 && n2%i==0) gcd = i ;
    //     }
    //     return gcd;
    // }

int GCD1(int n1, int n2){
    int m = min(n1,n2), gcd=0  ;
    for(int i=min(n1,n2); i>=1; i--){
        if(n1%i==0 && n2%i==0) return i ;
    }
    return gcd ;
}

int main(){

    int x , x1  ;
    cin >> x >> x1 ;

    cout<< GCD1(x,x1) ;

}
