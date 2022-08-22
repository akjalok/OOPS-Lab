#include <iostream>
using namespace std;
class member{
    int n;
    public:
    void input(int);
};
void member::input(int n ){
    cout<<"The number is:"<<n;    
}
int main(){
    int a;
    member mem1;
    cout<<"Enter the number:";
    cin>>a;
    mem1.input(a);
}