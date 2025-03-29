#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> ans){
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++)
      cout<<ans[i][j]<<" ";
    cout<<"\n";
  }
  return;
}

bool solveMazeUtil(vector<vector<int>> arr, int x, int y, vector<vector<int>>& ans){

  if(x==arr.size()-1 && y==arr.size()-1){
    ans[x][y]=1;
    return true;
  }

  if(x>=0 && y>=0 && x<ans.size() && y<ans.size() && arr[x][y]==1){

    // Do
    if(ans[x][y]==1)
      return false;

    ans[x][y]=1;

    // Recurse
    if(solveMazeUtil(arr, x, y-1, ans))
      return true;

    if(solveMazeUtil(arr, x, y+1, ans))
      return true;

    if(solveMazeUtil(arr, x-1, y, ans))
      return true;

    if(solveMazeUtil(arr, x+1, y, ans))
      return true;

    if(solveMazeUtil(arr, x-1, y-1, ans))
      return true;

    if(solveMazeUtil(arr, x-1, y+1, ans))
      return true;

    if(solveMazeUtil(arr, x+1, y-1, ans))
      return true;

    if(solveMazeUtil(arr, x+1, y+1, ans))
      return true;

    // Undo
    ans[x][y]=0;
  }

  return false;
}

void solveMaze(vector<vector<int>> arr){
  vector<vector<int>> ans{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

  if(!solveMazeUtil(arr, 0, 0, ans)){
    cout<<"Tumse na ho paayega\n";
    return;
  }

  print(ans);
  return;
}

int main()
{
  vector<vector<int>> arr{{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 0, 0}, {1, 1, 1, 1}};

  solveMaze(arr);

  return 0;
}
