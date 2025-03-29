#include<bits/stdc++.h>
using namespace std;

string minWindow(string s, string t)
{
  int hash_t[256]={0}, hash_s[256]={0};

  if(t.size()>s.size())
    return "";

  for(int i=0; i<t.size(); i++)
    hash_t[t[i]]++;

  int start=0, start_index=-1, min=INT_MAX, count=0;
  for(int i=0; i<s.size(); i++)
  {
    hash_s[s[i]]++;

    if(hash_s[s[i]]!=0 && hash_s[s[i]]<=hash_t[s[i]])
      count++;

    if(count==t.size())
    {
      while(hash_s[s[start]]>hash_t[s[start]] || hash_t[s[start]]==0)
      {
        if(hash_s[s[start]]>hash_t[s[start]])
          hash_s[s[start]]--;
        start++;
      }

      int len = i-start+1;
      if(min>len)
      {
        min=len;
        start_index=start;
      }
    }
  }

  if(start_index==-1)
    return "";

  return s.substr(start_index, min);
}

int main()
{
  string s, t;
  cin>>s>>t;

  cout<<minWindow(s, t)<<"\n";
  return 0;
}
