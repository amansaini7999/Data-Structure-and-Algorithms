#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
{
  int prod=1;
  vector<int> ans;
  for(int i=0; i<nums.size(); i++)
    ans.push_back(1);
    
  for(int i=0; i<nums.size(); i++)
  {
    ans[i] = ans[i]*prod;
    prod = prod*nums[i];
  }

  prod=1;
  for(int i=nums.size()-1; i>=0; i--)
  {
    ans[i] = ans[i]*prod;
    prod = prod*nums[i];
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

  vector<int> ans;
  ans = productExceptSelf(v);

  for(auto i:ans)
      cout<<i<<" ";
  cout<<"\n";
  return 0;
}
