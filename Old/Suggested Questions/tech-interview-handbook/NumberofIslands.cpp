#include<bits/stdc++.h>
using namespace std;

int numIslands(vector<vector<char>>& grid)
{
  stack<pair<int, int>> st;

  bool visited[grid.size()][grid[0].size()];
  memset(visited, 0, sizeof(visited));

  int count=0;

  for(int row=0; row<grid.size(); row++)
  {
    for(int col=0; col<grid[row].size(); col++)
    {
      if(grid[row][col]=='1' && !visited[row][col])
      {
        st.push({row, col});

        while(!st.empty())
        {
          int i = st.top().first;
          int j = st.top().second;
          st.pop();

          if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || visited[i][j] || grid[i][j]!='1')
            continue;

          visited[i][j]=true;

          st.push({i-1, j-1});
          st.push({i-1, j});
          st.push({i-1, j+1});
          st.push({i, j-1});
          st.push({i, j+1});
          st.push({i-1, j-1});
          st.push({i+1, j});
          st.push({i-1, j+1});
        }
        count++;
      }
    }
  }
  return count;
}

int main()
{
  int n, m;
  cin>>n>>m;

  vector<vector<char>> v;
  for(int i=0; i<n; i++)
  {
    vector<char> temp;
    for(int j=0; j<m; j++)
    {
      char x;
      cin>>x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }

  cout<<numIslands(v)<<"\n";

  return 0;
}
