#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& board){
  for(int i=0; i<board.size(); i++){
    for(int j=0; j<board[i].size(); j++)
      cout<<board[i][j]<<" ";
    cout<<"\n";
  }
  return;
}

bool isSafe(vector<vector<int>>& board, int x, int y){

  for(int i=0; i<board.size(); i++){
    if(board[x][i]==1)
      return false;
  }
  for(int i=0; i<board.size(); i++){
    if(board[i][y]==1)
      return false;
  }
  int m=x-1;
  int n=y-1;
  while(m>=0 && n>=0){
    if(board[m][n]==1){
      return false;
    }

    m--;
    n--;
  }
  m=x-1;
  n=y+1;
  while(m>=0 && n<=board.size()){
    if(board[m][n]==1)
      return false;
    m--;
    n++;
  }

  return true;
}

void fill(vector<vector<int>>& board, int x, int y, int numberOfQueens){
  if(numberOfQueens==board.size()){
    print(board);
    cout<<"\n";
    return;
  }

  if(y==board.size()){
    x++;
    y=0;
  }

  if(x==board.size()){
    return;
  }

  if(isSafe(board, x, y)){
    //do
    board[x][y]=1;

    //recur
    fill(board, x, y+1, numberOfQueens+1);

    //undo
    board[x][y]=0;
  }

  fill(board, x, y+1, numberOfQueens);
}

int main()
{
  vector<vector<int>> board {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  fill(board, 0, 0, 0);
  return 0;
}
