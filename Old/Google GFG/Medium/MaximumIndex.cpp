#include<bits/stdc++.h>
using namespace std;

int result(int arr[], int n)
{
  int lMin[n], rMax[n];

  lMin[0] = arr[0];
  for(int i=1; i<n; i++)
    lMin[i] = min(arr[i], lMin[i-1]);

  rMax[n-1] = arr[n-1];
  for(int j=n-2; j>=0; j--)
    rMax[j] = max(arr[j], rMax[j+1]);

  int i=0, j=0;
  int maxIndex=-1;
  while(i<n && j<n)
  {
    if(lMin[i]<=rMax[j])
    {
      maxIndex = max(maxIndex, j-i);
      j=j+1;
    }
    else
      i=i+1;
  }
  return maxIndex;
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

    cout<<result(arr, n)<<"\n";
  }
  return 0;
}
