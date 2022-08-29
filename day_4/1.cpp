#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void input(){
        cout<<"Enter the first number:";
        cin>>a;
    }
    friend void swwap(A &,B &);
};
class B{
    int b;
    public:
    void input(){
        cout<<"Enter the second number:";
        cin>>b;
    }
    friend void swwap(A &,B &);
};
void swwap(A &r,B &s){
    int t;
    t=r.a;
    r.a=s.b;
    s.b=t;
    cout<<"First no."<<r.a<<'\n';
    cout<<"Second no."<<s.b<<'\n';
}
int main(){
A k;
B l;
k.input();
l.input();
swwap(k,l);
}