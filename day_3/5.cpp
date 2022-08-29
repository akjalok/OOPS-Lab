#include <iostream>
using namespace std;
class swa{
public:
 void swap1(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"Number 1:"<<a<<"\nNumber 2:"<<b;
 }
 
};

int main(){
swa o;
int a,b;
cout<<"Enter Number 1:";
cin>>a;
cout<<"Enter Number 2:";
cin>>b;
o.swap1(a,b);
return 0;
}