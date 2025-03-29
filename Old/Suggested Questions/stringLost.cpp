#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2;
  cin>>s1>>s2;

  map<char, int> mp;

  for(int i=0; i<s1.size(); i++)
  mp[s1[i]]++;

  for(int i=0; i<s2.size(); i++)
  mp[s2[i]]--;


  map<char, int> :: iterator itr;

  for(itr=mp.begin(); itr!=mp.end(); itr++)
    if(itr->second>0)
      cout<<itr->first<<"\n";

  return 0;
}
