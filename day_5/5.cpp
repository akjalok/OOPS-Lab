#include <iostream>
using namespace std;
class Count{
    static int a;
    
    public:
    Count(){++a;}
    static void display();
    };
void Count::display()
{cout<<"Number of objects:"<<a;}
int Count::a;

int main(){
Count a,b,c,d;
Count::display();
}