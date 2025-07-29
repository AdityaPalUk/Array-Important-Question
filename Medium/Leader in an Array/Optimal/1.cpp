#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> &ar,int n){
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(ar[i]>maxi){
            ans.push_back(ar[i]);
        }
        maxi=max(maxi,ar[i]);
    }
    return ans;
}
int main(){
    vector<int> ar={10,22,6,0,3};
    int n=ar.size();
    vector<int> ans=leader(ar,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
}