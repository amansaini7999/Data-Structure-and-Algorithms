#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int knapsack(int val[], int wt[], int n, int w)
{
  if(n==0 || w==0)
    return 0;

  else if(dp[n][w]!=-1)
    return dp[n][w];

  else if(wt[n-1]<=w)
    return dp[n][w] = max(val[n-1] + knapsack(val, wt, n-1, w-wt[n-1]), knapsack(val, wt, n-1, w));

  else
    return dp[n][w] = knapsack(val, wt, n-1, w);
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, w;
    cin>>n>>w;

    int val[n], wt[n];
    for(int i=0; i<n; i++)
      cin>>val[i];

    for(int i=0; i<n; i++)
      cin>>wt[i];

    memset(dp, -1, sizeof(dp));
    cout<<knapsack(val, wt, n, w)<<"\n";
  }

  return 0;
}
