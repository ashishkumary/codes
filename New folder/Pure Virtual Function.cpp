#include <bits/stdc++.h>
using namespace std;


class Animal{
    public:
    virtual void eat() = 0;
};

class cat: public Animal{
    public:
    void eat(){
        cout << "Non-Veg";
    }
};

class cow: public Animal{
    public:
    void eat(){
        cout << "Veg";
    }
};

int main(){
    
  Animal *obj = new cow;
  obj->eat();
  

}