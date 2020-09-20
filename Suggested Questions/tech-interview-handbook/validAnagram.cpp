#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
  map<char, int> mp;

  for(int i=0; i<s.size(); i++)
    mp[s[i]]++;

  for(int i=0; i<t.size(); i++)
    mp[t[i]]--;

  map<char, int> :: iterator itr;
  for(itr=mp.begin(); itr!=mp.end(); itr++)
  {
    if(itr->second!=0)
      return 0;
  }

  return 1;
}

int main()
{
  string s, t;
  cin>>s>>t;

  if(isAnagram(s, t))
    cout<<"true\n";
  else
    cout<<"false\n";

  return 0;
}
