#include<bits/stdc++.h>
using namespace std;
long long maxsum(vector<int> &a, int n){
    int maxi=LONG_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> a={1,-2,3,4,-1,2,-4};
    int n=a.size();
    cout<<maxsum(a,n);
    return 0;
}