#include<bits/stdc++.h>
using namespace std;

int getLongestArithmetic(int arr[], int n)
{
  if(n<2)
    return 0;

  else if(n==2)
    return n;

  int dif=arr[1]-arr[0];
  int mx=INT_MIN;
  int ct=0;
  for(int i=1; i<n; i++)
  {
    if(arr[i]-arr[i-1]==dif)
      ct++;
    else
    {
      ct=1;
      dif = arr[i]-arr[i-1];
    }
    mx = max(mx, ct);
  }
  return mx+1;
}

int main()
{
  int t;
  cin>>t;

  for(int i=1; i<=t; i++)
  {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
      cin>>arr[i];

    cout<<"Case #"<<i<<": "<<getLongestArithmetic(arr, n)<<"\n";
  }
  return 0;
}
