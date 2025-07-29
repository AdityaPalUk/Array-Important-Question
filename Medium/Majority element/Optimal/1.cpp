#include <bits/stdc++.h>
using namespace std;

vector majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }
    vector<int> ans;
    if (cnt1 > (n / 3)) ans.push_back(el);;
    return ans;
}

int main()
{
    vector<int> arr = {11,33,33,11,33,11};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
 
//TC=O(2n)
//SC=O(1)