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
};
int main(){
    struct stu stu1;
   
   
    
    cout<<"Enter the student name:";
    cin>>stu1.student;
    cout<<"Enter the student roll_no.:";
    cin>>stu1.roll_number;
    cout<<"Enter the marks in Maths:";
    cin>>stu1.marks1;
    cout<<"Enter the marks in English:";
    cin>>stu1.marks2;
    cout<<"Enter the marks in Hindi:";
    cin>>stu1.marks3;
    cout<<"Enter the marks in Science:";
    cin>>stu1.marks4;
    cout<<"Enter the marks in Sst:";
    cin>>stu1.marks5;

    

cout<<"NAME:"<<stu1.student<<'\n';
cout<<"ROLL NO:"<<stu1.roll_number<<'\n';
cout<<"MATHS MARKS:"<<stu1.marks1<<'\n';
cout<<"ENGLISH MARKS:"<<stu1.marks2<<'\n';
cout<<"HINDI MARKS:"<<stu1.marks3<<'\n';
cout<<"SCIENCE MARKS:"<<stu1.marks4<<'\n';
cout<<"SST MARKS:"<<stu1.marks5<<'\n';


}