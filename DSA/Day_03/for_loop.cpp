#include<iostream>
using namespace std;

int main() {

    int num ; 
    cout << "Enter num : " ;
    cin >> num ;


// Without the conditions in the for loop bracket !

    // int n ;
    // cout << "Enter num : " ;
    // cin >> n ;
    // int i=1 ;
    // for( ;  ; ){
    //     if (i<=n){
    //     cout << "Num is : " << i << endl ;
    //     }
    //     else  {
    //         break ;
    //     }
    //     i++; 
    // }

    
// multiple conditions !

    // for(int  a= 0, b= 0 ; a <= 50 && b <= 50 ; a++ , b++){
    //     cout << "a is  : "<< a << " and b is : " << b << endl;
    // }


// Fibonacci series 

    // int num ;
    // cout << "Enter Num : " ;
    // cin >> num ;

    // int a = 0, b = 1 ;
    // cout << a ;

    // for(int i=1 ; i<=num ; i++){
    //     int temp = a+b ;
    //     cout << " , " << b ;
    //     a = b ;
    //     b = temp ;
    // }


// Prime 

    // int num ; 
    // cout << "Enter num : " ;
    // cin >> num ;
    // bool notPrime = false ;

    // for(int i=2 ; i<num ; i++){
    //     if(num%i==0){
    //         notPrime = true ;
    //         break;
    //     }
    // }  
    // if (notPrime){
    //     cout << "Not Prime!" ;
    // } 
    // else {
    //     cout << "Prime!" ;
    // }



// practice que



    // for (int i=0 ; i<=num ; i++){
    //     cout << i << endl ;
    //     i++ ;
    // }

    // for (int i=0 ; i<=num ; i+=2){
    //     cout << i << endl ;
    //     if(i&1){
    //         continue;
    //     }
    //     i++ ;
    // }



// Product and Sum of digit of the given number !

    // int prod=1 , sum=0 ;

    // while(num!=0){

    //     int temp = num % 10 ;
    //     prod = prod * temp ;
    //     sum = sum + temp ;

    //     num = num / 10 ;

    // }

    // cout << "Product is  : " << prod << endl ;
    // cout << "Sum is : " << sum <<endl ;
    // cout << "Product - Sum = " << prod - sum ;




// number of 1's in an binary number !

    int count = 0 ;
    while(num!=0){
        if(num&1){
            count+=1;
        }
        num = num >> 1 ;
    }
    cout << count ;
    
}