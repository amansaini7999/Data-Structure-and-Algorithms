#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    if(n==0)
      cout<<n<<"\n";

    else
      cout<<log2(n&-n)+1<<"\n";
  }

  return 0;
}
