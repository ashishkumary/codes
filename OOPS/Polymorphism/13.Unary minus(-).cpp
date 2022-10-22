//non static member function
#include<bits/stdc++.h>
using namespace std;

class Ash{
  int n;
  public: Ash(int x){n=x;}
          void operator -();
          void show(){cout<<"value="<<n<<endl;}
};
void Ash::operator -(){
  n=-n;
}

int main(){
Ash obj(10);
-obj;         
obj.show();

obj.operator -();    
obj.show();
  
return 0;
}