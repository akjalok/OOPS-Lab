#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    
    complex(){cout<<"const"<<'\n';a=0;b=0;}
    complex (int x,int y=0){a=x;b=y;}
    complex(complex &z){a=z.a;b=z.b;}
    void display(){cout<<a<<"+"<<b<<"i"<<'\n';}
    ~complex(){cout<<"des"<<'\n';}};
int main(){
    complex n;
    n.display();
    complex t(20,30);
    t.display();
    complex m(t);
    m.display();
    complex v(10);
    v.display();
}