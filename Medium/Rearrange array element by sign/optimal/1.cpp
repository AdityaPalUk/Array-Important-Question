#include<bits/stdc++.h>
using namespace std;
vector<int> reArrange(vector<int> &ar,int n){
    vector<int> ans(n,0);
    int poindex=0;
    int negindex=1;
    for(int i=0;i<n;i++){
        if(ar[i]>0){
            ans[poindex]=ar[i];
            poindex+=2;
        }
        else{
            ans[negindex]=ar[i];
            negindex+=2;
        }
    }
    return ans;
}
int main(){
    vector<int> ar={3,1,-2,-5,2,-4};
    int n=ar.size();
    vector<int> ans=reArrange(ar,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
}