#include <iostream>
using namespace std;
class Hero{
public:
int a;
int b;
Hero():a(10),b(20){
  cout<<"Default constructor called"<<endl;}

Hero(int x,int y):a(x),b(y){
  cout<<"parametrized called"<<endl;
  cout<<"a:"<<x<<"\t"<<"b:"<<y;}

void show(){cout<<"Value of a:"<<a<<"\t";
            cout<<"Value of b:"<<b<<endl;}
};


int main() {
  Hero h1;
  h1.show();
  
  Hero h2(100,200);
 
  return 0;
}