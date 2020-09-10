#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
  int a=1, b=arr[0];

  for(int i=1; i<n; i++)
  {
      a=a^(i+1);
  }

  for(int i=1; i<n-1; i++)
  {
    b=b^arr[i];
  }

  return(a^b);
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n-1];
    for(int i=0; i<n-1; i++)
      cin>>arr[i];

    cout<<missingNumber(arr, n)<<"\n";
  }

  return 0;
}
