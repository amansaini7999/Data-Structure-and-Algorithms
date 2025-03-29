#include<bits/stdc++.h>
using namespace std;

int dp[100001];

int solve(int arr[], int n)
{
  if(n<=0)
    return 0;

  else if(dp[n]!=-1)
    return dp[n];

  return dp[n] = max(arr[n-1]+solve(arr, n-2), solve(arr, n-1));
}

int main()
{
  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++)
    cin>>arr[i];

  memset(dp, -1, sizeof(dp));
  cout<<solve(arr, n)<<"\n";

  return 0;
}
