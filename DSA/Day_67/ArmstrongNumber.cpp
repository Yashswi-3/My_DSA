#include<iostream>
using namespace std;

bool armstrongNum(int x) {
    int dup = x, a=0  ;
    while(x>0){
        int temp = x%10 ;
        a += temp*temp*temp ; 
        x = x/10 ;
    }
    if(dup==a) return true ;
    else return false;

}

int main(){
    int num ;
    cin >> num ;
    cout << armstrongNum(num) ;
}