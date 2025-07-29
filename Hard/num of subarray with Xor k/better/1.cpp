#include<bits/stdc++.h>
using namespace std;
int maxnum(vector<int> &ar,int n){
    int k=6;
    int cnt=0;
    for(int i=0;i<n;i++){
        int xor1=0;
        for(int j=i;j<n;j++){
            xor1=xor1^ar[j];
            if(xor1==k) cnt++;
        }
    }
    return cnt;
}
int main(){
    vector<int> ar={4, 2, 2, 6, 4};
    int n=ar.size();
    cout<<maxnum(ar,n);
    return 0;
}