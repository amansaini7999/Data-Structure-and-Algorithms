#include<bits/stdc++.h>
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {
  int i, j;
  long max=-1;
  vector<long> v;
  for(i=1; i<=n; i++)
    v.push_back(0);

  for(i=0; i<queries.size(); i++)
    for(j=queries[i][0]; j<=queries[i][1]; j++)
    {
      v[j]+=queries[i][2];
      if(max<v[j])
        max = v[j];
    }

  return max;
}

int main()
{
  int n, m;
  cin>>n>>m;
  vector<vector<int>> queries(m);

  for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }
      }

  long result = arrayManipulation(n, queries);
  cout<<result<<"\n";
  return 0;
}
