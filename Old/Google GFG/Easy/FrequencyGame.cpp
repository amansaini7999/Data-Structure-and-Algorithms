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

    vector<int> v;
    int x;

    for(int i=0; i<n; i++)
    {
      cin>>x;
      v.push_back(x);
    }

    map<int, int> mp;

    for(int i=0; i<n; i++)
      mp[v[i]]++;

    int min=INT_MAX;
    map<int, int> :: iterator itr;

    for(itr=mp.begin(); itr!=mp.end(); itr++)
    {
      if(itr->second<min)
        min=itr->second;
    }

    int max=INT_MIN;
    for(itr=mp.begin(); itr!=mp.end(); itr++)
    {
      if(itr->second==min)
      {
        if(itr->first>max)
          max=itr->first;
      }
    }
    cout<<max<<"\n";
  }
  return 0;
}
