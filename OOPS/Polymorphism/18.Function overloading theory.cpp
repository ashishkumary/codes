/*
A function name having several definition within the same scope that are differentiable by the function signature is known as function overloading .

Advantage: It proves to be beneficial when we have several functions performing basically the same task but with a different set of arguments .

Two functions having 
1.same no of arguments,
2, types of arguments 
3.in the same order 
then they are said to be have same signature even they are using different variable name .


Two functions are said to be overloaded only when they have exactly same name and different function signature irrespective of their return type .
Eg:
   void sum (int a, double x);
   int sum (float b, double y);


typedef declaration do not create any new data type instead it provides synonymous of existing data types 
Eg:
typedef int amt; 
void star(int);
void star(amt);    // both same signature


Signature of 2 function can't be made different only on the basis of call by value and  call by reference .
Eg:
void sum(int);
void sum(int &);    // signature are same



Signed, unsigned and const are also sufficient to make signature of two functions different .
Eg:
void sum ( int);
void sum (unsigned int);
void sum (const int);              // signature are different

when we call  :     sum(7) ;      // ambigious call
                                sum(7u);       // correct way


When calling overloaded function use constant suffixes like l ,L ,f ,F ,u,U &  ul , UL to avoid ambiguous call statement problem.
Eg1:
         void print(float);                        // print(15.0f)
         void print(long);                        //  print(15l)
         void print(double);                   //  print(15.0)
         void print(int);                           // print(15)

Eg2:
         void sum(float);                         // print(32.05f)
         void print(double);                   //  print(15.16)
         void print(long double);          //  print(15.16l)



Steps involved in finding the best match 

Argument matching is done to decide which version of overloaded function will be invoke. Argument matching involves comparing the actual argument of the call with formal arguments of each declared instance of the  function. 
There are 3 possible cases of function call me result in.
1. Best match / exact match 
Eg:  void print(double);     //1
        void print(int);         //2
                 print(5);           // calls 2

2. A match through promotion / standard C++ conversion 
Eg:  void print(double);      //1
        void print(int);            //2
                 print('c');             //  calls 2

3. Ambiguous Match , means more than one version of overloaded function matches for the function called statement 
Eg:  void print(double);     //1
        void print(long);         //2
                 print(15);       // ambigious call
*/