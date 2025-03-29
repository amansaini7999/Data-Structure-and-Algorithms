#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, i, sum=0, max=INT_MIN, index=-1;
  cin>>n>>k;

  int arr[n];

  for(i=0; i<n; i++)
    cin>>arr[i];

  while(k--)
  {
    max=INT_MIN, index=-1;
    for(i=0; i<n; i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
        index=i;
      }
    }
    sum+=max%1000000009;
    arr[index]=floor(max/2);
  }
  cout<<sum;
}
