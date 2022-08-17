#include<iostream>
using namespace std;
struct employee
{
    int id;
    char name[20];
    int age;
    int basicsalary;
};
int main()
{
    struct employee *ptr;
    int n;
    float DA,HRA;
    float Gross_salary;
    cout<<("Enter the number of employee: ")<<endl;
    cin>>n;
    ptr=(struct employee*)malloc(n*sizeof(struct employee));
    for(int i=0;i<n;i++)
    {
        cout<<("Enter the ID of Employee")<<endl;
        cin>>((ptr+i)->id);
        cout<<("Enter the Employee name")<<endl;
        cin>>((ptr+i)->name);
        cout<<("Enter the employee age")<<endl;
        cin>>((ptr+i)->age);
        cout<<("Enter the basic salary of the employee")<<endl;
        cin>>((ptr+i)->basicsalary);
    }
    for(int k=0;k<n;k++)
    {
        DA=0.8*((ptr+k)->basicsalary);
        HRA=0.1*((ptr+k)->basicsalary);
        Gross_salary=(ptr+k)->basicsalary+DA+HRA;
        cout<<(DA)<<endl;
        cout<<(HRA)<<endl;
        cout<<(Gross_salary)<<endl;
        cout<<" "<<endl;
    }
    cout<<("The Employee data's are as follows")<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<((ptr+j)->id)<<endl;
        cout<<((ptr+j)->name)<<endl;
        cout<<((ptr+j)->age)<<endl;
        cout<<((ptr+j)->basicsalary)<<endl;
    }
    return 0;
}