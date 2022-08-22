#include <iostream>
using namespace std;
int main(){
    int temp;
    int arr[5]={4,6,7,1,9};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}
