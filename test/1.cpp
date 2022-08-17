#include <iostream>
using namespace std;
class interest
{
    float principal;
    float time;
    float rate;
    

public:
    void input(void);
    void output(void);
};
void interest::input(void)
{
   cout<<"Enter the principal amount:";
    cin >> principal;
    cout << "Enter the time:";
    cin >> time;
    cout<<"Enter the rate of interest:";
    cin>>rate;
}
void interest::output(void)
{
    cout << "Amount earned:" << (principal*time*rate/100)+principal;
}

int main()
{
   interest o1;
   o1.input();
   o1.output();
   return 0;
}