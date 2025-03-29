#include<bits/stdc++.h>
using namespace std;

int result(long long arr[], set<long long> s, long long n, long long k)
{
  int cntPair = 0 ;
  for(int i=0 ; i<n; i++)
  {
    s.erase(arr[i]);
    auto itr = s.lower_bound(arr[i]);

    if(itr!=s.end() && *itr>=arr[i]-k && *itr<=arr[i]+k)
    {
      cntPair++;
      s.insert(arr[i]);
      continue;
    }
    itr--;
    if(itr!=s.end() && *itr>=arr[i]-k && *itr<=arr[i]+k)
      cntPair++;

    s.insert(arr[i]);
  }
  return cntPair;
}

int main()
{
  long long n , k;
  cin>>n>>k;
  set<long long> s;
  long long arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
    s.insert(arr[i]);
  }

  cout<<result(arr, s, n, k);

  return 0;
}
