#include <iostream>
using namespace std;
class area1{
public:
float area(int a,int b){
return a*b;
}
float area(float r){
    return 3.14*r*r;
}
float area(float l,float h){
return .5*l*h;
}
};
int main()
{
    area1 o;
    int a,b;
    float r,l,h;
    float a1,a2,a3;
    cout<<"Enter the length and breadth of rectangle:";
    cin>>a>>b;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    cout<<"Enter the length and height of triangle:";
    cin>>l>>h;
    a1=o.area(a,b);
    a2=o.area(r);
    a3=o.area(l,h);
    cout<<"Area of rectangle is:"<<a1<<'\n';
    cout<<"Area of circle is:"<<a2<<'\n';
    cout<<"Area of triangle is:"<<a3<<'\n';
}
