#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n, int k)
{
  map<int, int> mp;
  int sum=0;

  for(int i=0; i<n; i++)
  {
    mp[arr[i]%k]++;
    sum+=arr[i];
  }

  if(sum==0 || n==0)
    return 1;

  if(sum%k!=0 || n%2!=0)
    return 0;

  for(int i=0; i<n; i++)
  {
    int temp = arr[i]%k;
    if(mp[temp])
    {
      if(!mp[(k-temp)%k])
        return 0;

      mp[temp]--;
      mp[(k-temp)%k]--;
    }
  }
  return 1;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
      cin>>arr[i];

    int k;
    cin>>k;

    if(check(arr, n, k))
      cout<<"True\n";
    else
      cout<<"False\n";
  }

  return 0;
}
