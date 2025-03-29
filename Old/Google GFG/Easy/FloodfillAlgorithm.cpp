#include<bits/stdc++.h>
using namespace std;

void floodFillUtil(vector<vector<int>>& arr, int x, int y, int prevC, int newC)
{
  if(x<0 || x>=arr.size() || y<0 || y>=arr[0].size())
    return;

  else if(arr[x][y]!=prevC)
    return;

  else if(arr[x][y]==newC)
    return;

  arr[x][y]=newC;

  floodFillUtil(arr, x, y-1, prevC, newC);
  floodFillUtil(arr, x, y+1, prevC, newC);
  floodFillUtil(arr, x-1, y, prevC, newC);
  floodFillUtil(arr, x+1, y, prevC, newC);
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> arr;

    for(int i=0; i<n; i++)
    {
      vector<int> temp;
      for(int j=0; j<m; j++)
      {
          int z;
          cin>>z;
          temp.push_back(z);
      }
      arr.push_back(temp);
    }

    int x, y, k;
    cin>>x>>y>>k;

    int prevC = arr[x][y];

    floodFillUtil(arr, x, y, prevC, k);

    for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      //cout<<"\n";
    }
  }
  return 0;
}
