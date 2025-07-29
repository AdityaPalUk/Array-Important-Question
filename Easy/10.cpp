// intersection

#include <iostream>
#include <vector>
using namespace std;

// Function to find the intersection of two sorted arrays,
// returning only unique common elements
vector<int> findIntersection(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;
    vector<int> inter;
    while (i < n && j < m) {
        
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            // Found a common unique element
            inter.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return inter;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5, 6, 6};
    int arr2[] = {2, 2, 3, 5, 6, 7, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> intersection = findIntersection(arr1, n, arr2, m);

    cout << "Intersection of arrays:\n";
    for (int x : intersection) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}


//TC=O(n+m)