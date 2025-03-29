#include<bits/stdc++.h>
using namespace std;

int  getMinPasteCount(string s, string substr, map<char,int> mp)
{
  int cnt=0;
  vector<char> v;
  vector<char> :: iterator itr;

  for(int i=0; i<(int)s.size(); i++)
  {
    itr = find(v.begin(), v.end(), s[i]);
    int x=-1;

    if (itr!=v.end())
    {
        x = itr-v.begin();
        v.erase(v.begin() + x);
    }

    if(mp[s[i]]>0 && v.size()==0 && x==-1)
    {
      cnt++;
      for(int j=0;j<(int)substr.size();j++)
      		v.push_back(substr[j]);
      itr = find (v.begin(), v.end(), s[i]);
      if (itr != v.end())
      {
        x = itr - v.begin();
        v.erase(v.begin() + x );
      }
    }
  }
  return cnt;
}

int main()
{
  string s,substr;
  getline(cin,s);
  cin>>substr;

  map<char,int> mp;

  for(int i=0; i<(int)substr.size(); i++)
  	mp[substr[i]]++;

  int minCount = getMinPasteCount(s, substr, mp);
  cout<<minCount;

  return 0;
}
