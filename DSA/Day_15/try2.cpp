#include<iostream>
using namespace std;

bool test(int num){
    if(num & 0){
        
        return true;
    }
    else {
        return false;
    }
}

int main(){

    int num ;
    cout << "Enter Num : ";
    cin >> num ;

    if(test(num)){
        cout << "EVEN!" ;
    }
    else{
        cout << "ODD!" ;
    }
}