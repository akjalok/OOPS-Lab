
#include<iostream>
using namespace std;
class swapp
{
    public:
    int n;
    void input();
    swapp swap(swapp&,swapp&);
    void output();
};
void swapp::input()
{
    cout<<"\n ENTER THE VALUE OF N=";
    cin>>n;
}
swapp swapp::swap(swapp& x,swapp& y)
{
    swapp t;
    t.n=x.n;
    x.n=y.n;
    y.n=t.n;
    return(t);
}
void swapp::output()
{
    cout<<"\n THE VALUE OF N IS="<<n;
}
int main()
{
    swapp o1,o2,o3;
    
    o1.input();
    o2.input();
    o3=o3.swap(o1,o2);
    o3.output();
    
}