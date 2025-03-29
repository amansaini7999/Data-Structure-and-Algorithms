#include<bits/stdc++.h>
using namespace std;

int dp[101][1001];

int knapsack(int wt[], int val[], int w, int n)
{
  for(int i=0; i<=n; i++)
    dp[i][0] = 0;

  for(int j=0; j<=w; j++)
    dp[0][j] = 0;

  for(int i=1; i<=n; i++)
    for(int j=1; j<=w; j++)
    {
      if(wt[i-1]<=j)
        dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
      else
        dp[i][j] = dp[i-1][j];
    }
    return dp[n][w];
}

int main()
{
  int n;
  cin>>n;

  int wt[n], val[n];

  for(int i=0; i<n; i++)
    cin>>wt[i];

  for(int i=0; i<n; i++)
    cin>>val[i];

  int w;
  cin>>w;

  memset(dp, -1, sizeof(dp));
  cout<<knapsack(wt, val, w, n)<<"\n";

  return 0;
}
