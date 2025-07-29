#include<bits/stdc++.h>
using namespace std;
string twosum(vector<int> &a,int target){
    int n=a.size();
 
    unordered_map<int,int> hshmap;
    for(int i=0;i<n;i++){
        int num=a[i];
        int req=target-num;
        if(hshmap.find(req)!=hshmap.end()){
            return "yes";  //return {hshmap[req],i};
        }
        hshmap[num]=i;
    }
    return "no";
}
int main(){
    vector<int> a={1,2,3,6,4,8};
    int target=14;
    cout<<twosum(a,target);

    return 0;
}