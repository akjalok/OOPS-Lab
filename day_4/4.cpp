#include <iostream>
using namespace std;
class A{
    string a[50];
    int r[50];
    int m[50];
    int avg=0;
    int n;
    public:
    void number(){
        cout<<"Enter the number of students:";
        cin>>n;
    }

    void input(){
        for(int i=0;i<n;i++){
        cout<<"Enter the name :";
        cin>>a[i];
        cout<<"Enter the roll_number:";
        cin>>r[i];
        cout<<"Enter the total marks:";
        cin>>m[i];
    }
    }
    friend void cmpp(A &);
};

void cmpp(A &r){
    for(int i=0;i<r.n;i++){
        r.avg=r.avg+r.m[i];
    }
    r.avg=r.avg/r.n;
    cout<<"The average marks is:"<<r.avg;
    }
int main(){
A k;
k.number();
k.input();
cmpp(k);
}