#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

int mcm(int arr[], int i, int j)
{
  if(i==j)
    return 0;

  if(dp[i][j]!=-1)
    return dp[i][j];

  int count=0;
  int min=INT_MAX;
  for(int k=i; k<j; k++)
  {
    count = mcm(arr, i, k) + mcm(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];

    if(count<min)
      min = count;
  }
  return dp[i][j] = min;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
      cin>>arr[i];

    memset(dp, -1, sizeof(dp));
    cout<<mcm(arr, 1, n-1)<<"\n";
  }
  return 0;
}
