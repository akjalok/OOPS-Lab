#include <iostream>
using namespace std;
struct emp{
    char name[20];
    int empID;
    float salary;
    int age;
};

int main(){
int n;
cout<<"Enter the number of employees:";
cin>>n;
struct emp *s1;
s1=(struct emp*)malloc(n*sizeof(struct emp));
for(int i=0;i<n;i++){
cout<<"Enter the name of the employee:";
cin>>(s1+i)->name;
cout<<"Enter the employee id:";
cin>>(s1+i)->empID;
cout<<"Enter basic salary:";
cin>>(s1+i)->salary;
cout<<"Enter the age:";
cin>>(s1+i)->age;
}
for(int i=0;i<n;i++){
    cout<<"Employee"<<i+1<<'\n';
    cout<<"NAME:"<<(s1+i)->name<<'\n';
    cout<<"ID:"<<(s1+i)->empID<<'\n';
    cout<<"AGE:"<<(s1+i)->age<<'\n';
    cout<<"Gross Salary:"<<((s1+i)->salary)*(1.90)<<'\n';
}
}

