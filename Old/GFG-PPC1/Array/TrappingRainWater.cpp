// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends




// function to find the trapped water in between buildings
// arr: input array
// n: size of array

int trappingWater(int arr[], int n){
  int i, water=0, l[n], r[n];

  l[0] = arr[0];
  for(i=1; i<n; i++)
    l[i] = max(l[i-1], arr[i]);

  r[n-1] = arr[n-1];
  for(i=n-2; i>=0; i--)
    r[i] = max(r[i+1], arr[i]);

  for(i=0; i<n; i++)
    cout<<l[i]<<" ";

  cout<<"\n";

  for(i=0; i<n; i++)
    cout<<r[i]<<" ";

  cout<<"\n";

  for(i=0; i<n; i++)
    water+=(min(l[i], r[i])-arr[i]);

  return water;
}


// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;

        cin >> n;

        int a[n];

        for(int i =0;i<n;i++){
            cin >> a[i];
        }

        cout << trappingWater(a, n) << endl;

    }

    return 0;
}  // } Driver Code Ends
