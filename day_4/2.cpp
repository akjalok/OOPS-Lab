#include <iostream>
using namespace std;
class B;
class A{
    float a,k;
    public:
    void input(){
        cout<<"Enter number of feets:";
        cin>>a;
        cout<<"Enter the number of inches:";
        cin>>k;
    }
    friend void cmpp(A &,B &);
};
class B{
    float b,t;
    public:
    void input(){
        cout<<"Enter the number of metres:";
        cin>>b;
        cout<<"Enter the number of centimetres:";
        cin>>t;
    }
    friend void cmpp(A &,B &);
};
void cmpp(A &r,B &s){
if(r.a*30.5+r.k*2.5>=s.b*100+s.t){
    cout<<r.a<<" feets "<<r.k<<" inches\n";
}
else
    cout<<s.b<<" metres "<<s.t<<" centimetres\n";
}
int main(){
A k;
B l;
k.input();
l.input();
cmpp(k,l);
}