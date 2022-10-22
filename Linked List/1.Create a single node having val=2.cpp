//Create a single node having val=2

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;    //or node *link;
};
    	
struct node *head=NULL;   // or node *head=NULL

int main() {
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    // temp=(node*)malloc(sizeof(node));
    // temp=new node();
    
    (*temp).data=2;        //temp->data=2;
    (*temp).link=NULL;     //temp->link=NULL;
    
    head=temp;
    
    cout << temp->data << std::endl;
	return 0;
}