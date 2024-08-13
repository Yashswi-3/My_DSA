#include<iostream>
#include<vector>
using namespace std;

int GCD(int a, int b){

    if(a==0){
        return b ;
    }
    if(b==0){
        return a ;
    }

    while( a != b ){
        if(a>b){
            a=a-b ;
        }
        else{
            b=b-a ;
        }
    }
    return b ;
}

int main() {

    int a, b ;

    cout << "a : " ;
    cin >> a ;

    cout << "b ; " ;
    cin >> b ;

    int n = GCD( a, b ) ;

    cout << "GCD of " << a << " and "<< b << " is : " << n << endl ;    

}