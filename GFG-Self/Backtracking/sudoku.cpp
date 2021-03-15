#include<bits/stdc++.h>
using namespace std;

// int grid[N][N] = {    { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
//                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
//                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
//                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
//                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
//                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
//                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
//                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
//                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

bool isSafe(vector<vector<int>>& arr, int row, int col, int num){
  for(int i=0; i<arr.size(); i++)
    if(arr[row][i]==num)
      return false;

  for(int i=0; i<arr.size(); i++)
    if(arr[i][col]==num)
      return false;

  int startRow = row-row%3;
  int startCol = col-col%3;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(arr[i+startRow][startCol]==num)
        return false;
    }
  }

  return true;
}

bool solveSudoku(vector<vector<int>>& arr, int row, int col){

  if(row==arr.size()-1 && col==arr.size())
    return true;

  if(col==arr.size()){
    row++;
    col=0;
  }

  if(arr[row][col]>0)
    return solveSudoku(arr, row, col+1);

  for(int num=1; num<=arr.size(); num++){

    if(isSafe(arr, row, col, num)){
      // do
      arr[row][col]=num;

      // recur
      if(solveSudoku(arr, row, col+1))
        return true;

      // undo
      arr[row][col]=0;
    }
  }

  return false;
}

void print(vector<vector<int>>& arr){
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++)
      cout<<arr[i][j]<<" ";
    cout<<"\n";
  }
}

int main()
{
  vector<vector<int>> arr { { 3, 0, 6, 5, 0, 8, 4, 0, 0 }, { 5, 2, 0, 0, 0, 0, 0, 0, 0 }, { 0, 8, 7, 0, 0, 0, 0, 3, 1 }, { 0, 0, 3, 0, 1, 0, 0, 8, 0 }, { 9, 0, 0, 8, 6, 3, 0, 0, 5 }, { 0, 5, 0, 0, 9, 0, 6, 0, 0 }, { 1, 3, 0, 0, 0, 0, 2, 5, 0 }, { 0, 0, 0, 0, 0, 0, 0, 7, 4 }, { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

  if(solveSudoku(arr, 0, 0))
    print(arr);
  else
    cout<<"Kyu time pass kr rhe ho";
  return 0;
}
