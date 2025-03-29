#include<bits/stdc++.h>
using namespace std;

int reverse(int num)
{
  int n=0;
  while(num)
  {
    int rem = num%10;
    num=num/10;
    n=n*10+rem;
  }
  return n;
}

int main()
{
  int x;
  cin>>x;
  cout<<reverse(x);

  return 0;
}
