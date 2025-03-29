// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
void subarraySum(int arr[], int n, int s){
  int i, sum=0, start=1, end=0;
  queue<int> q;

  for(i=0; i<n; i++)
  {
    sum+=arr[i];
    q.push(arr[i]);
    end++;
    while(sum>s)
    {
      sum-=q.front();
      q.pop();
      start++;
    }
    if(sum==s)
    {
      cout<<start<<" "<<end;
      break;
    }
  }
  if(sum!=s)
    cout<<"-1";
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        subarraySum(arr, n, s);
        cout<<endl;

    }
	return 0;
}  // } Driver Code Ends
