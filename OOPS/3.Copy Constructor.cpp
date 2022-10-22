#include <iostream>
using namespace std;

class Hero{
private: int health;
public:  char level;

int getHealth(){return health;}
int getLevel(){return level;}
void setHealth(int h){health=h;}
void setLevel(char ch){level=ch;}

void Print(){cout<<health<<endl<<level<<endl;}

//Default constructor 
Hero(){cout<<" Default constructor called"<<endl;}

//Parametrized constructor
Hero(int health){
  this->health=health;}

Hero(int health,char level){
  this->health=health;
  this->level=level;}

//copy constructor
Hero(Hero &temp){
  cout<<"Copy constructor called\n";
  this->health=temp.health;
  this->level=temp.level;
}

};

int main() {
Hero dinesh(10,'A');
dinesh.Print();

Hero suresh(dinesh);   //copy constructor called
suresh.Print();

}