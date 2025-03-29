#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int ct=0;
    while(n)
    {
      ct+=n&1;
      n>>=1;
    }
    cout<<ct<<"\n";
  }

  return 0;
}
