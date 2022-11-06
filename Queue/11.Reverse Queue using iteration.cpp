#include <bits/stdc++.h> 
#include <queue>
using namespace std; 

void Print(queue<int>& Q) 
{ 
	while (!Q.empty()) { 
		cout << Q.front() << " "; 
		Q.pop(); 
	} 
} 

void reverseQueue(queue<int>& q) 
{ 
	stack<int> s; 
	while (!q.empty()) { 
		s.push(q.front()); 
		q.pop(); 
	} 
	while (!s.empty()) { 
		q.push(s.top()); 
		s.pop(); 
	} 
} 
 
int main() 
{ 
	queue<int> q; 
	q.push(12); 
	q.push(5); 
	q.push(15);
	q.push(20); 
   

	reverseQueue(q); 
	Print(q); 
} 
