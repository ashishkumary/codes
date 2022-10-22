//base class ke pointer ko allowed hai derived class ke object ko point karna (but uske through access base class members ko hi kar sakte h only)
//but derived class ke pointer ko allowed nhi hai to point base class object
#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        int x;
        void display(){ cout<<"In base class: x="<<x<<endl<<endl;}
};

class Derived: public Base{
    public:
            int y;
            void display(){
                cout<<"In derived class: x="<<x<<endl;
                cout<<"In derived class: y="<<y<<endl<<endl; }
};


int main(){

    Base obj_base;      //object of base class
    Base * ptr1;        //pointer to base class
    ptr1 = &obj_base;   // pointer pointing to object of base class
    ptr1->x = 1000;          
    ptr1->display();

  
    Derived obj_derived;   //object of derived class
    Derived * ptr2;        //pointer to derived class
    ptr2 = &obj_derived;   // pointer pointing to object of derived class
    ptr2->x = 10;          
    ptr2->y = 20;
    ptr2->display();

      
    ptr1 = &obj_derived;  // Base class pointer pointing to object of derived class
    ptr1->x= 50;    
    ptr1->y= 500; // Will throw an error
    ptr1->display();    // will call base class display()
 
    
   // ptr2=&obj_base;  error: incompatible pointer types assigning to 'Derived *' from 'Base *'
   
    return 0;
}


/*OUTPUT
In base class: x=1000

In derived class: x=10
In derived class: y=20

In base class: x=50
*/