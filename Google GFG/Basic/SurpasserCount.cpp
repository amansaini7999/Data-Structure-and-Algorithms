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

    for(int i=0; i<n; i++)
    {
      int surpassCount=0;
      for(int j=i+1; j<n; j++)
      {
        if(v[i]<v[j])
          surpassCount++;
      }
      cout<<surpassCount<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
