#include<bits/stdc++.h>
using namespace std;

int dp[11][51];

int eggDrop(int n, int k)
{
  if(k==0 || k==1)
    return k;

  if(n==1)
    return k;

  if(dp[n][k]!=-1)
    return dp[n][k];

  int mn=INT_MAX;

  for(int j=1; j<k; j++)
  {
    int temp = 1+ max(eggDrop(n-1, j-1), eggDrop(n, k-j));
    mn = min(temp, mn);
  }
  return dp[n][k]=mn;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, k;
    cin>>n>>k;

    memset(dp, -1, sizeof(dp));
    cout<<eggDrop(n, k)<<"\n";
  }
  return 0;
}
