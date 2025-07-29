#include<bits/stdc++.h>
using namespace std;
void longestt(vector<int> &ar,int n){
    int maxlen=1;
    for(int i=0;i<n;i++){
        int sum=ar[i];
        for(int j=i+1;j<n;j++){
            sum+=ar[j];
            if(sum==0){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }
    cout<<maxlen;
}
int main(){
    vector<int> ar={9,3,-3,-1,6,-5,-1,1};
    int n=ar.size();
    longestt(ar,n);
    return 0;
}