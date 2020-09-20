#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    long long int x, y, k;
    cin>>x>>y>>k;

    long long int stick=(y*k + k);
    long long int steps = ceil(double(stick-1)/(x-1));
    steps+=k;
    cout<<steps<<"\n";
  }

  return 0;
}
