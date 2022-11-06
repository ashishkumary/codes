//incomplete
//Multiple Queues in a program using LL
#include <iostream>
using namespace std;

struct Node
{
int data;
struct Node *next;
};

struct Queue{
struct node *front;
struct node *rear;
Queue(){
  front=Rear=NULL;
}
// Queue(int x){
//   struct node *t;
//   t->data=x;
//   t->next=NULL;
//   }
  
void enqueue(int x)
{
struct Node *t=new Node;
if(t==NULL)
  cout<<"Queue is FUll\n";
else
{
    t->data=x;
    t->next=NULL;
    if(front==NULL)
      front=rear=t;
    else
    {
      rear->next=t;
      rear=t;
    }
}
}



int dequeue()
{
  int x=-1;
  struct Node* t;
  if(front==NULL)
    cout<<"Queue is Empty\n";
  else
  {
    x=front->data;
    t=front;
    front=front->next;
    delete(t);
  }
return x;
}



void Display()
{
  struct Node *p=front;
  while(p)
    {
    cout<<p->data<<"\t";
    p=p->next;
    }
  cout<<endl;
}

};

struct Queue p1;
struct Queue p2;

int main()
{
p1.enqueue(10);
p1.enqueue(20);
p1.enqueue(30);
p1.enqueue(40);
p1.enqueue(50);
p1.Display();
  
cout<<p1.dequeue();
return 0;
}