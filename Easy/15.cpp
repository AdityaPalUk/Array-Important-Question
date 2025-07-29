//longest subarray having sum k
//Brute approach


#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n,int k){
    int maxlen=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==k){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}
int main(){
    int arr[]={1,2,3,3,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout<<find(arr,n,k);
}