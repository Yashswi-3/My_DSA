#include<bits/stdc++.h>
using namespace std;

int  main(){
    int x = 10;
    int *ptr = &x;
    int **ptr1 = &ptr;  // 'ptr' holds the address of 'x'
    cout << "Address of x: " << &x << endl;
    cout << "Value of x using pointer: " << *ptr << endl;
    cout << "Value of x without using pointer: " << ptr << endl;

    cout << "Value of x using ** pointer: " << *ptr1 << endl;



//     int arr[] = {10, 20, 30};
//     int *p = arr;  // Points to arr[0]

//     cout << *p << endl;   // 10
//     p++;                 // Move to next element
//     cout << *p << endl;   // 20
//     *p++;
//     cout << *p << endl; 
//     *p++;
//     cout << *p << endl;   // 20
//   // 20



}