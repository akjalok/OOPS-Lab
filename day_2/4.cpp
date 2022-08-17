#include <iostream>
using namespace std;
class complex{
    int r[10],img[10];
    public:
    void input(){
        for(int i=0;i<10;i++){
        cout<<"Enter real part of the number"<<i+1<<":";
        cin>>r[i];
        cout<<"Enter imaginary part of the number"<<i+1<<":";
        cin>>img[i];
    }
    }
    void output(){
         for(int i=0;i<10;i++){
            if(img[i]>0)
        cout<<"The number"<<i+1<<"is:"<<r[i]<<"+"<<img[i]<<"i"<<'\n';
        else if (img[i]==0)
        cout<<"The number"<<i+1<<"is:"<<r[i]<<'\n';
        else if(img[i]<0)
        cout<<"The number"<<i+1<<"is:"<<r[i]<<"-"<<img[i]*(-1)<<"i"<<'\n';
    }
    }
};
int main(){
    complex s;
    s.input();
    s.output();
}