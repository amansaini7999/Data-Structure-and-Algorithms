#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
  map<int, int> mp;
  for(int i=0; i<nums.size(); i++)
  {
    mp[nums[i]]++;
    if(mp[nums[i]]>1)
      return 1;
  }
  return 0;
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

  if(containsDuplicate(v))
    cout<<"true\n";
  else
    cout<<"false\n";

  return 0;
}
