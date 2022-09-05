#include <iostream>
using namespace std;
class num{
    int a,b;
    double c;
    public:
    
    num(){cout<<"const"<<'\n';a=0;b=0;}
    num(int x,int y=50){a=x;b=y;}
    num(double v){c=v;
    cout<<c<<'\n';}
    num(num &z){a=z.a;b=z.b;}
    void display(){cout<<a<<" "<<b<<'\n';}
    ~num(){cout<<"des"<<'\n';}};
int main(){
    num n;
    n.display();
    num t(20,30);
    t.display();
    num m(t);
    m.display();
    num s(2.3);
    num v(10);
    v.display();
}
