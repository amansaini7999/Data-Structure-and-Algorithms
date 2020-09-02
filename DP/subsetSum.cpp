#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

bool check(int arr[], int sum, int n)
{
    for(int j=0; j<sum; j++)
      dp[0][j] = 0;

    for(int i=0; i<n; i++)
      dp[i][0] = 1;

    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=sum; j++)
      {
        if(arr[i-1]<=j)
          dp[i][j] = (dp[i-1][j-arr[i-1]] || dp[i-1][j]);
        else
          dp[i][j] = dp[i-1][j];
      }
    }
  return dp[n][sum];
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
