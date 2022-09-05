#include <iostream>
using namespace std;
class String{
    string a,b;
    int c,d;
    public:
    String(string x){a=x;c=x.size();}
    void cont( String &z,String &y){b=z.a+y.a;cout<<b<<'\n';}
    void display(){cout<<a<<" size: "<<c<<'\n';}
    ~String(){cout<<"des"<<'\n';}
    };
int main(){
String a("al");
a.display();
String b("ok");
b.display();
a.cont(a,b);

}

