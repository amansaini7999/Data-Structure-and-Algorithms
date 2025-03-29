#include<bits/stdc++.h>
using namespace std;

int dp[1001][2][3];

int CountString(int n, int b, int c)
{
  if(b<0 || c<0)
    return 0;

  else if(n==0)
    return 1;

  else if(b==0 && c==0)
    return 1;

  else if(dp[n][b][c]!=-1)
    return dp[n][b][c];

  else
    return dp[n][b][c] = CountString(n-1, b-1, c)+CountString(n-1, b, c-1)+CountString(n-1, b, c);
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<CountString(n, 1, 2)<<"\n";
  }
  return 0;
}
