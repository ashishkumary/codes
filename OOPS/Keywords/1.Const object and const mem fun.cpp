#include<bits/stdc++.h>
using namespace std;

class Star{
    public: int i;
    Star(int x){i = x;}

    void falc() const  // constant function
    { 
         cout << "Falcon has left the Base"<<endl;
    }

    void modi(){ i=i+2; }   // non const function
};
int main()
{
    Star obj1(10);             // non const object
    const Star obj2(20);      // const object
    cout<<obj1.i<<" & "<<obj2.i<<endl;
    
    obj1.falc();     // No error
    obj2.falc();     // No error

    obj1.modi();     // No error
   // obj2.modi();   // Compile time error
   
   cout<<obj1.i;
  
   return 0;
}

// Here, we can see, that const member function never changes data members of class, 
//and it can be used with both const and non-const objecta. 
//But a const object cannot be used with a member function which tries to change its data members.