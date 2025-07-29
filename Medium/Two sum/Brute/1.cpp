// Two sum varient 1
//Brute Approach

#include<bits/stdc++.h>
using namespace std;
string twosum(vector<int> &a,int target){
    int n=a.size();
    //int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                return "yes";
            }
        }
    }
    return "no";
}
int main(){
    vector<int> a={2,3,6,5,8};
    int target = 14;
    cout<<twosum(a,target);
    return 0;

}