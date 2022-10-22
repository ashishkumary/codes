#include <iostream>
using namespace std;

class Hero{
private:
int health;
public:
char level;

int getHealth(){return health;}
int getLevel(){return level;}

void setHealth(int h){health=h;}
void setLevel(char ch){level=ch;}

//Hero(){cout<<" Default constructor called"<<endl;}

//Parametrized constructor
Hero(int health){
  this->health=health;
  cout<<"this->"<<this<<endl;}

Hero(int health,char level){
  this->health=health;
  this->level=level;}


};

int main() {
//Hero pankaj;   //will flash an error

Hero ramesh(10);
cout<<"Address of ramesh="<<&ramesh<<endl;
cout<<ramesh.getHealth()<<endl;

Hero *rajesh=new Hero(11,'B');
cout<<rajesh->getHealth()<<endl;

Hero dinesh(12,'C');
cout<<dinesh.getHealth();

}