#include <bits/stdc++.h>
using namespace std;


class human{
    public:
    int ageH = 12;
    
    public:
    void spk(){
        cout << "barking ";
    }
};

class male: public human{
    public:
    int ageM = 24;
    
    public:
    void speakM(){
        cout << "speaking ";
    }
    
};

class female: public human{
    public:
    int ageF = 25;
    
    public:
    void speakF(){
        cout << "speaking ";
    }
};

int main(){
    
    human a;
    cout << a.ageH << endl;
    
    male b;
    cout << b.ageH << " " << b.ageM << endl;
    
    female c;
    cout << c.ageH << " " << c.ageF << endl;

}