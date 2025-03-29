#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, arr[3]={0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
      int x;
      cin>>x;

      arr[x]++;
    }

    while(arr[0]--)
    {
      cout<<0<<" ";
    }

    while(arr[1]--)
    {
      cout<<1<<" ";
    }

    while(arr[2]--)
    {
      cout<<2<<" ";
    }

    cout<<"\n";
  }
  return 0;
}
