#include<bits/stdc++.h>
using namespace std;

/*bool isCube(int prod)
{
  int cube_root;
  cube_root = round(cbrt(prod));

  if (cube_root * cube_root * cube_root == prod)
    return 1;
  else
    return 0;
}

int solve(vector<int> v)
{
  int i=0;
  vector<int> :: iterator itr;
  itr = v.begin();
  while(i<v.size())
  {
    for(int j=i+1; j<v.size(); j++)
    {
      int prod = v[i]*v[j];
      if(isCube(prod))
        v.erase(itr);
    }
    i++;
    itr++;
  }
  return v.size();
}*/

int solve(vector<int>a)
{
    int i=0;
    vector<int> :: iterator itr;
    itr = a.begin();
    while(i<a.size())
    {
        for(int j= i+1; j<a.size(); j++)
        {
            int c = a[i]*a[j];
            int k = round(cbrt(c));
            if(c == k*k*k)
                a.erase(itr);
        }
        i++;
        itr++;
    }
    return a.size();
}

int main()
{
  int n;
  cin>>n;

  vector<int> v;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }

  cout<<solve(v)<<"\n";

  return 0;
}
