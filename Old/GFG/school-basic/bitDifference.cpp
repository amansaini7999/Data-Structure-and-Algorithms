#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int a, b;
    cin>>a>>b;

    unsigned int c = a^b;

    int ct=0;
    while(c)
    {
      ct+=c&1;
      c>>=1;
    }
    cout<<ct<<"\n";
  }

  return 0;
}
