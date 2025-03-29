#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int UnboundedKnapsack(vector<int> wt, vector<int> val, int n, int w)
{
  for(int i=0; i<=n; i++)
    dp[i][0] = 0;

  for(int j=0; j<=w; j++)
    dp[0][j] = 0;

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=w; j++)
    {
      if(wt[i-1]<=j)
        dp[i][j] = max(val[i-1]+dp[i][j-wt[i-1]], dp[i-1][j]);
      else
        dp[i][j] = dp[i-1][j];
    }
  }
  return dp[n][w];
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, w;
    cin>>n>>w;

    vector<int> wt, val;

    for(int i=0; i<n; i++)
    {
      int x;
      cin>>x;
      val.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
      int x;
      cin>>x;
      wt.push_back(x);
    }

    cout<<UnboundedKnapsack(wt, val, n, w)<<"\n";
  }
  return 0;
}
