#include <iostream>
using namespace std;

struct node{
int data;
struct node *next;
};

void push(struct node *top,int x)
{
  node *t =new node();
  if(t==NULL)
    cout<<"stackoverflow"<<endl;
  else{
    t->data=x;
    t->next=top;
    top=t;
    cout<<x<<" is pushed\n";
    }
}

int pop(struct node *top){
  int x=-1;
  if(top==NULL)
    cout<<"stack is Empty"<<endl;
  else{
    struct node *p=top;
    top=top->next;
    x=p->data;
    delete p;
  }
return x;  
}
void Display(struct node *p){
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
    
}

int main() {
  struct node *top1=NULL;
  struct node *top2=NULL;
  push(top1,10);
  push(top1,20);
  push(top1,30);
  push(top1,40);
  push(top1,50);
  pop(top1);
  Display(top1);

  push(top2,100);
  push(top2,200);
  push(top2,300);
  push(top2,400);
  push(top2,500);
  pop(top2);
  Display(top2);

  
  
  
  
  // int choice;
  // while(1){
  //   cout<<"\n****ENTER YOUR CHOICE***\n";
  //   cout<<"1.Push\t";
  //   cout<<"2.Pop\t";
  //   cout<<"3.Display\t";
  //   cout<<"4.Peek\n";
  //   cout<<"5.StackTop\t";
  //   cout<<"6.IsEmpty\t";
  //   cout<<"7.IsFull\t";
  //   cout<<"8.Exit\n";
  //   cin>>choice;
  //     switch (choice)
  //     {
  //       case 1:
  //         int x;
  //         cout<<"Enter element to Push:";
  //         cin>>x;
  //         push(top,x);
  //         break;
      
  //       case 2:
  //         cout<<pop(top);
  //         break;

  //       case 3:
  //         Display(top);
  //         break;
  
  //       case 4:
  //         cout<<"Peek";
  //         break;

  //       case 5:
  //         cout<<"StackTop";
  //         break;

  //       case 6:
  //         cout<<"IsEmpty";
  //         break;
        
  //       case 7:
  //         cout<<"IsFull";
  //         break;
  //       case 8: exit(0);
        
  //       default:
  //         cout<<"INVALID INPUT";
  //         break;
  //     }
  //   }
}