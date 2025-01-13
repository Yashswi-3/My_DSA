#include<iostream>
using namespace std ;

void backTrack1(int i, int n){

    if (i == 0) return ;
    backTrack1(i-1, n) ;
    cout << i << endl ; 

}

void backTrack2(int i, int n){

    if (i > n) return ;
    backTrack2(i+1,n) ;
    cout << i << endl ;

}

int main(){
    int i=1, n ;
    cin >> n ;
    // backTrack1(n,n) ;
    backTrack2(i,n) ;

}