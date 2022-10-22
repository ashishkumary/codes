//function signature different based on no of arguments
#include <bits/stdc++.h>
using namespace std;  

class Calc{    
    public:    
            static int add(int a,int b){ return a + b;}      
            static int add(int a, int b, int c){      
                          return a + b + c;}
};     

int main(void) {    
    Calc C;                               
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(12, 20, 23);     
    return 0;    
}    