#include<iostream>
using namespace std;

int SD(int x){
    long long cnt=0 ;
    for(int i=1 ; i<=x ; i++){
        for(int j=1 ; j<=i ; j++){
            if(i%j==0) cnt+=j;
        }
    }
    return cnt;
}

int main(){

    int x ; 
    cin >> x ; 
    cout<< SD(x) ;

}