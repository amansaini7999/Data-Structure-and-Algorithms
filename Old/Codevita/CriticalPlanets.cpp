#include<bits/stdc++.h>
using namespace std ;
#define int long long int

int n, m;
vector<vector<int>> adjacent(20005) ;

vector<bool> vis;
vector<int> tin, low ;
set<int> ans;
int timer;

void dfs(int v, int p = -1)
{
  vis[v] = true;
  tin[v] = low[v] = timer++;
  for (int to : adjacent[v])
  {
    if (to == p) continue;
    if (vis[to])
        low[v] = min(low[v], tin[to]);
    else
    {
      dfs(to, v);
      low[v] = min(low[v], low[to]);
      if (low[to] > tin[v])
        ans.insert(v), ans.insert(to);
    }
  }
}

signed main()
{
	cin>>m>>n;

  for(int i=0; i<m; i++)
	{
		int x, y;
		cin>>x>>y;
		adjacent[x].push_back(y);
		adjacent[y].push_back(x);
	}

  timer = 0;
  vis.assign(n, false);
  tin.assign(n, -1);
  low.assign(n, -1);
  for (int i = 0; i < n; ++i)
  {
    if (!vis[i])
      dfs(i);
  }

 int ct=0;
  if(ans.empty())
	 cout <<-1;
	else
  {
    auto it = ans.begin() ;
		for( ; it!=ans.end(); it++)
    {
      if(ct>0)
        cout<<endl;
      cout<<*it<<endl;
    }
	}

	return 0 ;
}
