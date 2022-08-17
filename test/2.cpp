#include <iostream>
using namespace std;
class complex{
    int r[2],img[2];
    public:
    void input(){
        for(int i=0;i<2;i++){
        cout<<"Enter real part of the number"<<i+1<<":";
        cin>>r[i];
        cout<<"Enter imaginary part of the number"<<i+1<<":";
        cin>>img[i];
    }
    }
    void output(){
         for(int i=0;i<2;i++){
            if(img[i]>0)
        cout<<"The number"<<i+1<<"is:"<<r[i]<<"+"<<img[i]<<"i"<<'\n';
        else if (img[i]==0)
        cout<<"The number"<<i+1<<"is:"<<r[i]<<'\n';
        else if(img[i]<0)
        cout<<"The number"<<i+1<<"is:"<<r[i]<<"-"<<img[i]*(-1)<<"i"<<'\n';
    }
    }
    void add(){
        img[0]=img[0]+img[1];
        r[0]=r[0]+r[1];
        if(img[0]>0)
        cout<<"The sum is:"<<r[0]<<"+"<<img[0]<<"i"<<'\n';
        else if (img[0]==0)
        cout<<"The sum is:"<<r[0]<<'\n';
        else if(img[0]<0)
        cout<<"The sum is:"<<r[0]<<"-"<<img[0]*(-1)<<"i"<<'\n';
    }
    void substract(){
         img[0]=img[0]-img[1];
        r[0]=r[0]-r[1];
        if(img[0]>0)
        cout<<"The difference is:"<<r[0]<<"+"<<img[0]<<"i"<<'\n';
        else if (img[0]==0)
        cout<<"The difference is:"<<r[0]<<'\n';
        else if(img[0]<0)
        cout<<"The difference is:"<<r[0]<<"-"<<img[0]*(-1)<<"i"<<'\n';
    }
};
int main(){
    complex s;
    s.input();
    int i=0;

    cout<<"commands:\n 1 for display \n 2 for addition \n 3 for substraction \n 4 for termination\n";
    while(i!=4){
    cout<<"Enter the commmand:";
    cin>>i;
    if(i==1)
    s.output();
    else if(i==2)
    s.add();
    else if(i==3)
    s.substract();
    }
    return 0;
    
}