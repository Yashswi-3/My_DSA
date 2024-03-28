#include<iostream>
using namespace std;

int main(){
    // int num, sum = 0, i = 2 ;
    // cout << "Enter the number till you want to add : ";
    // cin >> num ;
    // while (i<=num){
    //     sum=sum+i;
    //     i=i+2;
    // }
    // cout << "Sum of even number are : "<<sum<<endl;

    int num ,sum = 0, i = 1 ;
    cout << "Enter the number till you want to add : ";
    cin >> num ;
    while (i<=num){
        sum=sum+i;
        i=i+2;
    }
    cout << "Sum of odd number are: "<<sum<<endl;
}