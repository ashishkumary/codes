#include <iostream>
using namespace std;

class house
{
private:
int length,breadth;
public:
void setData(int x,int y){
  length=x;
  breadth=y;
}

void area(){
  cout<<length*breadth<<endl;
}

};

int main() {
  house h1;
  h1.setData(300,500);
  h1.area();
  cout<<sizeof(h1);
}