#include<bits/stdc++.h>
using namespace std;
void countrev(int ar[],int n){
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]>2*ar[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
}
int main(){
    int ar[]={1,3,2,3,1};
    int n=5;
    countrev(ar,n);
}