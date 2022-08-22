#include <bits/stdc++.h>
using namespace std;
class Sort{
    int arr[10];
    public:
    void sorter(int *arr){
        sort(arr,arr+10);
        cout<<"The highest number is: "<<arr[9];
    }
};
int main(){
    int n[10];
    cout<<"Enter the array:";
    for(int i=0;i<10;i++){
        cin>>n[i];
    }
    Sort ob;
    ob.sorter(n);
}
