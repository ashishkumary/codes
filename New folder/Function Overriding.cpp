#include <bits/stdc++.h>
using namespace std;


class A{
    public:
    void func(){
        cout << "Class A";
    }
};

class B: public A{
    public:
    void func(){
        cout << "Class B";
    }
};


int main(){
    
  B obj;
  obj.func();
  

}