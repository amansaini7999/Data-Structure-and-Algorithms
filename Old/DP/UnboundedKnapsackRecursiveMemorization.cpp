#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

int UnboundedKnapsack(int wt[], int val[], int n, int w)
{
  if(n==0 || w==0)
    return 0;

  else if(dp[n][w]!=-1)
    return dp[n][w];

  else if(wt[n-1]<=w)
    return max((val[n-1]+UnboundedKnapsack(wt, val, n, w-wt[n-1])), UnboundedKnapsack(wt, val, n-1, w));

  else
    return UnboundedKnapsack(wt, val, n-1, w);
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
  cout<<UnboundedKnapsack(wt, val, n, w)<<"\n";
  return 0;
}
