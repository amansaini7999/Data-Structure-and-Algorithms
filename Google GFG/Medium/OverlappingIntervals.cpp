#include<bits/stdc++.h>
using namespace std;

struct interval
{
  int s, e;
};

bool comp(interval a, interval b)
{
  return a.s<b.s;
}

void mergeOverlapping(interval arr[], int n)
{
  sort(arr, arr+n, comp);

  int index=0;

  for(int i=1; i<n; i++)
  {
    if(arr[index].e >= arr[i].s)
    {
      arr[index].e = max(arr[i].e, arr[index].e);
      arr[index].s = min(arr[i].s, arr[index].s);
    }
    else
    {
      index++;
      arr[index] = arr[i];
    }
  }

  for(int i=0; i<index+1; i++)
    cout<<arr[i].s<<" "<<arr[i].e<<" ";
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    interval arr[n];
    for(int i=0; i<n; i++)
    {
      int x, y;
      cin>>x>>y;

      arr[i].s = x;
      arr[i].e = y;
    }

    mergeOverlapping(arr, n);
  }
  return 0;
}
