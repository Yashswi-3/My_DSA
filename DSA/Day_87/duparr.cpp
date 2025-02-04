#include<bits/stdc++.h>
using namespace std;

int unique(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n ; i++){
        if ( arr[i] == arr[i+1] ){
            n--;
        }
    }
    return n ;
}

vector<int> dup(vector<int> arr){
    
}

int main(){

    vector<int> arr = {1,2,3,4,4,5,5} ;
    cout << unique(arr) << endl ; 

}