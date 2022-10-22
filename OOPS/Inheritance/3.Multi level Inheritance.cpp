#include <bits/stdc++.h>
using namespace std;

// Parent class
class parent {
private: int a;
protected:int b;
public: parent():a(10),b(20){cout<<"parent called"<<endl;}
        ~parent(){cout<<"parent destroyed"<<endl;}
      void disp() {cout<<"a="<<a;}
};

// Child class
class child: protected parent {
private: int c;
protected: int d;
public:child():c(30),d(40){cout<<"child called"<<endl;}
        ~child(){cout<<"child destroyed"<<endl;}
      void disp() {cout<<"c="<<c;}
};

// Grandchild class 
class grandChild: private child {
private: int e;
protected: int f;
public:grandChild():e(50),f(60){cout<<"grandChild called"<<endl;}
        ~grandChild(){cout<<"grandChild destroyed"<<endl;}
      void disp() {
        parent::disp();
        cout<<"\tb="<<b;
        child::disp();
        cout<<"\td="<<d<<"\te="<<e<<"\tf="<<f<<endl;
        }
};

int main() {
  grandChild obj;
  obj.disp();
  return 0;
}

/* OUTPUT
parent called
child called
grandChild called
a=10    b=20c=30    d=40    e=50    f=60
grandChild destroyed
child destroyed
parent destroyed
*/