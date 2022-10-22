// ash is the interface
// The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate base class from which other classes can inherit. Abstract classes cannot be used to instantiate objects and serves only as an interface. Attempting to instantiate an object of an abstract class causes a compilation error.

#include <bits/stdc++.h>
using namespace std;
class ash{
    private: int a;
    public:
    virtual void show()=0;
};

int main() {
   // ash obj;    cannot declare variable 'obj' to be of abstract type 'ash'
    return 0;
}