//Remove Duplicates from sorted array

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,3,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"Size of new array:"<<i+1<<endl;
    cout<<"New Array:"<<endl;
    for(int j=0;j<i+1;j++){
        cout<<arr[j]<<endl;
    }
}

//TC=O(n) 