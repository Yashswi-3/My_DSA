#include<iostream>
#include<vector>
using namespace std ;

int main(){
    
    // int num1 ;
    // cout << "Enter a : " ;
    // cin >> num1 ;

    // int num2 ;
    // cout << "Enter b : " ;
    // cin >> num2 ;

    // int c = num1 ^ num2 ;

    // cout << "a^b : " << c ;
    vector<int> arr = {5,1,2,2,5,7,7,8,8} ;

    int ans = 0;
    for(int i=0 ; i < arr.size() ; i++){
        ans = ans^arr[i] ;
        cout << ans << " " ;        
    }
}