#include<iostream>
using namespace std;

bool isPrime(int x){
    int cnt=0;
    for(int i=1; i*i<=x; i++){
        if(x%i==0){
            cnt++ ;
            if((x/i) != i) cnt++ ;
         }
    }
    if(cnt==2) return true;
    else return false;
}

int coutPrime(int x){
    int cnt=0 ;
    for(int i=2; i<=x ; i++){
        if(isPrime(i)) cnt ++ ;
    }
    return cnt ;

}

int main(){

    int x ;
    cin >> x;
    cout << isPrime(x) << endl ;
    cout << coutPrime(x) << endl ;


}