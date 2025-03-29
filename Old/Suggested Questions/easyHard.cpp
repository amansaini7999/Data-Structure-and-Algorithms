#include<bits/stdc++.h>
using namespace std;

int getMaxprofit(int a[], int b[], int n)
{
  if(n==0)
    return 0;

  return max(max(a[n-1]+getMaxprofit(a, b, n-1), b[n-1]+getMaxprofit(a, b, n-1)), getMaxprofit(a, b, n-1));
}

int main()
{
  int n;
  cin>>n;

  int a[n], b[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i]>>b[i];
  }

  cout<<getMaxprofit(a, b, n);

  return 0;
}
