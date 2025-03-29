#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin>>str;

  map<char, int> mp;

  for(int i=0; i<str.size(); i++)
    mp[str[i]]++;

  int ct=0;
  for(int i=0; i<mp.size(); i++)
  {
    if(mp[i]==1)
      ct++;
  }

  cout<<ct<<"\n";
  return 0;
}
