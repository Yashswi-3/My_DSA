#include<iostream>
using namespace std ;

bool IsPrime(int x){
    int cnt = 0 ;
    for(int i=1 ; i<=x+1 ; i++){
        if(x%i==0){
            cnt++;
        }
    }
    if(cnt==2) return true;
    else return false ;
}


int main(){

    int x;
    cout << "Enter the num : " ;
    cin >> x ;
    if(IsPrime(x)) cout<< "Is Prime" ;
    else cout<< "Not Prime" ;


}