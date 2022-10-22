//If both base and derived classes are caught as exceptions, then the catch block of the derived class must appear before the base class. 

#include <iostream>
using namespace std;

class Base {
public: int x=5; };

class Derived : public Base {
  public:  Derived(int n){x=n;}
};


int main()
{
	Derived d(10);
	Base b;
  int a;
  cin>>a;
  
	try {
    if(a==0)
		  throw b;
    else
      throw d;
	}
	catch (Derived d) {
		cout << "Caught Derived Exception"<<endl;
    cout << d.x;
	}
	catch (Base b) {
		cout << "Caught Base Exception"<<endl;
    cout<<b.x;
	}
	
	return 0;
}
