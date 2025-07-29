#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> forsum(vector<int> &ar,int target){
    set<vector<int>> st;
    int n=ar.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(ar[i]+ar[j]+ar[k]+ar[l]==target){
                        vector<int> temp={ar[i],ar[j],ar[k],ar[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
int main(){
    vector<int> ar={4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target=9;
    vector<vector<int>> ans=forsum(ar,target);
    cout << "The quadruplets are: \n";
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}