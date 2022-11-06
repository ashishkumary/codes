#include<iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.push(5);
    cout<<s.top()<<endl;
    
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }
  stack<string> stk;
  stk.push("ashish");
  stk.push("kumar");
  stk.push("yadav");
  cout<<"Size of element:"<<stk.size()<<endl;
  cout<<"Top element:"<<stk.top()<<endl;
  stk.pop();
  cout<<"Top element:"<<stk.top()<<endl;
  
  return 0; 
}
