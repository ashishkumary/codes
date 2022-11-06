#include <bits/stdc++.h>
using namespace std;


class A{
    public:
    virtual void func(){
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
    
  A *obj = new B;
  obj->func();
  

}