#include<bits/stdc++.h>
using namespace std;

int unique(vector<int> arr){
    int n = arr.size();
    int k = 0 ;
    for(int i=0 ; i<n ; i++){
        if (arr[i]!=arr[k]){
            k++;
            arr[k]=arr[i];
        }
    }
    return k+1 ;    

}

vector<int> dup(vector<int> arr){

}

int main(){

    vector<int> arr = {1,2,3,4,4,5,5} ;
    cout << unique(arr) << endl ; 

    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << " " ;
    }

}