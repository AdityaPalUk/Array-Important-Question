#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ar={3,1,-2,-5,2,-4};
    int n=ar.size();
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
    for(int i=0;i<n/2;i++){
        ar[2*i]=pos[i];
        ar[2*i+1]=neg[i];
    }
    for(auto it:ar){
        cout<<it<<" ";
    }
}

