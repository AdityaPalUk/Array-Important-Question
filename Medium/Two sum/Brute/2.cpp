//varient two

#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> &a,int target){
    int n=a.size();
    vector<int> ans;
    //int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> a={2,3,6,5,8};
    int target = 14;
    vector<int> ans=twosum(a,target);
    
    cout << "This is the answer for variant 2: [" << ans[0] << ", "<< ans[1] << "]" << endl;
    return 0;

}