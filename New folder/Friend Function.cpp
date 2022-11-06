#include <bits/stdc++.h>
using namespace std;


class A{
    int a = 6, b = 2;
    public:
    void func(){
        cout << "Class A";
    }
    friend class B;
};

class B{
    public:
    void func(A obj){
        cout << obj.a + obj.b;
    }
};

int main(){
  A obj1;
  B obj2;
  obj2.func(obj1);
  

}