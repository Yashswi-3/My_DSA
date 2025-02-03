#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n ;
    int arr[n] ; 
    map<int , int> map;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        map[arr[i]]++;
    }

    for( auto it : map){
        cout << it.first << " -> " << it.second << endl ;
    }

    int a ;
    cin >> a ;
    while(a--){
        int num ;
        cin >> num ;

        cout << map[num] <<  endl ;

    }


}