#include<bits/stdc++.h>
using namespace std;

vector<int> slidingMaximum(vector<int> v, int b)
{
  deque<int> q;

  int i;
  for(i=0; i<b; i++)
  {
    while(!q.empty() && v[i]>=v[q.front()])
      q.pop_back();

    q.push_back(i);
  }

  vector<int> ans;
  for( ; i<v.size(); i++)
  {
    ans.push_back(v[q.front()]);

    while(!q.empty() && q.front()<=i-b)
      q.pop_front();

    while(!q.empty() && v[i]>=v[q.front()])
      q.pop_back();

    q.push_back(i);
  }
  ans.push_back(v[q.front()]);

  return ans;
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

  int b;
  cin>>b;

  v = slidingMaximum(v, b);

  for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";

  cout<<"\n";
  return 0;
}
