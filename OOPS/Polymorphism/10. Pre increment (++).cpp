//non static member function
#include<bits/stdc++.h>
using namespace std;

class Ash{
  int n;
  public: Ash(int x){n=x;}
          void operator ++(){++n;}
          void show(){cout<<"value="<<n<<endl;}
};

int main(){
Ash obj(10);
++obj;         //implicit call to operator function
obj.show();

obj.operator ++();    //explicit call to operator function
obj.show();
  
return 0;
}