#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals)
{
  if(intervals.size()==0)
    return intervals;

  sort(intervals.begin(), intervals.end());

  stack<vector<int>> st;
  st.push(intervals[0]);

  for(int i=1; i<intervals.size(); i++)
  {
    if(st.top()[1]<intervals[i][0])
      st.push(intervals[i]);

    else if(st.top()[1]<intervals[i][1])
    {
      int x = st.top()[0];
      st.pop();
      vector<int> temp;
      temp.push_back(x);
      temp.push_back(intervals[i][1]);

      st.push(temp);
    }
  }

  vector<vector<int>> ans;
  while(!st.empty())
  {
    int x=st.top()[0];
    int y=st.top()[1];
    st.pop();

    vector<int> temp;
    temp.push_back(x);
    temp.push_back(y);

    ans.push_back(temp);
  }

  sort(ans.begin(), ans.end());
  return ans;
}

int main()
{
  int n;
  cin>>n;

  vector<vector<int>> v;
  for(int i=0; i<n; i++)
  {
    int x, y;
    cin>>x>>y;

    vector<int> temp;
    temp.push_back(x);
    temp.push_back(y);

    v.push_back(temp);
  }

  vector<vector<int>> ans;
  ans = merge(v);

  for(int i=0; i<ans.size(); i++)
  {
    cout<<ans[i][0]<<" "<<ans[i][1];
    cout<<"\n";
  }

  return 0;
}
