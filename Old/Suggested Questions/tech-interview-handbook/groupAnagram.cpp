#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
  vector<vector<string>> ans;
  if(strs.size()==0)
    return ans;

  vector<pair<string, int>> v;

  for(int i=0; i<strs.size(); i++)
    v.push_back(make_pair(strs[i], i));

  for(int i=0; i<v.size(); i++)
    sort(v[i].first.begin(), v[i].first.end());

  sort(v.begin(), v.end());

  vector<string> temp;
  temp.push_back(strs[v[0].second]);
  for(int i=1; i<v.size(); i++)
  {
    if(v[i-1].first == v[i].first)
      temp.push_back(strs[v[i].second]);

    else
    {
      ans.push_back(temp);
      temp.clear();
      temp.push_back(strs[v[i].second]);
    }
  }
  ans.push_back(temp);

  return ans;
}

int main()
{
  int n;
  cin>>n;

  vector<string> v;
  for(int i=0; i<n; i++)
  {
    string x;
    cin>>x;

    v.push_back(x);
  }

  vector<vector<string>> ans;
  ans = groupAnagrams(v);

  for(int i=0; i<ans.size(); i++)
  {
    for(int j=0; j<ans[i].size(); j++)
      cout<<ans[i][j]<<" ";
    cout<<"\n";
  }

  return 0;
}
