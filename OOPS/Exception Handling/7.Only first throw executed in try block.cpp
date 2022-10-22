#include <iostream>
using namespace std;


int main() {
    try {
        throw 1;
        throw 2.2;
    }
    
    catch(...){
        cout<<"Exception ";
    }

    return 0;
}