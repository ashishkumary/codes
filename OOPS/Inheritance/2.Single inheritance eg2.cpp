#include <bits/stdc++.h>
using namespace std;

class student{
protected: string name; 
           int uid;
public: student(){cout<<"Enter name and Uid:"; cin>>name; cin>>uid;}
        void display(){cout<<name<<" with "<<uid<<endl;}
};

class marks:public student{
private:string course;
public: marks(){cout<<"Enter course:"; cin>>course;}
      void display(){
        student::display(); //calling overriden func of parent class
        cout<<name<<" having uid "<<uid<<" is enrolled in "<<course;
      }   
};

int main() {
     marks obj;
     obj.display();

  return 0;
}

/*Output
Enter name and Uid:Ashish 
2288
Enter course:CSE
Ashish with 2288
Ashish having uid 2288 is enrolled in CSE
*/