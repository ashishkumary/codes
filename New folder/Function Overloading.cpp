#include <bits/stdc++.h>
using namespace std;


class human{
    public:
    
    void func(){
        cout << "function overloading 1";
    }
    
    void func(int a){
        cout << "function overloading 2";
    }
};


int main(){
    
  human a;
  a.func();

}