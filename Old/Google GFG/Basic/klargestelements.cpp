#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;

  cin>>t;
  while(t--)
  {
    int n, k;
    cin>>n;
    cin>>k;

    vector<int> v;

    int x;
    for(int i=0; i<n; i++)
    {
      cin>>x;
      v.push_back(x);
    }

    /*sort(v.begin(), v.end(), greater<>());

    for(int i=0; i<k; i++)
      cout<<v[i]<<" ";*/

    sort(v.begin(), v.end());

    for(int i=n-1; i>n-k-1; i--)
      cout<<v[i]<<" ";

    cout<<"\n";
  }
  return 0;
}
