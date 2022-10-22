#include <bits/stdc++.h>
using namespace std;
class Hero{
private: int health;
public: char level;
       
Hero(){ cout<<"constructor called"<<endl;}
~Hero(){cout<<"destructor called"<<endl;}

};

int main() {
  Hero h1; // automatically dest called (static)
  
  Hero *h2=new Hero();
  delete h2; //manually  dest calling in case of dynamic obj allocation

  return 0;
}