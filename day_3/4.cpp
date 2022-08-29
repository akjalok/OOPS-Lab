#include <iostream>
using namespace std;
class power{
public:
 void square(int a){
    cout<<"Square:"<<a*a;
 }
 void cube(int a){
    cout<<"Cube:"<<a*a*a;
 }
};
int main(){
power o;
int a;
cout<<"Enter the number:";
cin>>a;
o.square(a);
cout<<'\n';
o.cube(a);
return 0;
}