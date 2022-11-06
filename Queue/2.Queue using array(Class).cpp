#include <iostream>
using namespace std;
class Queue{

private:
int front;
int Rear;
int size;
int *Q;

public:
Queue(){
  front=Rear=-1;
  size=10;
  Q=new int[size];
}
Queue(int size){
  front=Rear=-1;
  this->size=size;
  Q=new int[this->size];
}

void enqueue(int x);
int  dequeue();
void display();
};

void Queue::enqueue(int x){
  if(Rear==size-1)
    cout<<"Queue is Full"<<endl;
  else{
    Rear++;
    Q[Rear]=x;
  }
}

 int Queue ::dequeue(){
   int x=-1;
   if(Rear==front)
     cout<<"Queue is Empty";
   else{
     x=Q[front+1];
     front++;
   }
   return x;
}

void Queue::display(){
  for(int i=front+1;i<=Rear;i++)
      cout<<Q[i]<<"\t";
  cout<<endl;
}

int main() {
  Queue q(4);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  q.display();
 
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  
  q.enqueue(10);
  q.display();
}