#include<bits/stdc++.h>
using namespace std;

int getMaxarea(int arr[], int l, int r)
{
  if(l>r)
    return INT_MIN;

  if(l==r)
    return arr[l];

  int minIndex = min_element(arr+l, arr+r)-arr;

  return max(max(getMaxarea(arr, l, minIndex-1), getMaxarea(arr, minIndex+1, r)), (r-l+1)*arr[minIndex]);
}

int main()
{
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];

  cout<<getMaxarea(arr, 0, n-1)<<"\n";

  return 0;
}
