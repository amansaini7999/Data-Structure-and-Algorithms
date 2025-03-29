#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& arr){
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++)
      cout<<arr[i][j]<<" ";
    cout<<"\n";
  }
}

void inplaceRotate(vector<vector<int>>& arr){
  int n=arr.size()-1;
  for(int i=0; i<=n; i++){
    for(int j=0; j<=n-i; j++)
      swap(arr[i][j], arr[n-j][n-i]);
  }

  for(int i=0; i<=n; i++){
    int j=0;
    int k=n;

    while(j<=k){
      swap(arr[i][j], arr[i][k]);
      j++;
      k--;
    }

  }
}

int main()
{
  vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  print(arr);
  cout<<"\n";
  inplaceRotate(arr);
  print(arr);
  return 0;
}
