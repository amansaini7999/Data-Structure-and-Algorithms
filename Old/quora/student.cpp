#include<bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<int, vector<int>> mp;
  int n, m;
  cin>>n>>m;

  int matrix[n][n]={1};

  for(int i=0; i<m; i++){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int index1=a*10+b;
    int index2=c*10+d;

    if(mp.find(index1)==mp.end()){
      vector<int> temp;
      temp.push_back(index2);
      mp[index1]=temp;
    }

    else{
      vector<int> temp;
      temp=mp[index1];
      temp.push_back(index2);
      mp[index1]=temp;
    }
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(matrix[i-1][j-1]!=0){
        int index=i*10+j;
        if(mp.find(index)!=mp.end()){
          vector<int> v = mp[index];

          for(auto itr:v){
            int b = itr%10;
            int a = itr/10;

            matrix[a-1][b-1]=0;
          }
        }
      }
    }
  }

  int cnt=0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
      if(matrix[i][j]==1)
        cnt++;
  }

  cout<<cnt;

  return 0;
}
