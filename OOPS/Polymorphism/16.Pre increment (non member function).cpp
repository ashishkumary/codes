//non-member function or friend function
#include<bits/stdc++.h>
using namespace std;

class Ash{
int n;
public: Ash(int x){n=x;}
        friend void operator ++(Ash & obj);
        void show(){cout<<"Value="<<n<<endl;}
};

void operator ++(Ash & temp){
 ++(temp.n);
}

int main(){

  Ash obj(10);
  ++obj;
  obj.show();
  
  operator ++(obj); 
  obj.show();
  
  return 0;
}