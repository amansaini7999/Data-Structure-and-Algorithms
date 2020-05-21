// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends



// Function to find the transition point
int transitionPoint(int arr[], int n) {
  int index=-1, i;
  for(i=0; i<n; i++)
    if(arr[i]==1)
    {
      index=i;
      break;
    }

  for(i=index+2; i<n; i++)
    if(arr[i-1]==0 && arr[i]==1)
      index=1;

  return index;
}
