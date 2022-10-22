#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        int x;
virtual void display(){ cout<<"In base class: x="<<x<<endl<<endl;}
};

class Derived: public Base{
    public:
        int y=20;
        void sum(){cout<<"Sum="<<x+y<<endl;}
        void display(){
                cout<<"In derived class: x="<<x<<endl;
                cout<<"In derived class: y="<<y<<endl; 
                cout<<"In derived class: sum="<<x+y<<endl<<endl;}
};
int main(){
    Base obj_base;
    obj_base.x=100;
    obj_base.display();

  
    Base * ptr;          
    Derived obj_derived;   
    ptr= &obj_derived;     // pointer pointing to object of derived class
    ptr->x = 10;          
    // ptr->y = 20;      will throw an error
    // ptr->sum();        will throw an error
    ptr->display();       // now display() of derived class will be called

    obj_base.display();
    return 0;
}
