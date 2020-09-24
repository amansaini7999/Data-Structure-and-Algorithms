#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
  //vector<vector<int>> ans;
  //if(nums.size()<3)
  //  return ans;

  set<vector<int>> st;
  sort(nums.begin(), nums.end());

  for(int i=0; i<nums.size(); i++)
  {
    int l=i+1;
    int r=nums.size()-1;
    int x=nums[i];

    vector<int> temp;
    while(l<r)
    {
      if(x+nums[l]+nums[r]==0)
      {
        temp.push_back(x);
        temp.push_back(nums[l]);
        temp.push_back(nums[r]);
        l++;
        r--;
        sort(temp.begin(), temp.end());
        st.insert(temp);
        temp.clear();
      }

      else if(x+nums[l]+nums[r]<0)
        l++;

      else
        r--;
    }
  }

  vector<vector<int>> ans(st.begin(), st.end());
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

  vector<vector<int>> ans;
  ans = threeSum(v);

  for(int i=0; i<ans.size(); i++)
  {
    for(int j=0; j<ans[i].size(); j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<"\n";
  }

  return 0;
}
