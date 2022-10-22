#include <bits/stdc++.h>
using namespace std;
class Ash{
int n;
public: Ash(int x){n=x;}
        void operator ++(){ ++n;}
 friend void operator ++(Ash &,int);
        void show(){cout<<"Value="<<n<<endl;}
};

void operator ++(Ash & obj,int x){
  (obj.n)++;
}

int main() {
  Ash num1(10),num2(20);
  ++num1;
  num1.operator ++();
  num1.show();

  num2++;
  operator ++(num2,0);
  num2.show();

   return 0;
}