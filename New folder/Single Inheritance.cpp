#include <bits/stdc++.h>
using namespace std;


class animal{
    public:
    int age = 12;
    
    public:
    void speak(){
        cout << "speaking";
    }
};

class dog: public animal{
    
};

int main(){
    
    dog a;
    cout << a.age << endl;
    a.speak();

}