//non-member function or friend function
/* post increment me hame hamesha ek value pass karni padti hai taaki
 differentiate kiya jaa sake post aur pre me */

#include<bits/stdc++.h>
using namespace std;

class Ash{
int n;
public: Ash(int x){n=x;}
        friend void operator ++(Ash & obj,int);
        void show(){cout<<"Value="<<n<<endl;}
};

void operator ++(Ash & obj,int x){
  (obj.n)++;
}

int main(){

  Ash obj(10);
  obj++;
  obj.show();
  
  operator ++(obj,0); // we need to pass obj because we cant call operator function here through object like we call in member function
  obj.show();
  
  return 0;
}