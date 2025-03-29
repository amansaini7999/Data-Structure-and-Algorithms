#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, s;
    cin>>n>>s;

    vector<int> v;

    int x;
    for(int i=0; i<n; i++)
    {
      cin>>x;
      v.push_back(x);
    }

    int l=0, r=n-1, flag=0;

    sort(v.begin(), v.end());
    while(l<r)
    {
      if((v[l]+v[r])==s)
      {
        cout<<"Yes\n";
        flag=1;
        break;
      }
      else if((v[l]+v[r])<s)
        l++;
      else
        r--;
    }
    if(flag==0)
      cout<<"No\n";
  }
  return 0;
}
