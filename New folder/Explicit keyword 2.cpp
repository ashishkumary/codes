// use of explicit keyword
//Prefixing the explicit keyword to the constructor prevents the compiler from using that constructor for implicit conversions.

#include <bits/stdc++.h>
using namespace std;

class entity{
public:
string name;
int age;
explicit entity(const string & str):name(str), age(-1) {}
explicit entity(int ag):name("unknown"),age(age){}
};

void print(const entity& entity)
{
  cout<<entity.name<<endl;
  cout<<entity.age<<endl<<endl;
}

int main(){
  entity a=entity("Ashish");   // entity a("Ashish")
  entity b=entity(21);         // entity b(21)

  print(entity(18));
  print(entity("Ashish"));
  print(entity("Saksham"));
  

 return 0; 
}
