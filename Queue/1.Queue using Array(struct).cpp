#include <bits/stdc++.h>
using namespace std;

struct Queue {
int size;
int front;
int rear;
int *Q;
};

void create(struct Queue *ptr,int size){
ptr->size=size;
ptr->front=ptr->rear=-1;
ptr->Q=new int[ptr->size];
}

void enqueue(struct Queue *ptr, int x){
  if(ptr->rear==(ptr->size-1))
    cout<<"Queue is full"<<endl;
  else{
    ptr->rear++;
    ptr->Q[ptr->rear]=x;
  }
}

void display(struct Queue tempq){
  for(int i=tempq.front+1;i<=tempq.rear;i++)
    cout<<tempq.Q[i]<<"\t";
  cout<<endl;
}

int dequeue(struct Queue *ptr){
  int x=-1;
  if(ptr->rear==ptr->front)
    cout<<"Queue is empty"<<endl;
  else{
    ptr->front++;
    x=ptr->Q[ptr->front];
  }
  return x;
}

int main() {
  struct Queue q;
  create(&q,5);
  enqueue(&q,0);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  display(q);
  cout<<"Queue after dequeue\n"; 
  dequeue(&q);
  display(q);
  return 0;
}