#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
  if(n==0)
    return;

  cout<<arr[n-1]<<" ";

  solve(arr, n-1);
}

int main()
{
  int arr[] = {0, 1};

  solve(arr, 2);
  return 0;
}
