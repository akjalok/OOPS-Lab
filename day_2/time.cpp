#include <iostream>
using namespace std;
class time{
int time1_hr,time1_min,time2_hr,time2_min;
public:
void input(){
    cout<<"Enter the first time's hr part:";
    cin>>time1_hr;
    cout<<"Enter the first time's min part:";
    cin>>time1_min;
    cout<<"Enter the second time's hr part:";
    cin>>time2_hr;
    cout<<"Enter the second time's min part:";
    cin>>time2_min;
}
void add(){
    int x,y;
    x=(time1_min+time2_min)/60;
    y=time1_hr+time2_hr+x;
    x=(time1_min+time2_min)%60;
     cout<<y<<"hours:"<<x<<"minutes";
}
};




int main(){
time t1;
t1.input();
t1.add();
return 0;
}