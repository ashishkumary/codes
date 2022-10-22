#include <iostream>
using namespace std;

class A {
public: int a;
void get(){cout<<"Enter a:"; cin>>a;}
};

class B : public A {
public:int b;
void get(){cout<<"Enter b:"; cin>>b;}
};

class C : public A {
public:int c;
void get(){cout<<"Enter c:"; cin>>c;}
};

class D : public B, public C {
public:int d; int s;
       void get(){cout<<"Enter d:"; cin>>d;}
    // void sum(){s=a+b+c;cout<<s;}
};

int main()
{
	D obj;
  obj.get();
  obj.B::get();
  obj.C::get();
  // obj.A::get();
  
	// // obj.a = 10;				 // Statement 1, Error
	// // obj.a = 100;				 // Statement 2, Error

	obj.B::a = 10; // Statement 3
	obj.C::a = 100; // Statement 4

	cout << " a from Class B : " << obj.B::a;
	cout << "\n a from Class C : " << obj.C::a;
	cout << "\n b : " << obj.b;
	cout << "\n c : " << obj.c;
	cout << "\n d : " << obj.d;
}
