#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<vector<int>> v)
{
  vector<int> temp;
  temp.push_back(0);

  int x=0;
  for(int i=0; i<v.size(); i++)
  {
    if(v[i][0] == 0)
    {
      for(int j=0; j<temp.size(); j++)
        x = x^temp[j];
      temp.push_back(v[i][1]);
    }

    else
    {
      x = x^v[i][1];
      //for(int j=0; j<temp.size(); j++)
        //temp[j] = temp[j]^v[i][1];
    }
  }
  sort(temp.begin(), temp.end());
  return temp;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    vector<vector<int>> v;

    for(int i=0; i<n; i++)
    {
      vector<int> temp;
      for(int j=0; j<2; j++)
      {
        int x;
        cin>>x;
        temp.push_back(x);
      }
      v.push_back(temp);
    }

    vector<int> v1;
    v1 = solve(v);

    vector<int> :: iterator itr;
    for(itr=v1.begin(); itr!=v1.end(); itr++)
      cout<<*itr<<" ";

    cout<<"\n";
  }
  return 0;
}
