#include<bits/stdc++.h>
using namespace std;

vector<int> commonElements(int a[], int b[], int c[], int n1, int n2, int n3)
{
  map<int, int> mp;

  for(int i=0; i<n1; i++)
    mp.insert(pair<int, int> (a[i], 1));

  for(int i=0; i<n2; i++)
    if(mp[b[i]])
      mp[b[i]] = 2;

  for(int i=0; i<n3; i++)
    if(mp[c[i]]==2)
      mp[c[i]] = 3;

  vector<int> v;
  map<int, int> :: iterator itr;

  for(itr=mp.begin(); itr!=mp.end(); itr++)
  {
    if(itr->second == 3)
      v.push_back(itr->first);
  }
  return v;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    int a[n1], b[n2], c[n3];

    for(int i=0; i<n1; i++)
      cin>>a[i];

    for(int i=0; i<n2; i++)
      cin>>b[i];

    for(int i=0; i<n3; i++)
      cin>>c[i];

    vector<int> v = commonElements(a, b, c, n1, n2, n3);

    if(v.size()==0)
        cout<<-1;

    for(int i=0; i<v.size(); i++)
      cout<<v[i]<<" ";

    cout<<"\n";
  }
  return 0;
}
