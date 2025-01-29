#include<bits/stdc++.h>
using namespace std;



int main(){

    vector<int> a = { 11,2,34,5,5,6 } ;

    for(int i : a ){
        cout << i << " " ;
    }
    a.erase(a.begin());

    for(int i : a ){
        cout << i << " " ;
    }
}