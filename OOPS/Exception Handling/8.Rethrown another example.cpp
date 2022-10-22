#include <iostream>
using namespace std;
void ash(int x){
  try {
    if(x==0)
      throw x;
    else
      cout<<"Value="<<x<<endl;
  }
    catch(int e)
    {
      cout<<"Rethrowing execption"<<endl;
      throw e;
    } 
}

int main(){
  int x;
  cout<<"Enter number:";
  cin>>x;

  try{
    ash(x);
  }
    
  catch(int e){
    cout<<"Exception caught in main block"<<endl;
    cout<<"x="<<e<<endl;
  }
  
}