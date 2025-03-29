#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
  if(n==0)
    return 0;

  else if(n==1)
    return arr[n-1];

  
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

    cout<<maxSum(arr, n)<<"\n";
  }
  return 0;
}
