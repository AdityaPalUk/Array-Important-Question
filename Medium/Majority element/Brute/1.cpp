#include<bits/stdc++.h>
using namespace std;
int majority(vector<int> &a,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>n/2){
            return a[i];
        }
    }
    return -1;
    
}
int main(){
    vector<int> a={2,2,3,4,2,2,5};
    int n=a.size();
    cout<<majority(a,n);
    return 0;


}