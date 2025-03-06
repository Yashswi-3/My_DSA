#include<bits/stdc++.h>
using namespace std;

class weitht {

    public:
        int kg ;

    weitht(){
        kg=0;
    }
    
    weitht(int val){
        kg = val ;
    }

    friend weitht operator ++(weitht w) ;
    
    void dispaly(){
        cout << kg ;
    }

};

weitht operator ++(weitht w){
    weitht temp;
    temp.kg = ++w.kg;
    return temp;
}

int main() {
    weitht w1 ;
    ++w1 ;
    w1.dispaly();
}

