#include <bits/stdc++.h>
using namespace std;
class Hero{
private: int health;
public: char level;
        char *name;
Hero(){ name=new char[100];}
void setHealth(int h){health=h;}
void setLevel(char ch){level=ch;}
void setname(char ch[]){strcpy(name,ch);}
void print(){
  cout<<"[ Health:"<<health<<",";
  cout<<"Level:"<<level<<",";
  cout<<"Name:"<<name<<"]"<<endl;}

};

int main() {
  Hero h1;
  h1.setHealth(100);
  h1.setLevel('D');
  h1.setname("Ash");
  h1.print();

  Hero h2(h1);   // Or Hero h2=h1;  (Use of default copy constructor)
  h2.print();

  h1.setHealth(50);
  h1.setLevel('C');
  h1.setname("Ashish");
  h1.print();

  h2.print();
}