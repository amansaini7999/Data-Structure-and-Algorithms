#include<bits/stdc++.h>
using namespace std;

int getEquilibrium(int arr[], int n)
{
  int sum=0;
  for(int i=0; i<n; i++)
    sum+=arr[i];

  int lSum=0;
  for(int i=0; i<n; i++)
  {
    sum-=arr[i];

    if(sum==lSum)
      return i+1;

    lSum+=arr[i];
  }
  return -1;
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

    cout<<getEquilibrium(arr, n)<<"\n";
  }

  return 0;
}
