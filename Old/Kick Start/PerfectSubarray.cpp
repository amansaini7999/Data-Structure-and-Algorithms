#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, i, j, k, z, t;
  cin>>t;

  for(z=1; z<=t; z++)
  {
    cin>>n;

    int arr[n];

    for(i=0; i<n; i++)
      cin>>arr[i];

    int count=0;

    for(j=0; j<n; j++)
    {
      int sum=0;
      for(i=j; i<n; i++)
      {
        sum+=arr[i];
        if(floor(sqrt(sum))*floor(sqrt(sum)) == sum)
          count++;
      }
    }
    cout<<"Case #"<<z<<": "<<count<<"\n";
  }
  return 0;
}
