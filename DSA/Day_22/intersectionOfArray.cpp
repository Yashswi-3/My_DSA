#include<iostream>
#include<vector>
using namespace std ;

void intersectionOfArray( int arr1[] ,int s1 ,int arr2[] ,int s2 ){
    vector<int> myVector;    
    for(int i=0 ; i < s1 ; i++ ){
        int temp = arr1[i];
        for(int j=0 ; j < s2 ; j++){
            if ( temp == arr2[j] ){
                myVector.push_back(temp); 
            }
        }
    }
    int si = myVector.size() ;
    for(int i = 0 ; i < si ; i++){
        cout << myVector[i] << " ";
    }
}

int main() {

    int arr1[5] = {1,2,3,4,5} ;
    int arr2[5] = {2,3,4,5,6} ;

    intersectionOfArray(arr1 ,5 ,arr2 ,5 );


}