#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &v, int i, int j){
  v[i][j] = 1;
  v[j][i] = 1;
}

void showMatrix(vector<vector<int>> v){
  for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[i].size(); j++)
      cout<<v[i][j]<<" ";
    cout<<"\n";
  }
}

int main()
{
  vector<vector<int>> v {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  addEdge(v, 0, 1);
  addEdge(v, 0, 2);

  showMatrix(v);

  return 0;
}
