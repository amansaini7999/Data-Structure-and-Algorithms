#include<bits/stdc++.h>
using namespace std;

int dp[5][21];

int getSol(int arr[], int n, int range)
{
  memset(dp, 0, sizeof(dp));
  //for(int j=0; j<=range; j++)
  //  dp[0][j] = 0;

  for(int i=0; i<=n; i++)
    dp[i][0] = 1;

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=range; j++)
    {
      if(arr[i-1]<=j)
        dp[i][j] = (dp[i-1][j-arr[i-1]] || dp[i-1][j]);
      else
        dp[i][j] = dp[i-1][j];
    }
  }

  int mx = INT_MIN;
  for(int i=0; i<=range; i++)
    if(dp[n][i]==1)
      mx = i;

  return mx;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n], sum=0;
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
      sum+=arr[i];
    }

    cout<<sum - getSol(arr, n, sum/2)<<"\n";
  }

  return 0;
}
