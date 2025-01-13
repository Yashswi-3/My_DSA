#include<iostream>
using namespace std ;

void follow(int i){
    if( i == 3) return ;
    cout << i << endl ;
    i++;
    follow(i) ;
}

int main(){
    int i = 0 ;
    follow(i) ;

}