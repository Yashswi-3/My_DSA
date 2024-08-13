#include<iostream>
using namespace std;

int main() {

    int n ;
    cin >> n ;

    for(int i = 2 ; i < n ; i++){
        cout << "for i : " << i << endl ;
        for( int j=2*i ; j < n ; j=j+i){
            cout << "j is : " << j << endl ;
        }
    }

}