#include <iostream>
using namespace std;
class Primary_class{
    public:
    class Nested_class{
        int a;
        public:
        void output(int a){
            cout<<"The number is:"<<a;
        }
    };
};
int main(){
    int a;
    Primary_class::Nested_class obj;
    cout<<"Enter the number:";
    cin>>a;
    obj.output(a);
}