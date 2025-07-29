#include<bits/stdc++.h>
using namespace std;
void countinv(int ar[],int n){
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
}
int main(){
    int ar[]={5,3,2,4,1};
    int n=5;
    countinv(ar,n);
}