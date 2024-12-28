#include<iostream>
using namespace std;

int coutPrime(int x){
    int maincnt=0 ;
    for(int j=2; j<=x ; j++){
        int cnt=0;
        for(int i=1; i*i<=j; i++){
            if(j%i==0){
                cnt++ ;
                if((j/i) != i) cnt++ ;
            }
        }
        if(cnt==2) {
            maincnt++ ;
        }
    }
    return maincnt ;

}

int main(){

    int x ;
    cin >> x;
    cout << coutPrime(x) << endl ;


}