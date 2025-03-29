#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, count=0;
    cin>>n;

    while(n!=1)
    {
      if(n%2!=0)
      {
        count+=(n-1)/2;
        n=((n-1)/2)+1;
      }
      else
      {
          count+=n/2;
          n=n/2;
      }
    }
    cout<<count<<"\n";
  }
}
