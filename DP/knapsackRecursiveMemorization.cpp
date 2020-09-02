#include<bits/stdc++.h>
using namespace std;

int dp[101][1001];

int knapsack(int wt[], int val[], int w, int n)
{
  if(n==0 || w==0)
    return 0;

  else if(dp[n][w]!=-1)
    return dp[n][w];

  else if(wt[n-1]<=w)
    return dp[n][w] = max(val[n-1]+knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));

  else
    return dp[n][w] = knapsack(wt, val, w, n-1);
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
