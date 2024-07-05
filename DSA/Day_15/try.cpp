#include<iostream>
using namespace std;

void test(char ch){

    if(ch >= 65 && ch <= 90)
    {
        cout<< "UpperCase";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout<< "LowerCase";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "NumberCase" ;
    }
    
}

int main(){

    char ch ;
    cout<<"Enter the char : ";
    cin >> ch ;

    test(ch);

}