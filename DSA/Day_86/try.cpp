#include<bits/stdc++.h>
using namespace std;

int main() {

    // int a[5] = {1,3,4,2,5} ;

    // int n = sizeof(a)/sizeof(a[0]) ;


    // sort(a,a+5) ;


    // for(int i=0 ; i<n ; i++){
    //     cout << a[i] << " " ;
    // }

    int n = 1034 ;

    string str = to_string(n);

    if (next_permutation(str.begin(), str.end())) {
        cout << stoi(str); // Convert back to integer for output
    }
}