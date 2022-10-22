//non static member function
#include<bits/stdc++.h>
using namespace std;

class Ash{
  int n;
  public: Ash(int x){n=x;}
          void operator +(Ash o1){
            n=n+o1.n;
          }
          void show(){cout<<"value="<<n<<endl;}
};

int main(){
Ash obj1(10);
Ash obj2(20);
  
obj1+obj2;
obj1.show();
  
obj1.operator +(obj2); 
obj1.show();
  
return 0;
}