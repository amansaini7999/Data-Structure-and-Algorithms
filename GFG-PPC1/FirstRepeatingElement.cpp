// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0 ; i < n ; ++ i )
            cin >> arr[i] ;

        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array

int firstRepeated(int arr[], int n) {
  int i;
  map<int, int> m;

  for(i=0; i<n; i++)
  m[arr[i]]++;

  for(i=0; i<n; i++)
    if(m[arr[i]]>=2)
      return i+1;

  return -1;
}
