#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
    void initialize(Distance x)
     {
         feet=x.feet;
         inch=x.inch;
     }
};

void Display(Distance p){
  cout << "Distance = " << p.feet << " feet ";
  cout<< "Distance = " <<p.inch <<" inches \n";
}

void Update(Distance *ptrr)
{ cout<< "\nUpdating values....."<<endl;
  cout << "Enter feet: ";
  cin >> (*ptrr).feet;        
  cout << "Enter inch: "; 
  cin >> ptrr->inch; 
}

int main() {
    Distance *ptr, d1,d2;  // pointer to distance's object    
    ptr = &d1;        // pointer pointing to object

  
  cout << "Enter feet: ";
  cin >> (*ptr).feet;        //taking value through pointer
  cout << "Enter inch: "; 
  cin >> d1.inch;             // taking value through object

  Display(d1); 
  
  Update(&d1);
  Display(d1); 

  cout<<"\nDisplaying D2"<<endl;
  d2.initialize(d1);
  Display(d2);
  

    return 0;
}