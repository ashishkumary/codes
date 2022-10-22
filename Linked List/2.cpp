#include <iostream>
using namespace std;

struct node{
int data;
struct node *next;
}*head=NULL;

struct node *first=NULL;
struct node *second=NULL;

node* create (int A[],int n)
{
  head=new node;
  head->data=A[0];
  head->next=NULL;

  struct node *temp, *last;
  last=head;

  for(int i=1;i<n;i++){
    temp=new node;
    temp->data=A[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
  }
  return head;
}

void display(struct node *p){
  while(p){
    cout<<p->data<<"\t";
    p=p->next;
  }
  cout<<"\n";
}

void recDisplay(struct node *p){
if(p!=NULL)  
{
    cout<<p->data<<"\t";
    recDisplay(p->next);
  }

}

void reverseDisplay(struct node *p){
  if(p!=NULL)
  {
    reverseDisplay(p->next);
    cout<<p->data<<"\t";
  }
}

int count(struct node *p)
{
  int c=0;
  while(p){
    c++;
    p=p->next;
  }
  return c;
}



int main() {
int A[] = {1,2,3,4};
first=create(A,sizeof(A)/sizeof(A[0]));
display(first);
recDisplay(first);
cout<<endl;
reverseDisplay(first);
cout<<"No of nodes:"<<count(first)<<endl<<endl;

int B[] = {5,6,7,8,9,10};
second=create(B,sizeof(B)/sizeof(B[0]));
display(second);
}