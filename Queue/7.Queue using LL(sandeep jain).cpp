#include <bits/stdc++.h> 
using namespace std; 

struct QNode { 
	int data; 
	QNode* next; 
	QNode(int d){ 
		data = d; 
		next = NULL; 
	} 
}; 

struct Queue { 
	QNode *front, *rear; 
	Queue(){ 
		front = rear = NULL; 
	} 

	void enQueue(int x) { 
		QNode* temp = new QNode(x); 
		if (rear == NULL) { 
			front = rear = temp; 
			return; 
		} 		 
		rear->next = temp; 
		rear = temp; 
	} 

	 
	void deQueue() 
	{ 
		if (front == NULL) 
			return; 
		QNode* temp = front; 
		front = front->next; 

		if (front == NULL) 
			rear = NULL; 

		delete (temp); 
	} 
}; 


int main() 
{ 

	struct Queue q1; 
	q1.enQueue(10); 
	q1.enQueue(20); 
	q1.deQueue(); 
	q1.deQueue(); 
	q1.enQueue(30); 
	q1.enQueue(40); 
cout << "Queue Front : " << (q1.front)->data << endl; 
cout << "Queue Rear : " << (q1.rear)->data<<endl<<endl; 

  struct Queue q2; 
	q2.enQueue(1000); 
	q2.enQueue(2000); 
	q2.deQueue(); 
	q2.deQueue(); 
	q2.enQueue(3000); 
	q2.enQueue(4000); 
	cout << "Queue Front : " << (q2.front)->data << endl; 
	cout << "Queue Rear : " << (q2.rear)->data; 
} 
