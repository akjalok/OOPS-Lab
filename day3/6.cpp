#include <iostream>
using namespace std;
class inc{
public:
 void inc1(int a){
    a++;
    cout<<"Number :"<<a;
 }
 
};

int main(){
inc o;
int a,b;
cout<<"Enter Number :";
cin>>a;
o.inc1(a);
return 0;
}