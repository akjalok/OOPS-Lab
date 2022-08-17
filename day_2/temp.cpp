// WAP to add two time in the hour and minutes format
#include <iostream>
using namespace std;
class time
{
    int hr;
    int min;

public:
    void setData(void);
    void getData(void);
    void sum(time t1, time t2);
};
void time::setData(void)
{
    cout << "Hours:  ";
    cin >> hr;
    cout << "Minutes: t";
    cin >> min;
}
void time::getData(void)
{
    cout << "Hours:  " << hr << endl;
    cout << "Minutes: " << min << endl;
}
void time::sum(time t1, time t2)
{
    hr = t1.hr + t2.hr;
    min = t1.min + t2.min;
    while (min >= 60)
    {
        hr++;
        min = min - 60;
    }
    cout << "Sum of time is :" << hr << " hr " << min << "min" << endl;
}
int main()
{
    time t1, t2, t3;
    cout << "Enter time 1 in" << endl;
    
    t1.setData();
    cout << "Enter time 2 in" << endl;

    t2.setData();
    cout << "displaying time 1 in" << endl;

    t1.getData();
    cout << "displaying time 2 in" << endl;

    t2.getData();
    t3.sum(t1, t2);

    return 0;
}