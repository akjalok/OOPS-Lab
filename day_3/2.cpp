#include <iostream>
using namespace std;
class area1{
public:
float volume(int a,int b,int c){
return a*b*c;
}
float volume(int r,int h){
    return 3.14*r*r*h;
}
float volume(int r){
return (4/3)*(3.14*r*r*r);
}
};
int main()
{
    area1 o;
    int a,b,c,r,h,r1;
    float a1,a2,a3;
    cout<<"Enter the length,breadth and height of cuboid:";
    cin>>a>>b>>c;
    cout<<"Enter the radius and height of the cylinder:";
    cin>>r>>h;
    cout<<"Enter the radius of sphere:";
    cin>>r1;
    a1=o.volume(a,b,c);
    a2=o.volume(r,h);
    a3=o.volume(r1);
    cout<<"Volume of cuboid is:"<<a1<<'\n';
    cout<<"Volume of cylinder is:"<<a2<<'\n';
    cout<<"Volume of sphere is:"<<a3<<'\n';
}
