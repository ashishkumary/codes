#include<bits/stdc++.h>  
using namespace std;  

void fun(int i){  
    cout << "Value of i is : "<<i<<endl;  } 

void fun(float j){  
    cout << "Value of j is : " <<j<<endl;  } 

int main()  
{  
    fun(10);  
   // fun(1.2);  
    return 0;  
}  

/* The above example shows an error "call of overloaded 'fun(double)' is ambiguous". The fun(10) will call the first function. The fun(1.2) calls the second function according to our prediction. But, this does not refer to any function as in C++, all the floating point constants are treated as double not as a float. If we replace float to double, the program works. Therefore, this is a type conversion from float to double.
*/