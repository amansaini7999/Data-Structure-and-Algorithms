#include<bits/stdc++.h>
using namespace std;

int sum(int m)
{
  int s=0;
  while(m)
  {
    s+=m%10;
    m=m/10;
  }

  return s;
}

int main()
{
  int n, q;
  cin>>n>>q;

  int arr[n], sd[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    sd[i] = sum(arr[i]);
  }

  int hash[n]={0};
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<=n; j++)
    {
      if(j==n)
      {
        hash[i] = -1;
      }
      else if(arr[i]<arr[j] && sd[i]>sd[j])
      {
        hash[i] = j+1;
        break;
      }
    }
  }

  while(q--)
  {
    int query;
    cin>>query;
    cout<<hash[query-1]<<"\n";
  }

  return 0;
}
