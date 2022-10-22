// example for implicit conversion
/*
if a class has a constructor which can be called with a single argument, then this constructor becomes a conversion constructor because such a constructor allows conversion of the single argument to the class being constructed
*/

#include <bits/stdc++.h>
using namespace std;

class entity{
public:
string name;
int age;

entity(const string & str):name(str), age(-1) {}
entity(int ag):name("unknown"),age(age){}
};

void print(const entity& entity){
  cout<<entity.name<<endl;
  cout<<entity.age<<endl;
}

int main(){
  entity a=string("Ashish"); // "Ashish" is const char[7] which converted to string
  entity b=22;
  // entity c="Ashish";           //error
  print(18);
  print(string("Ashish"));
  print(entity("Saksham"));
  

 return 0; 
}

/* after declaring second constructor to be of explicit type
   we need to write entity b=entity(22) or entity b(22) on line no 25
Also we need to write print(entity(18)) on line no 27 */


/*
similarly on declaring first constructor to be of explicit type
we need to write entity a=entity("Ashish")or entity a("Ashish") on 24
we need to write print(entity("Ashish")) on line 28
no need to change on line 29
*/

/*
"Ashish" is of const char [7] type. So compiler firstly convert Ashish to string type, then that string will be converted to entity type using first constructor. Which will throw error because,

The compiler is allowed to make one implicit conversion to resolve the parameters to a function. What this means is that the compiler can use constructors callable with a single parameter to convert from one type to another in order to get the right type for a parameter.
*/
