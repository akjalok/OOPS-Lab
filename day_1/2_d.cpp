#include <bits/stdc++.h>
using namespace std;
struct stu{
    char student[20];
    int roll_number;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int total;
    int percentage;
};
int main(){
    
    int n;
    cout<<"Enter the number of students";
    cin>>n;
   struct stu stu1[n];
   
    for (int i=0;i<n;i++){
    cout<<"Enter the student name:";
    cin>>stu1[i].student;
    cout<<"Enter the student roll_no.:";
    cin>>stu1[i].roll_number;
    cout<<"Enter the marks in Maths:";
    cin>>stu1[i].marks1;
    cout<<"Enter the marks in English:";
    cin>>stu1[i].marks2;
    cout<<"Enter the marks in Hindi:";
    cin>>stu1[i].marks3;
    cout<<"Enter the marks in Science:";
    cin>>stu1[i].marks4;
    cout<<"Enter the marks in Sst:";
    cin>>stu1[i].marks5;
    }
    for(int i=0;i<n;i++){
        stu1[i].total=stu1[i].marks1+stu1[i].marks2+stu1[i].marks3+stu1[i].marks4+stu1[i].marks5;
        stu1[i].percentage=stu1[i].total/5;
    }
    struct stu t;
    for(int i=0; i<n; i++){
    for(int j=0; j<n-1-i; j++){
      if(stu1[j].total>stu1[j+1].total){
        t=stu1[j];
        stu1[j]=stu1[j+1];
        stu1[j+1]=t;
            }
    }
    }
for (int i=0;i<n;i++)
{
cout<<"Displaying info for the student"<<'\n'<<'\n';
cout<<"NAME:"<<stu1[i].student<<'\n';
cout<<"ROLL NO:"<<stu1[i].roll_number<<'\n';
cout<<"TOTAL MARKS:"<<stu1[i].total<<'\n';
cout<<"PERCENTAGE:"<<stu1[i].percentage<<'\n'<<'\n';
}
}

