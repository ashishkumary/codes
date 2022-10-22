#include<bits/stdc++.h>
using namespace std;
 
class Numb{
    int a;
    public:

       void setter(int n){ a = n;}
       void getter() { cout<<"Your number is "<<a<<endl;}

      // non member - sumNumb()is allowed to do anything with my private members
        friend Numb sumNumb(Numb obj1, Numb obj2);    //5   
};

Numb sumNumb(Numb obj1, Numb obj2){     //4
    Numb obj3;
    obj3.setter((obj1.a + obj2.a));   //6
    return obj3;
}

int main(){
    Numb c1, c2, c3;
    c1.setter(5);
    c2.setter(15);
  
    c3 = sumNumb(c1, c2);   //3
    c3.getter();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumNumb() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
