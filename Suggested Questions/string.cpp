#include<bits/stdc++.h>
using namespace std;

int solve(int n, int d, int s)
{
  int count=0, i;
  int len=to_string(s).length();

  for(i=s; i<=n; i+=pow(10, len))
  {
    int flag=0;
    int j=i;
    while(j)
    {
      int rem=j%10;
      j=j/10;
      if(rem<=d)
        flag=1;
      else
      {
        flag=0;
        break;
      }
    }
    if(flag==1)
      count++;
  }
  return count;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, d, s;
    cin>>n>>d>>s;
    int ct=solve(n, d, s);
    cout<<ct<<"\n";
  }
  return 0;
}
