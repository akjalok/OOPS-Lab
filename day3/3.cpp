#include <iostream>
using namespace std;
class fun1{
public:
char fun(char a='*',int b=80){
   for(int i=0;i<b;i++){
    cout<<a<<" ";
   }
   cout<<'\n';
}

};

int main(){
fun1 o;
int n;
char c,result;
cout<<"Enter the number of times:";
cin>>n;
cout<<"Enter the character:";
cin>>c;
o.fun(c,n);
o.fun(c);
o.fun();

}