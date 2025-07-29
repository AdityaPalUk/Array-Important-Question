// Rotate array once left

#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    cout<<"New Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}