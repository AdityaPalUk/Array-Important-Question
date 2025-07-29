#include<bits/stdc++.h>
using namespace std;
void merge(int ar1[],int ar2[],int n,int m){
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(ar1[left]>ar2[right]){
            swap(ar1[left],ar2[right]);
            left--;
            right++;
        }else{
            break;
        }
    }
    sort(ar1,ar1+n);
    sort(ar2,ar2+m);

}
int main(){
    int ar1[]={1,3,5};
    int n=3;
    int ar2[]={2,4};
    int m=2;
    merge(ar1,ar2,n,m);
    cout<<"ar1[] = ";
    for(int i=0;i<n;i++){
        cout<<ar1[i]<<" ";
    }
    cout<<endl;
     cout<<"ar2[] = ";
    for(int i=0;i<m;i++){
        cout<<ar2[i]<<" ";
    }

}