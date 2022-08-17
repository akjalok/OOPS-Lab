#include <iostream>
using namespace std;
class hello{
    char name[30];
    public:
    void name1(){
        cout<<"Enter your name:";
        cin>>name;
    }
    void display(){
        cout<<"Hello"<<' '<<name;
    }
};
int main(){
    hello o1;
    o1.name1();
    o1.display();
}//