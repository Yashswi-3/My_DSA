#include<iostream>
using namespace std;

int main(){

    cout<<"Nameste Duniya\n";

    int a = 33 ; 
    cout << "int store 4 byte - 32 bit value -> "<< a << " is stored in 4 byte 00000000 00000000 00000000 00100001 !" << endl;

    char y = 'Y';
    cout << "char store 1 byte - 8 bit value -> "<< y << " is stored in 1 byte 01011001 !"<< endl;

    // Type Casting 

    int a1 = 'a' ;
    cout << a1 << " : a is type-casted into 97 its ascii value \n";

    char y1 = 89 ;
    cout << y1 << " : 89 is type-casted into Y for its ascii value\n";

    char c = 123456 ;
    cout << c << " : here it will divide 12345 into 4 byte to get the ascii value but will only take the last 1 byte data which is 64 that gives @ !"<< endl;
    
    // DIvide operator -> what ever the variable is and the type of numerator !

    int a2 = 2/3 ;
    cout << a2 << " : it gives 0 bec it is stored in int variable and it is also int/int" << endl ;

    int d = 2.0/5 ;
    cout << d << " : it gives 0 bec it is stored in int variable, it will convert 0.4 into 0 to make it int ! " << endl ;

    float g = 2.0 / 5 ;
    cout << g << " : it is an float by int so it gives float ."

}