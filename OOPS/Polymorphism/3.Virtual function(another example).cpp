/*Rules for virtual functions
1.They cannot be static
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.A virtual function in the base class might not be used (in below example)
5.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class(mtlb ki agar derived class me function nhi hua to wo base class wale virtual() ko run kar dega) */

#include<bits/stdc++.h>
using namespace std;

class Channel{
    protected:
        string title;
        float rating;
    public:
        Channel(string s, float r){
            title =  s;
            rating = r;}
        virtual void display(){}
};

class Video: public Channel
{
    float videoLength;
    public:
        Video(string s, float r, float vl): Channel(s, r){    
            videoLength = vl;}
        void display(){
            cout<<"Title:"<<title<<endl;
            cout<<"Ratings: "<<rating<<endl;
            cout<<"Video length: "<<videoLength<<endl<<endl;}
};   

class Text: public Channel
{
    int words;
    public:
        Text(string s, float r, int wc): Channel(s, r){
            words = wc;}
     void display(){
      cout<<"Title:"<<title<<endl;
      cout<<"Ratings: "<<rating<<endl;
      cout<<"No of words: "<<words<<endl;}
};

int main(){
    
    string title = "React tutorial";
    Video obj_Video(title, 4.89, 4.56);

    title = "React Documentation";
    Text obj_Text(title, 4.19, 433);

    Channel* ptr[2];    
    ptr[0] = &obj_Video;
    ptr[1] = &obj_Text;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}



