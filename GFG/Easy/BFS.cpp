// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}// } Driver Code Ends


/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/
vector <int> bfs(vector<int> g[], int N) {
    // Your code
    vector<int> v;
    map<int, int> mp;

    queue<int> q;
    q.push(0);

    while(!q.empty())
    {
      int frt = q.front();
      q.pop();
      v.push_back(frt);
      mp[frt]++;

      for(int i=0; i<g[frt].size(); i++)
      {
        if(!mp[g[frt][i]])
        {
          mp[g[frt][i]]++;
          q.push(g[frt][i]);
        }
      }
    }
  return v;
}
