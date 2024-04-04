#include<iostream>
using namespace std;

// void isEven (long long int num){
//     if(num & 1){
//         return  ;
//     }
//     else{
//         for(int i=0 ; i<num ; i++){
//             cout<< i ;
//         }
//     }

//     return ;
// }

// int main() {
//     long long int num ;
//     cout << "Enter num : ";
//     cin >> num ; 

//     // if (isEven(num)){
//     //     cout<< "Even";
//     // }
//     // else{
//     //     cout << "Odd" ;
//     // }   

//     isEven(num) ;
// }

int test (int n ){
    n ++ ;
    return n ;
}
int main() {
    int n ;
    cin >> n ;
    test(n)  ;
    
    cout << n ;

}