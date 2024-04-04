#include<iostream>
using namespace std ;

int fact (int num){
    int ans = 1;
    while(num > 0){
        ans = ans * num ;
        num -- ;
    }
    return ans;
}

int main() {

    int n , r , result ;
    cout << "Enter n : " ;
    cin >> n ;
    cout << "Enter r : " ;
    cin >> r ;

    result = ( ( fact(n) ) / ( (fact(r)) * fact(n - r) ) );
    cout << "Resulted NCR is : " << result ;

}