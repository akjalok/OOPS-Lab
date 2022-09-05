#include <iostream>
using namespace std;
class condes{
    static int a;
    static int b;
    public:
    condes(){cout<<"constructor called"<<'\n';
        cout<<"Number of times constructor called:"<<++a<<'\n';}
    ~condes(){cout<<"destructor called"<<'\n';
        cout<<"Number of times destructor called:"<<++b<<'\n';}
    };
int condes::a;
int condes::b;
int main(){
condes a;
condes b;

}