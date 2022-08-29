#include <iostream>
using namespace std;
class B;
class A{
    string nam[50];
    string aut[50];
    int pri[50];
    int n;
    public:
    void number(){
        cout<<"Enter the number of books:";
        cin>>n;
    }

    void input(){
        for(int i=0;i<n;i++){
        cout<<"Enter the name :";
        cin>>nam[i];
        cout<<"Enter the author:";
        cin>>aut[i];
        cout<<"Enter the price:";
        cin>>pri[i];
    }
    }
    friend void cmpp(A &,B &);
};
class B{
    int a,b;
    public:
    void input(){
        cout<<"Enter the upper limit of the price range:";
        cin>>a;
        cout<<"Enter the lower limit of the price range:";
        cin>>b;
    }
    friend void cmpp(A &,B &);
};
void cmpp(A &r, B &s){
    for(int i=0;i<r.n;i++){
        if(r.pri[i]<=s.a&&r.pri[i]>=s.b){
            cout<<"\nName of the book:"<<r.nam[i]<<'\n';
            cout<<"Name of the author:"<<r.aut[i]<<'\n';
            cout<<"Price of the book:"<<r.pri[i]<<'\n';
        }
    }
    }
int main(){
A k;
B l;
k.number();
k.input();
l.input();
cmpp(k,l);
}