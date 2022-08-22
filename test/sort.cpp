#include<bits/stdc++.h>
using namespace std;
int main(){
    int n[10];
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>n[i];
    }
    sort(n,n+m);
    cout<<n[m-1];
}