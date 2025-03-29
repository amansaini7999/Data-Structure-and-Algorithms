#include<bits/stdc++.h>
using namespace std;

/*int lis(vector<int> nums, int n, int var)
{
  if(n==0)
    return 0;

  else if(nums[n-1]<var)
    return max(1+lis(nums, n-1, nums[n-1]), lis(nums, n-1, nums[n-1]));

  else
    return 0;
}*/

int lengthOfLIS(vector<int>& nums)
{
  //return lis(nums, nums.size(), INT_MAX);

  int l=0, mx=0;
  for(int i=1; i<nums.size(); i++)
  {
    if(nums[i-1]<nums[i])
      l++;
    else
      l=0;

    mx = max(mx, l);
  }
  return mx;
}

int main()
{
  int n;
  cin>>n;

  int x;
  vector<int> nums;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    nums.push_back(x);
  }
  cout<<lengthOfLIS(nums)<<"\n";
  return 0;
}
