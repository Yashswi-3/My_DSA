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

int countPrimes(int n) {
        int cnt=0 ;
        for(int i=2 ; i<=n ; i++){
            if (IsPrime(i)) cnt++ ;
        }
        return cnt;
    }

int main(){

    int x;
    cout << "Enter the num : " ;
    cin >> x ;
    if(IsPrime(x)) cout<< "Is Prime" << endl ;
    else cout<< "Not Prime" << endl ;
    cout << "Number of Prime till " << x << " including it is " << countPrimes(x) ;


}