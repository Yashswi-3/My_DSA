#include<iostream>
using namespace std;

int main() {
    int num , count=0 ,i=2 ;
    cout << "Enter num : ";
    cin >> num ;
    while (i< num){
        if (num%i==0){
            count=count+1;
        }
        i=i+1;
    }
    if(count <= 0){
        cout << "num is a Prime Number!";
    }
    else{
        cout << "Not a Prime number!";
    }
}