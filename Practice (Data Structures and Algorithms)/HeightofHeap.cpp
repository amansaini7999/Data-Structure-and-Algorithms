#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, temp;
    cin>>n;

    for(int i=0; i<n; i++)
    cin>>temp;

    cout<<ceil(log2(n+1))-1<<"\n";
  }
  return 0;
}
