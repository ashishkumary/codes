#include <bits/stdc++.h>
using namespace std;

class A{
public: void disp(){cout<<"A for Apple"<<endl;}
};

class B{
public: void disp(){cout<<"B for Ball";}
};

class C: public A, public B{

};

int main() {
 C obj;
// obj.disp();   //member found by ambiguous name
// compiler got confuse disp() belongs to A class or B class
// resolved using scope resolution operator
obj.A::disp();
obj.B::disp();
  
}