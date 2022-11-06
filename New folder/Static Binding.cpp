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

void myfunc(A *obj){
    obj->func();
}

int main(){
    
  myfunc(new B);
  

}