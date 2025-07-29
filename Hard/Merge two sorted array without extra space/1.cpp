#include<bits/stdc++.h>
using namespace std;
void merge(long long arr1[],long long arr2[],int n,int m){
    vector<long long> arr3(n+m,0);
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        arr3[n+i]=arr2[i];
    }
    sort(arr3.begin(),arr3.end());
    for(int i=0;i<n;i++){
        arr1[i]=arr3[i];
    }
    for(int i=0;i<m;i++){
        arr2[i]=arr3[n+i];
    }

}
int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
