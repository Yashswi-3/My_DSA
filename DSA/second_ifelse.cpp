#include<iostream>
using namespace std;

int main(){

    char val;
    cout << "Enter the character : ";
    cin >> val ;

    if (val>=48 && val<=57){
        cout <<"The Entered caharcter is NUMERIC!\n";
    }
    else if(val>=65 && val<=90){
        cout <<"The Entered character is Uppercase!\n";
    }
    else if(val>=97 && val<=122){
        cout <<"The Entered character is Lowercase!\n";
    }
    
    return 0;
}