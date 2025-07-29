//Largest element in array  without sorting

#include <iostream>
using namespace std;
int largest(int arr[],int n){
    int largestel =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largestel){
            largestel=arr[i];
        }
    }
    return largestel;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Largest element:"<<largest(arr,n);
    
}

//TC=O(n)