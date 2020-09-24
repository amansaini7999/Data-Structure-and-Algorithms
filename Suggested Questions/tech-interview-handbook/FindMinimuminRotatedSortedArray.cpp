#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr)
{
  if(arr.size()==0)
    return -1;

  int beg=0, end=arr.size()-1;
  while(beg<end)
  {
    int mid = (beg+end)/2;

    if(arr[mid]>arr[end])
      beg=mid+1;

    else if(arr[mid]<arr[end])
    {
      if(mid==0 || arr[mid]<arr[mid-1])
        return arr[mid];

      else
        end = mid-1;
    }
  }

  return arr[beg];
}

int main()
{
  int n;
  cin>>n;

  vector<int> v;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;

    v.push_back(x);
  }

  cout<<findMin(v)<<"\n";

  return 0;
}
