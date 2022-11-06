#include <bits/stdc++.h>
using namespace std;

struct MyStack{
    int *arr;
    int cap;       //capacity=total elements which can be stored
    int top; 
    MyStack(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    
    void push(int x){
        if(top==cap-1){
          cout<<"Stack is full"<<endl;
          return;
          }
        top++;
        arr[top]=x;
        cout<<x<<" is pushed.\n";
    }
    
    void pop(){
        if(top==-1){
          cout<<"Stack is Empty"<<endl;
          return INT_MIN;
          }
        int res=arr[top];
        top--;
        cout<<res<<" is popped\n";
    }
    
    int peek(){
        if(top==-1)
        {
          cout<<"Stack is Empty"<<endl;
          return INT_MIN;
          }
        return arr[top];
    }
    
    int size(){       // no of elements present
        return (top+1);
    }
    
    bool isEmpty(){
        return top==-1;
    }

    void Display(){
      cout<<"Elements:";
      for(int i=top;i>=0;i--)
        cout<<arr[i]<<"\t";
      cout<<endl;
    }
};

int main()
{
    MyStack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.Display();
    cout<<"Size:"<<s.size()<<endl;
    cout<<"top element:"<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
  
    return 0; 
}
/* Output
5 is pushed.
10 is pushed.
20 is pushed.
30 is pushed.
40 is pushed.
40 is popped
Elements:30 20  10  5
Size:4
top element:30
0 
*/