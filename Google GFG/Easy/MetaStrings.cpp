#include<bits/stdc++.h>
using namespace std;

bool check(string a, string b)
{
  if(a.size()!=b.size())
    return 0;

  else
  {
    int ct=0;
    vector<int> misMatch;
    for(int i=0; i<a.size(); i++)
    {
      if(a[i]!=b[i])
        misMatch.push_back(i);
    }
    if(misMatch.size()!=2)
      return 0;

    if(a[misMatch[0]]!=b[misMatch[1]] || a[misMatch[1]]!=b[misMatch[0]])
      return 0;
  }
  return 1;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
      string a, b;
      cin>>a>>b;

      if(check(a, b))
        cout<<1<<"\n";
      else
        cout<<0<<"\n";
  }
  return 0;
}
