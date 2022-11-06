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

class dog2: public dog{
    
};

int main(){
    
    dog2 a;
    cout << a.age << endl;
    a.speak();

}