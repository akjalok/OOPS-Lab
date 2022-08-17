#include <iostream>
using namespace std;
class details{
char name[30];
int roll_no,total_marks;
public:
void input(){
  cout<<"Enter the name:";
  cin>>name;
  cout<<"Enter roll number";
  cin>>roll_no;
  cout<<"Enter total marks:";
  cin>>total_marks;  
}
void output(){
  cout<<"Name:"<<name<<'\n';
  cout<<"Roll number:"<<roll_no<<'\n';
  cout<<"Total marks:"<<total_marks<<'\n';
}
};
int main(){
    int n;
    cout<<"Number of students:";
    cin>>n;

details stu1[n];
for(int i=0;i<n;i++){
stu1[i].input();
}
for(int i=0;i<n;i++){
stu1[i].output();
}
return 0;
}