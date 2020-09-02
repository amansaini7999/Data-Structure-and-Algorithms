#include<bits/stdc++.h>
using namespace std;

int dp[41][41];

int lps(string a, string b, int n, int m)
{
    if(n==0 || m==0)
      return 0;

    else if(dp[n][m]!=-1)
      return dp[n][m];

    else if(a[n-1]==b[m-1])
      return dp[n][m] = 1+lps(a, b, n-1, m-1);

    else
      return dp[n][m] = max(lps(a, b, n-1, m), lps(a, b, n, m-1));
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string s;
    cin>>s;

    string rev = string(s.rbegin(), s.rend());

    memset(dp, -1, sizeof(dp));
    int  ct = lps(s, rev, s.size(), rev.size());
    cout<<s.size()-ct<<"\n";
  }
  return 0;
}
