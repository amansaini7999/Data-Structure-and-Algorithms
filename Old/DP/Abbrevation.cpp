#include<bits/stdc++.h>
using namespace std;

bool solve(string a, string b, int n, int m)
{
  if(m==0)
    return 1;

  else if(n==0)
    return 0;

  else if(a[n-1]==b[m-1] || toupper(a[n-1])==b[m-1])
    return solve(a, b, n-1, m-1);

  else
    return solve(a, b, n-1, m);
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string a, b;

    cin>>a>>b;

    if(solve(a, b, a.size(), b.size()))
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }

  return 0;
}
