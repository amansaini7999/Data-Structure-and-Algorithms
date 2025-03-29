#include<bits/stdc++.h>
using namespace std;

const int n=4;

void rotateMatrix(int arr[][n], int number){

  number = number%(n*n);
  int ans[n][n], i, j;

  for(i=0; i<n; i++){
    for(j=0; j<n; j++)
      ans[i][j] = arr[i][j];
  }

  while(number){

    for(j=0; j<n-1; j++)
      ans[0][j+1] = arr[0][j];

    for(i=0; i<n-1; i++)
      ans[i+1][n-1] = arr[i][n-1];

    for(j=n-1; j>0; j--)
      ans[n-1][j-1] = arr[n-1][j];

    for(i=n-1; i>0; i--)
      ans[i-1][0] = arr[i][0];

    // cout<<number<<" ";

    number--;
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
      cout<<ans[i][j]<<" ";
    cout<<"\n";
  }
}

int main()
{
  // int n = 3;
  // int arr[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int arr[n][n] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int number = 1;

  rotateMatrix(arr, number);

  return 0;
}
