#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target)
{
  int pivot=-1;

  int low = 0;
  int high = nums.size()-1;
  int mid=low;

  while(low<high)
  {
    mid = (low+high)/2;

    if(nums[mid]>nums[mid+1])
      low=mid+1;
    else
      high=mid-1;
  }
  pivot = low;

  if(target<nums[pivot])
  {
    low = 0;
    high = pivot-1;
  }
  else
  {
    low = pivot;
    high = nums.size()-1;
  }

  while(low<=high)
  {
    mid=(low+high)/2;

    if(nums[mid]==target)
      return mid;

    else if(nums[mid]>target)
      high = mid-1;

    else
      low = mid+1;
  }

  return -1;
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

  int target;
  cin>>target;

  int index = search(v, target);
  cout<<index<<"\n";

  return 0;
}
