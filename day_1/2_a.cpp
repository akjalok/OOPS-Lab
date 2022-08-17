#include <iostream>
using namespace std;
struct stu{
    char student[20];
    int roll_number;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
};
int main(){
    
    int n;
    cout<<"Enter the number of students";
    cin>>n;
   struct stu stu1[n];
   int total_marks[n],percentage[n];
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
        total_marks[i]=stu1[i].marks1+stu1[i].marks2+stu1[i].marks3+stu1[i].marks4+stu1[i].marks5;
        percentage[i]=total_marks[i]/5;
    }

    
for (int i=0;i<n;i++)
{
cout<<"Displaying info for the student"<<i+1<<'\n'<<'\n';
cout<<"NAME:"<<stu1[i].student<<'\n';
cout<<"ROLL NO:"<<stu1[i].roll_number<<'\n';
cout<<"TOTAL MARKS:"<<total_marks[i]<<'\n';
cout<<"PERCENTAGE:"<<percentage[i]<<'\n'<<'\n';
}
}

