#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height)
{
  if(height.size()==0)
    return 0;

  int i=0, j=height.size()-1;

  int mx = 0;
  while(i<j)
  {
    mx = max(mx, min(height[i], height[j])*(j-i));

    if(height[i]<height[j])
      i++;
    else
      j--;
  }

  return mx;
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

  cout<<maxArea(v)<<"\n";

  return 0;
}
