#include<bits/stdc++.h>
using namespace std;

long long int safeLocations(int m, int n, int p, int **c)
{
  long long int ans=0;

  int arr[m][n]={0};

  for(int i=0; i<p; i++)
  {
    int x=c[i][0], y=c[i][1];

    arr[x][y]=1;

    arr[x-2][y]=1;
    arr[x-1][y]=1;
    arr[x+1][y]=1;
    arr[x+2][y]=1;

    arr[x][y-2]=1;
    arr[x][y-1]=1;
    arr[x][y+1]=1;
    arr[x][y+2]=1;

    arr[x-1][y-1]=1;
    arr[x-1][y+1]=1;
    arr[x+1][y-1]=1;
    arr[x+1][y+1]=1;
  }

  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(arr[i][j]==0)
        ans++;
    }
  }

  return ans;
}

int main()
{
  int m, n, p;
  cin>>m>>n>>p;

  int **c = new int* [p];

  for(int i=0; i<p; i++)
  {
    c[i] = new int[2];
    cin>>c[i][0]>>c[i][1];
  }
  cout<<safeLocations(m, n, p, c);
  return 0;
}
