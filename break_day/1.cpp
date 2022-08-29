#include <iostream>
using namespace std;
class member{
    int n;
    public:
    void input(int n){
        cout<<"The number is"<<n;
    }
};
int main(){
    member mem1;
    int a;
    cout<<"Enter the number:";
    cin>>a;
    mem1.input(a);
    return 0;
}