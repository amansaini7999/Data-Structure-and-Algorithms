#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

bool check(int arr[], int sum, int n)
{
    if(sum==0)
      return 1;
    else if(n==0)
      return 0;

    if(dp[n][sum] != -1)
      return dp[n][sum];

    if(arr[n-1]<=sum)
      return dp[n][sum] = (check(arr, sum-arr[n-1], n-1) || check(arr, sum, n-1));

    else
      return dp[n][sum] = check(arr, sum, n-1);
}

int main()
{
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];

  int sum;
  cin>>sum;

  if(check(arr, sum, n))
    cout<<"True"<<"\n";
  else
    cout<<"False"<<"\n";
  return 0;
}
