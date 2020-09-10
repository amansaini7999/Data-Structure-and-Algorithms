#include<bits/stdc++.h>
using namespace std;

void bin(unsigned n)
{
  unsigned i;
  for(i=1<<13; i>0; i/=2)
    (n&i)?cout<<"1":cout<<"0";
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    bin(n);
    cout<<"\n";
  }
  return 0;
}
