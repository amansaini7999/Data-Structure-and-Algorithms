#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++)
    cin>>arr[i];

  int i=0, ct=0;
  while(i+arr[i]<n)
  {
    i+=arr[i]+1;
    ct++;
  }
  ct++;

  cout<<n-ct+arr[i]-(n-i-1);

  return 0;
}
