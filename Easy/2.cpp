//Second Largest without sorting

#include <bits/stdc++.h>
using namespace std;
int slargest(int arr[],int n){
    int largestel=arr[0];
    int slargestel=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largestel){
            slargestel=largestel;
            largestel=arr[i];
        }
        else if(arr[i]<largestel && arr[i]>slargestel){
            slargestel=arr[i];
        }
    }
    return slargestel;
}
int ssmallest(int arr[],int n){
    int smallestel=INT_MAX;
    int ssmallestel=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallestel){
            ssmallestel=smallestel;
            smallestel=arr[i];
        }
        else if(arr[i]>smallestel && arr[i]<ssmallestel){
            ssmallestel=arr[i];
        }


    }
    return ssmallestel;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Second Largest:"<<slargest(arr,n)<<endl;
    cout<<"Second Smallest:"<<ssmallest(arr,n);
}

//TC=O(n)