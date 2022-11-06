#include <iostream>
#include <queue>
using namespace std;

int main() 
{ 
    queue <int> q; 
    q.push(10); 
    q.push(20); 
    q.push(30); 
    q.pop(); 
  
    cout<<"Empty or not:"<<q.empty()<<endl;
    cout<<"Size:"<<q.size()<<endl;
    cout <<"Front:"<<q.front()<<endl;
    cout<<"Back:"<<q.back()<<endl; 
  
    return 0; 
} 