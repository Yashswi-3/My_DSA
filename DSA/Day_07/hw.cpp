#include<iostream>
using namespace std;

int bitcount (int a , int b){
    int acount = 0, bcount = 0 ;
    while( a != 0 || b != 0 ){
        if (a&1){
            acount+=1;
        }
        a = a >> 1 ;
        if ( b & 1 ){
            bcount += 1 ;
        }
        b = b >> 1 ;
    }
    return acount+bcount;

}

int main() {

    int num1 , num2 ;
    cout << "Enter num1 : " ;
    cin >> num1 ;
    cout << "Enter num2 : ";
    cin >> num2 ;

    cout << bitcount(num1,num2);

}