#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
  adj[u].push_back(v);
  // adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int N){
  for(int i=0; i<N; i++){
    for(int j=0; j<adj[i].size(); j++)
      cout<<"--->"<<adj[i][j];
    cout<<"\n";
  }
}

void BFS(vector<int> adj[], int N){
  int visited[N]={0};

  queue<int> q;
  q.push(0);
  visited[0]=1;

  while(!q.empty()){
    int s = q.front();
    cout<<s<<" ";
    q.pop();

    for(auto itr:adj[s]){
      if(!visited[itr]){
        q.push(itr);
        visited[itr]=1;
      }
    }
  }
}

void DFSHelp(vector<int> adj[], int N, int visited[], int s){
  visited[s]=1;
  cout<<s<<" ";

  for(auto itr: adj[s]){
    if(!visited[itr])
      DFSHelp(adj, N, visited, itr);
  }
}

void DFS(vector<int> adj[], int N){
  int visited[N] = {0};
  DFSHelp(adj, N, visited, 0);
}

int main()
{
  int N = 5;
  vector<int> adj[N];

  addEdge(adj, 0, 1);
  addEdge(adj, 0, 4);
  addEdge(adj, 1, 2);
  addEdge(adj, 2, 0);
  addEdge(adj, 2, 3);

  cout<<"\nAdjacency List\n";
  printGraph(adj, N);

  cout<<"BFS\n";
  BFS(adj, N);

  cout<<"\n\nDFS\n";
  DFS(adj, N);

  cout<<"\n";

  return 0;
}
