#include <bits/stdc++.h>  
using namespace std;  

void fun(int x){  
std::cout << "Value of x is : " <<x<< std::endl; }


void fun(int &b){  
std::cout << "Value of b is : " <<b<< std::endl; }  


int main()  
{  
int a=10;  
fun(a);     // error, which f()?  
return 0;  
}  

/*
The above example shows an error "call of overloaded 'fun(int&)' is ambiguous". The first function takes one integer argument and the second function takes a reference parameter as an argument. In this case, the compiler does not know which function is needed by the user as there is no syntactical difference between the fun(int) and fun(int &).
*/