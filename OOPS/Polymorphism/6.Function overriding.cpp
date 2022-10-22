#include <bits/stdc++.h>
using namespace std;

class a {
  public: 
       void display(){ cout << "Class A"<<endl; } };


class b: public a {
  public: 
       void display(){ cout << "Class B"<<endl;}  };


class c: public a {  };


int main() {
    b obj1;
    obj1.display();      // function overriding 
  
    c obj2;
    obj2.display();      // base class function is called in the absence of display() in derived class
  return 0;
}