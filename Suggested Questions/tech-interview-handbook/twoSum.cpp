#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> v, int target)
{
  map<int, int> mp;
  for(int i=0; i<v.size(); i++)
    mp.insert(pair<int, int> (v[i], i+1));

  vector<int> ans;
  for(int i=0; i<v.size(); i++)
  {
    if(mp[(target-v[i])] && i!=(mp[(target-v[i])]-1))
    {
      ans.push_back(i);
      ans.push_back(mp[(target-v[i])]-1);

      return ans;
    }
  }

  ans.push_back(-1);
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

  int target;
  cin>>target;

  vector<int> ans;
  ans = twoSum(v, target);
  for(auto i: ans)
    cout<<i<<" ";
}
