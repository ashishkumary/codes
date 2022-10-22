//non static member function
#include<bits/stdc++.h>
using namespace std;

class Ash{
  int n;
  public: Ash(int x){n=x;}
          void operator ++(int){n++;}
          void show(){cout<<"value="<<n<<endl;}
};

int main(){
Ash obj(10);
obj++;         //implicit call to operator function
obj.show();

obj.operator ++(0);    //explicit call to operator function
obj.show();
  
return 0;
}

// Here we need to pass 0 to an integer in order to distinguish between post and pre increment operator
