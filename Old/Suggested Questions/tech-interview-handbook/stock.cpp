#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& nums)
{
  if(nums.size()==0)
    return 0;

  int mx=0, min=99999, ans=0;
  for(int i=0; i<nums.size(); i++)
  {
    if(nums[i]<min)
    {
      min = nums[i];
      mx = nums[i];
    }

    if(mx<nums[i])
      mx = nums[i];

    ans = max(ans, mx-min);
  }

  return ans;
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

  cout<<maxProfit(v)<<"\n";

  return 0;
}
