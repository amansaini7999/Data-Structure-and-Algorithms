#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, k, i;
  cin>>t;

  for(int j=1; j<=t; j++)
  {
    cin>>n>>k;

    int arr[n], temp=k, count=0;

    for(i=0; i<n; i++)
      cin>>arr[i];

    for(i=0; i<n; i++)
    {
      if(arr[i]==k)
        temp=k-1;
      else if(arr[i]==temp && temp==1)
      {
        count++;
        temp=k;
      }
      else if(arr[i]==temp)
        temp--;
      else
        temp=k;
    }

    cout<<"Case #"<<j<<": "<<count<<"\n";
  }
}
