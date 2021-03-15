#include<bits/stdc++.h>
using namespace std;

// { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
//   { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
//   { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
//   { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
//   { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
//   { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
//   { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
//   { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
//   { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

int minimum(int dist[], int visited[], int n){
  int min=INT_MAX;
  int min_index;

  for(int i=0; i<n; i++){
    if(visited[i]==0 && dist[i]<=min){
      min = dist[i];
      min_index = i;
    }
  }
  return min_index;
}

void print(int dist[], int n){
  for(int i=0; i<n; i++)
    cout<<dist[i]<<" ";
  cout<<"\n";
}

void dijkistra(vector<vector<int>> arr, int src){
  int n = arr.size();
  int dist[n];
  int visited[n] = {0};

  for(int i=0; i<n; i++)
    dist[i] = INT_MAX;

  dist[src]=0;

  for(int count=0; count<=n-1; count++){
    int u = minimum(dist, visited, n);
    visited[u]=1;

    for(int v=0; v<=n-1; v++){
      if(visited[v]==0 && arr[u][v] && dist[u]!=INT_MAX && dist[u]+arr[u][v]<dist[v])
        dist[v] = dist[u]+arr[u][v];
    }
  }

  print(dist, n);

  return;
}

int main()
{
  vector<vector<int>> arr { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
  dijkistra(arr, 0);
  return 0;
}
