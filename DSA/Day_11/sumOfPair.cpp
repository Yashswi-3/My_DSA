#include<iostream>
#include<vector>
using namespace std ;

vector<int> sumofpair(vector<int> arr, int k){
    vector<int> res ;
    for(int i=0; i<arr.size() ; i++){
        for(int j=i+1 ; j < arr.size() ; j++){
            if (arr[i]+arr[j]==k){
                res.push_back(arr[i]);
                res.push_back(arr[j]);
            }
        }
    }    
    return res ;
}

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    vector<vector<int>> res ;
//     for(int i=0; i<arr.size() ; i++){
//         for(int j=i+1 ; j < arr.size() ; j++){
//             if (arr[i]+arr[j]==s){
//                 vector<int> temp ;
//                 temp.push_back( min ( arr[i] , arr[j] ) );
//                 temp.push_back( max ( arr[i] , arr[j] ) );
//                 res.push_back(temp);
//             }
//         }
//     }    
//     sort(res.begin(), res.end());
//     return res ;
// }

void printvec(vector<int> vec){
    for(int i=0; i<vec.size() ; i++){
        cout << vec[i] << " " ;
    }
}

int main() {

    int num ;
    cout << "Enter the size of array : " ;
    cin >> num ;
    vector<int> main ;
   for(int i=0 ; i<num ; i++){
    int temp ;
    cin >> temp ;
    main.push_back(temp);
   }

   int find;
   cout << "Enter the element whos sum you want to find : ";
   cin >> find ;

    vector<int> resuslt = sumofpair(main , find) ;
    printvec(resuslt) ;

}
