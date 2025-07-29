#include<bits/stdc++.h>
using namespace std;
vector<int> reArrange(vector<int> &ar,int n){
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(ar[i]>0){
            pos.push_back(ar[i]);
        }
        else{
            neg.push_back(ar[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            ar[2*i]=pos[i];
            ar[2*i+1]=neg[i];
        }
        int ind=2*neg.size();
        for(int i=ind;i<pos.size();i++){
            ar[ind]=pos[i];
            ind++;
        }
    }else{
        for(int i=0;i<pos.size();i++){
            ar[2*i]=pos[i];
            ar[2*i+1]=neg[i];
        }
        int ind=2*pos.size();
        for(int i=ind;i<pos.size();i++){
            ar[ind]=neg[i];
            ind++;
        }
    }
    return ar;
}
int main(){
    vector<int> ar={-2,2,3,-4,-5,-3};
    int n=ar.size();
    vector<int> ans=reArrange(ar,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
}