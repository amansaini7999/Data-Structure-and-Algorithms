#include<bits/stdc++.h>
using namespace std;

int countBits(unsigned int n)
{
  int flag=0, ct=0;
  for(unsigned int i=1<<31; i>0; i/=2)
  {
    if(flag)
      ct++;
    else if(n&i)
      flag=1;
  }
  return ct;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, k;
    cin>>n>>k;
    int ct = countBits(n);
    k = ct-k+1;
    n = n&(~(1<<k));
    cout<<n<<"\n";
  }

  return 0;
}
