#include <bits/stdc++.h>
using namespace std;

class parent{
protected: int x;
public: parent(){cout<<"IN PARENT CLASS:Enter x="; cin>>x;}
        ~parent(){cout<<"PARENT CLASS DESTROYED"<<endl;}
        void display(){
          cout<<"Displaying in parent class";
          cout<<"\nx="<<x<<endl;}
};

class child:public parent{
private:int y;
public: child(){cout<<"IN CHILD CLASS:Enter y="; cin>>y;}
         ~child(){cout<<"CHILD CLASS DESTROYED"<<endl;}
        void display(){
          cout<<"Displaying in Child class";
          cout<<"\nx="<<x<<"\ty="<<y<<endl; }    //can access y 
};


int main() {
     child obj;
     obj.display();

     parent obj1;
     obj1.display();
  
  return 0;
}

/*Output
1.When only child object is created
IN PARENT CLASS:Enter x=10
IN CHILD CLASS:Enter y=20
Displaying in Child class
x=10    y=20
CHILD CLASS DESTROYED
PARENT CLASS DESTROYED

2.When both objects are created
IN PARENT CLASS:Enter x=10
IN CHILD CLASS:Enter y=20
Displaying in Child class
x=10    y=20
IN PARENT CLASS:Enter x=100
Displaying in parent class
x=100
PARENT CLASS DESTROYED
CHILD CLASS DESTROYED
PARENT CLASS DESTROYED
*/