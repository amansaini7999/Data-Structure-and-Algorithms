#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll p = 1e9+7;
ll arr[1001][801];

void ncr(ll n, ll r)
{

  memset(arr, 0, size(arr));
  for(ll i=0; i<=n; i++)
      arr[i][0] = 1;

  for(ll i=1; i<=n; i++)
    for(ll j=1; j<=r; j++)
      arr[i][j] = (arr[i-1][j-1]%p + arr[i-1][j]%p)%p;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    ll n, r;
    cin>>n>>r;

    //ll arr[n+1][r+1];
    ncr(n, r);//, arr);

    cout<<arr[n][r]<<"\n";
  }
  return 0;
}
