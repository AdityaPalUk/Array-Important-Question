//union of two array  array must be sorted

#include <bits/stdc++.h>
using namespace std;
vector<int> unionM(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    vector<int> Union;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(Union.size()==0 || Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }else{
            if(Union.size()==0 || Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
    } 

    while(i<n){
        if(Union.size()==0 || Union.back()!=arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }

    while(j<m){
        if(Union.size()==0 || Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
        }
        j++;
    }

    return Union;

}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7,8};
    int n=5;
    int m=6;
    vector<int> uni=unionM(arr1,arr2,n,m);
    for(auto it:uni){
        cout<<it<<" ";
    }

}
/*
Time Complexity: O(m+n), Because at max i runs for n times and j runs for m times. When there are no common elements in arr1 and arr2 and all elements in arr1, arr2 are distinct. 

Space Complexity : O(m+n) {If Space of Union ArrayList is considered} 

O(1) {If Space of union ArrayList is not considered}
*/


















/*  BRUTE APPROACH using sets unsorted array also


#include <bits/stdc++.h>
using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  set < int > s;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    s.insert(arr1[i]);
  for (int i = 0; i < m; i++)
    s.insert(arr2[i]);
  for (auto & it: s)
    Union.push_back(it);
  return Union;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

TC = O( (m+n)log(m+n) ) 

*/