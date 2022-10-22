#include <bits/stdc++.h>
using namespace std;

int main() {
int i;
cout<<"Enter number:";
cin>>i;
  
  try{
    if(i==1)
      throw 1;
    if(i==2)
      throw 2.5;
    if(i==3)
      throw 'A';
    if(i==4)
      throw;               //program will terminated after this
  }
    catch(int){
      cout<<"Nothing to do with passed value";
    }

    catch(double e){
      cout<<"Value="<<e;
    }
    
    catch(char s){
      cout<<"Value="<<s;
    }

    catch(...){
      cout<<"Default exception";
    }
 
return 0;
}