#include<iostream>
using namespace std;

int main() {
    int a ;
    cout << "Enter a : ";
    cin >> a ;
    if (a<20) {
        cout << "less than 20 !\n";
    }
    else if (a>20){
        cout << "Greater than 20 \n";
    }    
     else if (a == 24) {
        cout << " a == 24 ! \n";
    }
}
