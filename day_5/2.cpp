#include <iostream>
using namespace std;
class Time{
    int a,b;
    public:
    
    Time(){cout<<"const"<<'\n';a=0;b=0;}
    Time(int x,int y=0){a=x;b=y;}
    Time(Time &z){a=z.a;b=z.b;}
    void display(){if(b>10)cout<<a<<"::"<<b<<'\n';else  cout<<a<<"::0"<<b<<'\n';}
    ~Time(){cout<<"des"<<'\n';}};
int main(){
    Time n;
    n.display();
    Time t(20,8);
    t.display();
    Time m(t);
    m.display();
    Time v(10);
    v.display();
    Time x(12,38);
    x.display();
}