//https://www.geeksforgeeks.org/static-data-members-c/
#include <bits/stdc++.h>
using namespace std;

class Hero{
public:
static int x;     //declaration
void show(){cout<<"\nValue of x:"<<x;}
};

int Hero::x=5;   // initialization

int main() {
  cout<<Hero::x<<endl;   //printing value
  
  Hero::x=10;            //modifying
  cout<<Hero::x<<endl;

  Hero a,b;
  a.x=15;         //accessing through object is not good practice

  cout<<"a.x:"<<a.x<<endl;
  cout<<"b.x:"<<b.x;           //value changed in second object also

  b.show();     //static can be accessed through non static functions
  return 0;
}