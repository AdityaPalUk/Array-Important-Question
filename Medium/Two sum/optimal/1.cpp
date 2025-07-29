//Two Pointer

#include<bits/stdc++.h>
using namespace std;
string twosum(vector<int> &a,int target){
    sort(a.begin(),a.end());
    int n=a.size();
    int left=0,right=n-1;
    while(left<right){
        int sum=a[left]+a[right];

        if(sum==target){
            return "Yes";  
        }
        else if(sum<target) left++;
        else right--;
    }
    return "no";
}
int main(){
    vector<int> a={1,2,8,5,6};
    int target=14;
    string ans=twosum(a,target);
    cout<<ans;
    return 0;

}