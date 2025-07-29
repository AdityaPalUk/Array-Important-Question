// Rotate nth times 
 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;

    cout << "Enter number of times to rotate left: ";
    cin >> d;

    // To avoid unnecessary full cycles
    d = d % n;

    for (int r = 0; r < d; r++) {
        int temp = arr[0]; // store first element
        for (int i = 1; i < n; i++) {
            arr[i - 1] = arr[i]; // shift elements left
        }
        arr[n - 1] = temp; // move first to last
    }

    cout << "New Array after " << d << " left rotations:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




/*OPTIMAL


#include <iostream>
using namespace std;
// Function to Reverse the array
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k)
{
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array 
  Reverse(arr, 0, n - 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  if(k>n){
    k=k%n;
  }
  Rotateeletoleft(arr, n, k);
  cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
  


*/
