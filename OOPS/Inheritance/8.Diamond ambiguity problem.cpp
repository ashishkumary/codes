#include <iostream>
using namespace std;

class A {
public: int a;
void get(){cout<<"Enter a:"; cin>>a;}
};

class B : virtual public A {
public:int b;
void get(){cout<<"Enter b:"; cin>>b;}
};

class C : public virtual A {
public:int c;
void get(){cout<<"Enter c:"; cin>>c;}
};

class D : public B, public C {
public:int d; int s;
       void get(){cout<<"Enter d:"; cin>>d;}
    void sum(){s=a+b+c;cout<<"sum="<<s<<endl;}
};

int main()
{
	D obj;
  obj.get();
  obj.B::get();
  obj.C::get();
  obj.A::get();
	obj.a = 10;	

  obj.sum();

	cout << " a from Class B : " << obj.B::a;
	cout << "\n a from Class C : " << obj.C::a;
	cout << "\n b : " << obj.b;
	cout << "\n c : " << obj.c;
	cout << "\n d : " << obj.d;
}

/*OUTPUT
Enter d:40
Enter b:20
Enter c:30
Enter a:1000
sum=60
 a from Class B : 10
 a from Class C : 10
 b : 20
 c : 30
 d : 40
*/
