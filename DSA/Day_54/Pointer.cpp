#include<iostream>
using namespace std;

int main() {

    // int *p = 0 ;

    // cout << *p << endl ;


    // gives Error , below     
    // int i = 7 ; 
    
    // int *p = &i ;

    // cout << "p : " << p << endl ;
    // cout << "*p : " << *p << endl ;

    // int k = 9 ;
    // int *p = &k ;

    // cout << "p : " << p << endl ;
    // cout << "*p : " << *p << endl ;

    /*
    int i = 7 ; 
    int *p = 0 ;
    p = &i ;

    cout << "p : " << p << endl ;
    cout << "*p : " << *p << endl ;

    int k = 9 ;
    int *q = &i ;

    cout << "q : " << q << endl ;
    cout << "*q : " << *q << endl ;
    */

   /*
   int num = 5 ;
   int *i = &num ;

    cout << "i : " << i << endl ;
    cout << "*i : " << *i << endl ;

    cout << "i : " << i << endl ;
    cout << "++*i : " << ++*i << endl ;
    */

   int num = 5 ;
   int *i = &num ;
   int *p = i ;

    cout << "i : " << i << endl ;
    cout << "*i : " << *i << endl ;

    cout << "p : " << p << endl ;
    cout << "++*p : " << ++*p << endl ;

    cout << "i : " << i << endl ;
    cout << "*i : " << *i << endl ;    

    num = *p+*i ;

    cout << "i : " << i << endl ;
    cout << "*i : " << *i << endl ;

    cout << "p : " << p << endl ;
    cout << "*p : " << *p << endl ;


}