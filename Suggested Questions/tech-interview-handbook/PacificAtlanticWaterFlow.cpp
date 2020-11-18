#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix)
{
  vector<vector<int>> ans;
  

  return ans;
}

int main()
{
  int m, n;
  cin>>m>>n;

  vector<vector<int>> matrix;
  for(int i=0; i<m; i++)
  {
    vector<int> temp;
    for(int j=0; j<n; j++)
    {
      int x;
      cin>>x;
      temp.push_back(x);
    }
    matrix.push_back(temp);
  }

  vector<vector<int>> ans;
  ans = pacificAtlantic(matrix);

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
