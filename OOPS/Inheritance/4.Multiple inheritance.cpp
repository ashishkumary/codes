#include <bits/stdc++.h>
using namespace std;
class human{
public:human(){cout<<"Human called"<<endl;}
       void speak(){cout<<"speaking....\n";}
};

class dog{
public:dog(){cout<<"Dog called"<<endl;}
       void bark(){cout<<"barking...\n";}
};

class mixed:public human,public dog{
public:mixed(){cout<<"Mixed called"<<endl;}
};

int main() {
  class mixed obj;
  obj.speak();
  obj.bark();
 return 0;
}

/*OUTPUT
Human called
Dog called
Mixed called
speaking....
barking...
*/