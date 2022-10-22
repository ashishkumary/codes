//Floating point numbers are by default of double type if you need them to be of float type right f after the number 
#include<bits/stdc++.h>
using namespace std;
  
int mul(int a,int b){        //1
    return a*b; }

float mul(double x, int y){    //2
    return x*y;}

float mul(int x, double y){    //3
    return x*y;}

int main()  
{  
    int r1 = mul(6,7);  
    float r2 = mul(0.2,3);   
    float r3 = mul(10,3.5);
    cout << "r1 is :"<<r1<<endl;  
    cout <<"r2 is :"<<r2<<endl;  
    cout <<"r3 is :"<<r3<<endl;  
    return 0;  
}  

// 1 and 2 are overloaded based on types of args
// 2 and 3 are overloaded based on order of args