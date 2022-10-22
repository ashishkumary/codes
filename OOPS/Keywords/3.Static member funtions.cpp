#include <bits/stdc++.h>
using namespace std;

class Hero{
public: static int x;     
               int y;
static int show(){       
  return x;}       //can't access y
};

int Hero::x=5;   

int main() {
  cout<<Hero::show()<<endl;   //accessing through classname
  
 
  Hero a;
  cout<<a.show();      //accessing through object
  
  return 0;
}