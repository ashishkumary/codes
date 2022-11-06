//Can implement multiple cicular queues

#include <iostream>
using namespace std;

struct CQueue{
int size;
int front;
int rear;
int *Q;
};

void create(struct CQueue *ptr,int size){
  ptr->size=size;
  ptr->front=ptr->rear=0;
  ptr->Q=new int[ptr->size];
}

void enqueue(struct CQueue *ptr,int x)
{
  if((ptr->rear+1)%ptr->size==ptr->front)
    cout<<"Full"<<endl;
  else{
    ptr->rear=(ptr->rear+1)%ptr->size;
    ptr->Q[ptr->rear]=x;
  }
}

void display(struct CQueue q){
for(int i=q.front+1;i!=(q.rear+1)%q.size;i=(i+1)%q.size)
  cout<<q.Q[i]<<"\t";
cout<<endl;  
}

int dequeue(struct CQueue *ptr){
  int x=-1;
  if(ptr->front==ptr->rear)
    cout<<"Empty"<<endl;
  else{
    ptr->front=(ptr->front+1)%ptr->size;
    x=ptr->Q[ptr->front];
  }
  return x;
}





int main() {
  struct CQueue q;
  create(&q,5);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  display(q);

  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);

  
  enqueue(&q,100);
  enqueue(&q,200);
  enqueue(&q,300);
  enqueue(&q,400);
  display(q);

return 0; 
}