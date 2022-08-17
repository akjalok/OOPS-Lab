#include <iostream>
using namespace std;
class details{
char name[30];
int id,age;
float salary;
public:
void input(){
  cout<<"Enter the name:";
  cin>>name;
  cout<<"Enter id:";
  cin>>id;
  cout<<"Enter age:";
  cin>>age;  
  cout<<"Enter Salary:";
  cin>>salary;
}
void output(){
  cout<<name<<'\t'<<id<<'\t'<<age<<'\t'<<salary*1.90<<'\n';
}
};
int main(){
    int n;
    cout<<"Number of employees:";
    cin>>n;

details emp[20];
for(int i=0;i<n;i++){
emp[i].input();
}
 cout<<"Name"<<'\t'<<"ID"<<'\t'<<"Age"<<'\t'<<"Gross Salary"<<'\n';

for(int i=0;i<n;i++){
emp[i].output();
}
return 0;
}