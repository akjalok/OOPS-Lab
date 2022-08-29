#include <iostream>
using namespace std;
class B;
class A{
    int a,k=0;
       public:
    void input(){
        k++;
        cout<<"Enter the first number:";
        cin>>a;
    }
    void show(){
        k++;
        cout<<"The first number:"<<a<<'\n';
    }
    friend void cmpp(A &,B &);
};
class B{
    int b,t=0;
    public:
    void input(){
        t++;
        cout<<"Enter the second number";
        cin>>b;
    }
    void show(){
        t++;
        cout<<"The second number"<<b<<'\n';
    }
    friend void cmpp(A &,B &);
};
void cmpp(A &r,B &s){
    cout<<"Number of functions called:"<<r.k+s.t;
}
int main(){
A k;
B l;
k.input();
l.input();
k.show();
l.show();
cmpp(k,l);
}