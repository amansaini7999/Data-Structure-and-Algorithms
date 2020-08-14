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

    int x;
    map<int, int> mp;
    for(int i=0; i<2*n+2; i++)
    {
      cin>>x;
      mp[x]++;
    }

    map<int, int> :: iterator itr;

    for(itr=mp.begin(); itr!=mp.end(); itr++)
    {
      if(itr->second==1)
        cout<<itr->first<<" ";
    }

    cout<<"\n";
  }
  return 0;
}
