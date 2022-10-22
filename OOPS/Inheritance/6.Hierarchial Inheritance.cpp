#include <bits/stdc++.h>
using namespace std;

class shape{
protected: int a;
           float area;
public:shape():a(10),area(20){
  cout<<"******************************"<<endl;
  cout<<"a="<<a<<"\tarea="<<area<<endl;}
};

class square:public shape{
public:square(){cout<<"Enter the side:";cin>>a;}
  void calc_area(){area=(a*a); cout<<"Square area="<<area<<endl;}
  int show_a(){ return a;}
};

class circle:public shape{
public:circle(){cout<<"Enter the radius:";cin>>a;}
void calc_area(){area=(3.14*(a*a));cout<<"Circle area="<<area<<endl;}
};

int main() {
square obj1;
obj1.calc_area();

circle obj2;
obj2.calc_area();

shape obj3;

cout<<"Value of a in square="<<obj1.show_a();
return 0;
}

/*OUTPUT
******************************
a=10    area=20
Enter the side:5
Square area=25
******************************
a=10    area=20
Enter the radius:7
Circle area=153.86
******************************
a=10    area=20
Value of a in square=5
*/