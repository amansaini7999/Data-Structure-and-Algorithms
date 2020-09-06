#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[10];
  for(int i=0; i<8; i++)
    cin>>arr[i];

  int d;
  cin>>d;

  arr[-1] = 0;
  arr[8] = 0;

  int a[10];
  a[-1] = 0;
  a[8] = 0;

  while(d--)
  {
    for(int i=0; i<8; i++)
    {
      int prev = arr[i-1];
      int next = arr[i+1];

      if(prev == next)
        a[i] = 0;

      else
        a[i] = 1;
    }

    for(int i=-1; i<=8; i++)
      arr[i] = a[i];
  }

  for(int i=0; i<8; i++)
    cout<<arr[i]<<" ";

  return 0;
}
